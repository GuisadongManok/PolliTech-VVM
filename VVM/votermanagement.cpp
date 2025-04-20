#include "votermanagement.h"
#include "ui_votermanagement.h"

#include <QCloseEvent>
#include "dashboard.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>

VoterManagement::VoterManagement(QSqlDatabase &database, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VoterManagement)
    , db(database)
{
    ui->setupUi(this);

    connect(ui->pushButton_back, &QPushButton::clicked, this, &VoterManagement::BackButton);
    connect(ui->pushButton_insert, &QPushButton::clicked, this, &VoterManagement::InsertVoterButton);
    connect(ui->RefreshButton, &QPushButton::clicked, this, &VoterManagement::LoadVoterTable);
    connect(ui->ListDeleteButton, &QPushButton::clicked, this, &VoterManagement::ListDeleteButton);
    connect(ui->DeleteAll_Button, &QPushButton::clicked, this, &VoterManagement::ListDeleteAllButton);
    connect(ui->Voter_table, &QTableWidget::cellChanged, this, &VoterManagement::onCellChanged);

    LoadVoterTable();

    ui->label_6->setText("<img src=':/icons/buttons/icons/warning.png' width='14' height='14'> Voter ID cannot be changed. If incorrect, please delete and re-add the voter.");
}

VoterManagement::~VoterManagement()
{
    delete ui;
}

void VoterManagement::closeEvent(QCloseEvent *event)
{
    emit windowClosed();
    event->accept();
}

void VoterManagement::BackButton()
{
    ui->lineEdit_first_name->clear();
    ui->lineEdit_last_name->clear();
    ui->lineEdit_age->clear();
    ui->lineEdit_voter_id->clear();
    this->close();
}

void VoterManagement::InsertVoterButton()
{
    if (!db.open()) {
        QMessageBox::critical(this, "Error", "Database not open: " + db.lastError().text());
        return;
    }

    QString firstName = ui->lineEdit_first_name->text().trimmed();
    QString lastName = ui->lineEdit_last_name->text().trimmed();
    QString voterId = ui->lineEdit_voter_id->text().trimmed();
    QString ageText = ui->lineEdit_age->text().trimmed();

    if (firstName.isEmpty() || lastName.isEmpty() || voterId.isEmpty() || ageText.isEmpty()) {
        QMessageBox::warning(this, "Missing Information", "Please fill in all fields before adding a voter.");
        return;
    }

    QSqlQuery checkQuery(db);
    checkQuery.prepare("SELECT COUNT(*) FROM voter_info WHERE voter_id = :voter_id");
    checkQuery.bindValue(":voter_id", voterId);
    if (checkQuery.exec() && checkQuery.next()) {
        if (checkQuery.value(0).toInt() > 0) {
            QMessageBox::warning(this, "Duplicate Voter ID", "A voter with this ID already exists.");
            return;
        }
    } else {
        QMessageBox::warning(this, "Error", "Failed to check for duplicate voter ID.");
        return;
    }

    bool ageOk;
    int age = ageText.toInt(&ageOk);
    if (!ageOk) {
        QMessageBox::critical(this, "Error", "Invalid Age Input");
        return;
    }

    QSqlQuery QueryInsertData(db);
    QSqlDatabase::database().transaction();
    QueryInsertData.prepare(R"(
        INSERT INTO voter_info(first_name, last_name, voter_id, age)
        VALUES(:first_name, :last_name, :voter_id, :age)
    )");
    QueryInsertData.bindValue(":first_name", firstName);
    QueryInsertData.bindValue(":last_name", lastName);
    QueryInsertData.bindValue(":voter_id", voterId);
    QueryInsertData.bindValue(":age", age);

    if (QueryInsertData.exec()) {
        QSqlDatabase::database().commit();
        QMessageBox::information(this, "Success", "Voter Added Successfully");

        ui->lineEdit_first_name->clear();
        ui->lineEdit_last_name->clear();
        ui->lineEdit_age->clear();
        ui->lineEdit_voter_id->clear();
        ui->lineEdit_first_name->setFocus();
    } else {
        QMessageBox::warning(this, "Error", "Error Adding Voter: " + QueryInsertData.lastError().text());
        QSqlDatabase::database().rollback();
    }
}


void VoterManagement::LoadVoterTable()
{
    loadingTable = true;
    ui->Voter_table->setRowCount(0);
    ui->Voter_table->setSortingEnabled(false);

    QSqlQuery query("SELECT voter_id, first_name, last_name, age FROM voter_info");
    ui->Voter_table->setColumnCount(4);
    ui->Voter_table->setHorizontalHeaderLabels(QStringList() << "VOTER ID" << "FIRST NAME" << "LAST NAME" << "AGE");

    int row = 0;
    while (query.next()) {
        ui->Voter_table->insertRow(row);

        QTableWidgetItem *idItem = new QTableWidgetItem(query.value("voter_id").toString());
        idItem->setFlags(idItem->flags() & ~Qt::ItemIsEditable);
        idItem->setBackground(QColor("#f0f0f0"));
        idItem->setData(Qt::UserRole, idItem->text());
        ui->Voter_table->setItem(row, 0, idItem);

        for (int col = 1; col < 4; ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            item->setData(Qt::UserRole, item->text());
            ui->Voter_table->setItem(row, col, item);
        }

        row++;
    }

    auto header = ui->Voter_table->horizontalHeader();
    for (int i = 0; i < ui->Voter_table->columnCount(); ++i) {
        header->setSectionResizeMode(i, QHeaderView::ResizeToContents);
    }
    header->setSectionResizeMode(1, QHeaderView::Stretch);
    header->setSectionResizeMode(2, QHeaderView::Stretch);

    ui->Voter_table->setStyleSheet(R"(
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
        background-color: #f5f5f5a;
        border: 1px solid #ccc;
    }
    )");

    ui->Voter_table->setSortingEnabled(true);
    loadingTable = false;
}

void VoterManagement::ListDeleteButton()
{
    int row = ui->Voter_table->currentRow();
    if (row >= 0) {
        QString voter_id = ui->Voter_table->item(row, 0)->text();

        QMessageBox::StandardButton reply = QMessageBox::warning(this, "Confirm Deletion",
                                                                 "Are you sure you want to delete this candidate? It can't be undone.",
                                                                 QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            QSqlQuery query;
            query.prepare("DELETE FROM voter_info WHERE voter_id = :voter_id");
            query.bindValue(":voter_id", voter_id);

            if (query.exec()) {
                ui->Voter_table->removeRow(row);
                QMessageBox::information(this, "Deleted", "Candidate deleted successfully.");
            } else {
                QMessageBox::warning(this, "Error", "Could not delete candidate from the database.");
            }
        }
    } else {
        QMessageBox::warning(this, "No Selection", "Please select a row to delete.");
    }
}

void VoterManagement::ListDeleteAllButton()
{
    QMessageBox::StandardButton reply = QMessageBox::warning(this, "Confirm Deletion",
                                                             "Are you sure you want to delete ALL candidates? It can't be undone.",
                                                             QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QSqlQuery query;

        if (query.exec("DELETE FROM candidates_info")) {
            ui->Voter_table->setRowCount(0);
            QMessageBox::information(this, "Deleted", "All candidates have been deleted.");
        } else {
            QMessageBox::warning(this, "Error", "Failed to delete candidates from the database.");
        }
    }
}

void VoterManagement::onCellChanged(int row, int column)
{
    if (loadingTable) return;

    QTableWidgetItem *idItem = ui->Voter_table->item(row, 0);
    QTableWidgetItem *editedItem = ui->Voter_table->item(row, column);

    if (!idItem || !editedItem) return;

    QString oldValue = editedItem->data(Qt::UserRole).toString();
    QString newValue = editedItem->text();

    if (oldValue == newValue) return;

    QString voterId = idItem->text();
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
            ui->Voter_table->blockSignals(true);
            editedItem->setText(oldValue);
            ui->Voter_table->blockSignals(false);
            return;
        }
        break;
    case 0:
        QMessageBox::warning(this, "Warning", "Voter ID cannot be changed. Please delete and re-add the voter.");
        return;
    default:
        return;
    }

    QSqlQuery updateQuery(db);
    updateQuery.prepare(QString("UPDATE voter_info SET %1 = :value WHERE voter_id = :id").arg(columnName));
    updateQuery.bindValue(":value", newValue);
    updateQuery.bindValue(":id", voterId);

    if (updateQuery.exec()) {
        editedItem->setData(Qt::UserRole, newValue);
        editedItem->setBackground(Qt::green);
        QMessageBox::information(this, "Success", "Voter info updated successfully.");
    } else {
        qDebug() << "Update failed:" << updateQuery.lastError().text();
    }
}
