#include "votermanagement.h"
#include "ui_votermanagement.h"

#include <QCloseEvent>
#include "dashboard.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QStackedWidget>
#include <QSqlQuery>

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

    refreshTimer = new QTimer(this);
    connect(refreshTimer, &QTimer::timeout, this, &VoterManagement::AutoRefresh);
    refreshTimer->start(10000);

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
        QMessageBox::critical(this, "Error", "Database not open" + db.lastError().text());
    }

    QSqlQuery QueryInsertData(db);
    QSqlDatabase::database().transaction();
    QueryInsertData.prepare("INSERT INTO voter_info(first_name, last_name, voter_id, age) VALUES(:first_name, :last_name, :voter_id, :age)");
    QueryInsertData.bindValue(":first_name", ui->lineEdit_first_name->text());
    QueryInsertData.bindValue(":last_name", ui->lineEdit_last_name->text());
    QueryInsertData.bindValue(":voter_id", ui->lineEdit_voter_id->text());

    bool ageOk;
    int age = ui->lineEdit_age->text().toInt(&ageOk);
    if (ageOk) {
        QueryInsertData.bindValue(":age", age);
    }
    else {
        QMessageBox::critical(this, "Error", "Invalid Age Input");
        QSqlDatabase::database().rollback();
        db.close();
        return;
    }

    if (QueryInsertData.exec()) {
        QMessageBox::information(this, "Success", "Voter Added Succesfully");
        QSqlDatabase::database().commit();

        ui->lineEdit_first_name->clear();
        ui->lineEdit_last_name->clear();
        ui->lineEdit_age->clear();
        ui->lineEdit_voter_id->clear();

        ui->lineEdit_first_name->setFocus();
    }
    else {
        QMessageBox::information(this, "Error", "Error Adding Voter: " + QueryInsertData.lastError().text());
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
        background-color: #f5f5f5;
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

    refreshTimer->stop();

    QTableWidgetItem *idItem = ui->Voter_table->item(row, 0);
    QTableWidgetItem *editedItem = ui->Voter_table->item(row, column);

    if (!idItem || !editedItem) {
        refreshTimer->start(10000);
        return;
    }

    QString oldValue = editedItem->data(Qt::UserRole).toString();
    QString newValue = editedItem->text();

    if (oldValue == newValue) {
        refreshTimer->start(10000);
        return;
    }

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
            refreshTimer->start(10000);
            return;
        }
        break;
    case 0:
        QMessageBox::warning(this, "Warning", "Voter ID cannot be changed. Please delete and re-add the voter.");
        refreshTimer->start(10000);
        return;
    default:
        refreshTimer->start(10000);
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

    refreshTimer->start(10000);
}

void VoterManagement::AutoRefresh()
{
    LoadVoterTable();
}
