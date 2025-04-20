#include "candidatesmanagement.h"
#include "ui_candidatesmanagement.h"

#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QComboBox>
#include <QStandardItemModel>
#include <QTimer>

candidatesmanagement::candidatesmanagement(QSqlDatabase &database, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::candidatesmanagement)
    , db(database)
    , refreshTimer(new QTimer(this))
{
    ui->setupUi(this);

    ui->label_6->setText("<img src=':/icons/buttons/icons/warning.png' width='14' height='14'> Voter ID cannot be changed. If incorrect, please delete and re-add the candidate.");

    connect(ui->pushButton_back, &QPushButton::clicked, this, &candidatesmanagement::BackButton);
    connect(ui->pushButton_insert, &QPushButton::clicked, this, &candidatesmanagement::InsertButton);
    connect(ui->refresh_button, &QPushButton::clicked, this, &candidatesmanagement::LoadCandidateTable);
    connect(ui->list_delete_button, &QPushButton::clicked, this, &candidatesmanagement::ListDeleteButton);
    connect(ui->list_deleteAll_button, &QPushButton::clicked, this, &candidatesmanagement::ListDeleteAllButton);
    connect(ui->candidate_tableWidget, &QTableWidget::cellChanged, this, &candidatesmanagement::onCellChanged);

    connect(refreshTimer, &QTimer::timeout, this, &candidatesmanagement::AutoRefresh);
    refreshTimer->start(10000);

    LoadCandidateTable();

    QStandardItemModel* model = qobject_cast<QStandardItemModel*>(ui->comboBox_positions->model());
    QStandardItem* item = model->item(0);
    item->setEnabled(false);
}

candidatesmanagement::~candidatesmanagement()
{
    delete ui;
}

void candidatesmanagement::closeEvent(QCloseEvent *event)
{
    emit windowClosed();
    event->accept();
}

void candidatesmanagement::BackButton()
{
    ui->lineEdit_first_name->clear();
    ui->lineEdit_last_name->clear();
    ui->lineEdit_age->clear();
    ui->lineEdit_party->clear();
    ui->lineEdit_voter_id->clear();
    ui->comboBox_positions->setCurrentIndex(0);
    this->close();
}

void candidatesmanagement::InsertButton()
{
    if (!db.open()) {
        QMessageBox::critical(this, "Error", "Database not open" + db.lastError().text());
        return;
    }

    QSqlQuery QueryInsertData(db);
    QSqlDatabase::database().transaction();
    QueryInsertData.prepare("INSERT INTO candidates_info(first_name, last_name, voter_id, age, position, party) VALUES(:first_name, :last_name, :voter_id, :age, :position, :party)");
    QueryInsertData.bindValue(":first_name", ui->lineEdit_first_name->text());
    QueryInsertData.bindValue(":last_name", ui->lineEdit_last_name->text());
    QueryInsertData.bindValue(":party", ui->lineEdit_party->text());
    QueryInsertData.bindValue(":voter_id", ui->lineEdit_voter_id->text());

    QString selectedPosition = ui->comboBox_positions->currentText();
    QueryInsertData.bindValue(":position", selectedPosition);

    bool ageOk;
    int age = ui->lineEdit_age->text().toInt(&ageOk);
    if (ageOk) {
        QueryInsertData.bindValue(":age", age);
    } else {
        QMessageBox::critical(this, "Error", "Invalid Age Input");
        QSqlDatabase::database().rollback();
        db.close();
        return;
    }

    if (QueryInsertData.exec()) {
        QMessageBox::information(this, "Success", "Candidate Added Succesfully");
        QSqlDatabase::database().commit();

        ui->lineEdit_first_name->clear();
        ui->lineEdit_last_name->clear();
        ui->lineEdit_age->clear();
        ui->lineEdit_party->clear();
        ui->lineEdit_voter_id->clear();
        ui->comboBox_positions->setCurrentIndex(0);

        ui->lineEdit_first_name->setFocus();
    } else {
        QMessageBox::information(this, "Error", "Error Adding Candidate: " + QueryInsertData.lastError().text());
        QSqlDatabase::database().rollback();
    }
}

void candidatesmanagement::LoadCandidateTable()
{
    loadingTable = true;
    ui->candidate_tableWidget->setSortingEnabled(false);
    ui->candidate_tableWidget->setRowCount(0);

    QSqlQuery query("SELECT voter_id, first_name, last_name, age, position, party FROM candidates_info");
    ui->candidate_tableWidget->setColumnCount(6);
    ui->candidate_tableWidget->setHorizontalHeaderLabels(QStringList() << "VOTER ID" << "FIRST NAME" << "LAST NAME" << "AGE" << "POSITION" << "PARTY");

    int row = 0;
    while (query.next()) {
        ui->candidate_tableWidget->insertRow(row);

        for (int col = 0; col < 6; ++col) {
            QTableWidgetItem* item = new QTableWidgetItem(query.value(col).toString());
            item->setData(Qt::UserRole, item->text());

            if (col == 0) {
                item->setFlags(item->flags() & ~Qt::ItemIsEditable);
                item->setBackground(QColor("#f0f0f0"));
            }

            ui->candidate_tableWidget->setItem(row, col, item);
        }

        row++;
    }

    auto header = ui->candidate_tableWidget->horizontalHeader();
    for (int i = 0; i < ui->candidate_tableWidget->columnCount(); ++i) {
        header->setSectionResizeMode(i, QHeaderView::ResizeToContents);
    }
    header->setSectionResizeMode(1, QHeaderView::Stretch);
    header->setSectionResizeMode(2, QHeaderView::Stretch);

    ui->candidate_tableWidget->setStyleSheet(R"(
    QTableWidget {
        background-color: #ffffff;
        border: 1px solid black;
        gridline-color: #ccc;
        font-size: 14px;
    }

    QTableWidget::item {
        padding: 6px;
    }

    QTableWidget::item:selected {
        background-color: #cce5ff;
        color: #000;
    }

    QTableWidget::item:hover {
        background-color: #e6f2ff;
    }

    QHeaderView::section {
        background-color: #f5f5f5;
        padding: 6px;
        border: 1px solid #ccc;
        font-weight: bold;
    }

    QTableCornerButton::section {
        background-color: #f5f5f5;
        border: 1px solid #ccc;
    }
    )");

    ui->candidate_tableWidget->setSortingEnabled(true);
    loadingTable = false;
}

void candidatesmanagement::ListDeleteButton()
{
    int row = ui->candidate_tableWidget->currentRow();
    if (row >= 0) {
        QString voter_id = ui->candidate_tableWidget->item(row, 0)->text();

        QMessageBox::StandardButton reply = QMessageBox::warning(this, "Confirm Deletion",
                                                                 "Are you sure you want to delete this candidate? It can't be undone.",
                                                                 QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            QSqlQuery deleteData(db);
            deleteData.prepare("DELETE FROM candidates_info WHERE voter_id = :voter_id");
            deleteData.bindValue(":voter_id", voter_id);

            if (deleteData.exec()) {
                ui->candidate_tableWidget->removeRow(row);
                QMessageBox::information(this, "Deleted", "Candidate deleted successfully.");
            } else {
                QMessageBox::warning(this, "Error", "Could not delete candidate from the database.");
            }
        }
    } else {
        QMessageBox::warning(this, "No Selection", "Please select a row to delete.");
    }
}

void candidatesmanagement::ListDeleteAllButton()
{
    QMessageBox::StandardButton reply = QMessageBox::warning(this, "Confirm Deletion",
                                                             "Are you sure you want to delete ALL candidates? It can't be undone.",
                                                             QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QSqlQuery deleteAll(db);

        if (deleteAll.exec("DELETE FROM candidates_info")) {
            ui->candidate_tableWidget->setRowCount(0);
            QMessageBox::information(this, "Deleted", "All candidates have been deleted.");
        } else {
            QMessageBox::warning(this, "Error", "Failed to delete candidates from the database.");
        }
    }
}

void candidatesmanagement::onCellChanged(int row, int column)
{
    if (loadingTable) return;

    QTableWidgetItem *idItem = ui->candidate_tableWidget->item(row, 0);
    QTableWidgetItem *editedItem = ui->candidate_tableWidget->item(row, column);

    if (!idItem || !editedItem) return;

    QString oldValue = editedItem->data(Qt::UserRole).toString();
    QString newValue = editedItem->text();

    if (oldValue == newValue) return;

    QString columnName;
    switch (column) {
    case 1: columnName = "first_name"; break;
    case 2: columnName = "last_name"; break;
    case 3:
        columnName = "age";
        bool ok;
        newValue.toInt(&ok);
        if (!ok) {
            QMessageBox::warning(this, "Invalid Input", "Age must be a number.");
            ui->candidate_tableWidget->blockSignals(true);
            editedItem->setText(oldValue);
            ui->candidate_tableWidget->blockSignals(false);
            return;
        }
        break;
    case 4: columnName = "position"; break;
    case 5: columnName = "party"; break;
    default: return;
    }

    QSqlQuery updateQuery(db);
    updateQuery.prepare(QString("UPDATE candidates_info SET %1 = :value WHERE voter_id = :id").arg(columnName));
    updateQuery.bindValue(":value", newValue);
    updateQuery.bindValue(":id", idItem->text());

    if (updateQuery.exec()) {
        editedItem->setData(Qt::UserRole, newValue);
        editedItem->setBackground(Qt::green);
        QMessageBox::information(this, "Success", "Candidate info updated successfully.");
    } else {
        qDebug() << "Update failed:" << updateQuery.lastError().text();
    }
}

void candidatesmanagement::AutoRefresh()
{
    LoadCandidateTable();
}
