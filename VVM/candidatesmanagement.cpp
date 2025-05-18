#include "candidatesmanagement.h"
#include "ui_candidatesmanagement.h"

#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QComboBox>
#include <QStandardItemModel>
#include <QInputDialog>

candidatesmanagement::candidatesmanagement(QSqlDatabase &database, const QString &email, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::candidatesmanagement)
    , currentAdmin(email)
    , db(database)
{
    ui->setupUi(this);

    ui->label_6->setText("<img src=':/icons/buttons/icons/warning.png' width='14' height='14'> Voter ID cannot be changed. If incorrect, please delete and re-add the candidate.");

    connect(ui->pushButton_back, &QPushButton::clicked, this, &candidatesmanagement::BackButton);
    connect(ui->pushButton_insert, &QPushButton::clicked, this, &candidatesmanagement::InsertButton);
    connect(ui->refresh_button, &QPushButton::clicked, this, &candidatesmanagement::LoadCandidateTable);
    connect(ui->list_delete_button, &QPushButton::clicked, this, &candidatesmanagement::ListDeleteButton);
    connect(ui->list_deleteAll_button, &QPushButton::clicked, this, &candidatesmanagement::ListDeleteAllButton);
    connect(ui->candidate_tableWidget, &QTableWidget::cellChanged, this, &candidatesmanagement::onCellChanged);

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
        QMessageBox::critical(this, "Error", "Database not open: " + db.lastError().text());
        return;
    }

    QString firstName = ui->lineEdit_first_name->text().trimmed();
    QString lastName = ui->lineEdit_last_name->text().trimmed();
    QString voterId = ui->lineEdit_voter_id->text().trimmed();
    QString ageText = ui->lineEdit_age->text().trimmed();
    QString party = ui->lineEdit_party->text().trimmed();
    QString position = ui->comboBox_positions->currentText().trimmed();

    if (firstName.isEmpty() || lastName.isEmpty() || voterId.isEmpty() || ageText.isEmpty() || position == "Select Position") {
        QMessageBox::warning(this, "Missing Information", "Please fill in all fields before adding a candidate.");
        return;
    }

    QSqlQuery checkCandidate(db);
    checkCandidate.prepare("SELECT COUNT(*) FROM candidates_info WHERE voter_id = :voter_id");
    checkCandidate.bindValue(":voter_id", voterId);
    if (checkCandidate.exec() && checkCandidate.next()) {
        if (checkCandidate.value(0).toInt() > 0) {
            QMessageBox::warning(this, "Duplicate Voter ID", "A candidate with this ID already exists.");
            return;
        }
    } else {
        QMessageBox::warning(this, "Error", "Failed to check for duplicate voter ID in candidates.");
        return;
    }

    bool ageOk;
    int age = ageText.toInt(&ageOk);
    if (!ageOk) {
        QMessageBox::critical(this, "Error", "Invalid Age Input");
        return;
    }

    QSqlQuery insertCandidate(db);
    QSqlDatabase::database().transaction();
    insertCandidate.prepare(R"(
        INSERT INTO candidates_info(first_name, last_name, voter_id, age, position, party)
        VALUES(:first_name, :last_name, :voter_id, :age, :position, :party)
    )");
    insertCandidate.bindValue(":first_name", firstName);
    insertCandidate.bindValue(":last_name", lastName);
    insertCandidate.bindValue(":voter_id", voterId);
    insertCandidate.bindValue(":age", age);
    insertCandidate.bindValue(":position", position);
    insertCandidate.bindValue(":party", party);

    if (!insertCandidate.exec()) {
        QMessageBox::warning(this, "Error", "Error Adding Candidate: " + insertCandidate.lastError().text());
        QSqlDatabase::database().rollback();
        return;
    }

    QSqlQuery checkVoter(db);
    checkVoter.prepare("SELECT COUNT(*) FROM voter_info WHERE voter_id = :voter_id");
    checkVoter.bindValue(":voter_id", voterId);

    if (checkVoter.exec() && checkVoter.next() && checkVoter.value(0).toInt() == 0) {
        QSqlQuery insertVoter(db);
        insertVoter.prepare(R"(
            INSERT INTO voter_info(first_name, last_name, voter_id, age)
            VALUES(:first_name, :last_name, :voter_id, :age)
        )");
        insertVoter.bindValue(":first_name", firstName);
        insertVoter.bindValue(":last_name", lastName);
        insertVoter.bindValue(":voter_id", voterId);
        insertVoter.bindValue(":age", age);

        if (!insertVoter.exec()) {
            QMessageBox::warning(this, "Error", "Error inserting candidate into voter_info: " + insertVoter.lastError().text());
            QSqlDatabase::database().rollback();
            return;
        }
    }

    QSqlDatabase::database().commit();
    QMessageBox::information(this, "Success", "Candidate Added Successfully");

    ui->lineEdit_first_name->clear();
    ui->lineEdit_last_name->clear();
    ui->lineEdit_age->clear();
    ui->lineEdit_party->clear();
    ui->lineEdit_voter_id->clear();
    ui->comboBox_positions->setCurrentIndex(0);
    ui->lineEdit_first_name->setFocus();
}




void candidatesmanagement::LoadCandidateTable()
{
    loadingTable = true;
    ui->candidate_tableWidget->setSortingEnabled(false);
    ui->candidate_tableWidget->setRowCount(0);

    QSqlQuery query (R"(
    SELECT voter_id, last_name, first_name, age, position, party FROM candidates_info
    ORDER BY last_name ASC
    )");
    ui->candidate_tableWidget->setColumnCount(6);
    ui->candidate_tableWidget->setHorizontalHeaderLabels(QStringList() << "VOTER ID" << "LAST NAME" << "FIRST NAME" << "AGE" << "POSITION" << "PARTY");

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
    ui->candidate_tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);

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
                                                             "Are you sure you want to delete ALL candidates? This action is irreversible.",
                                                             QMessageBox::Yes | QMessageBox::No);

    if (reply != QMessageBox::Yes)
        return;

    bool ok;
    QString passwordInput = QInputDialog::getText(this, "Admin Password Required",
                                                  "Enter your admin password to confirm:",
                                                  QLineEdit::Password, "", &ok);

    if (!ok || passwordInput.isEmpty()) {
        QMessageBox::information(this, "Cancelled", "Operation cancelled.");
        return;
    }

    QSqlQuery query(db);
    query.prepare("SELECT password FROM admins WHERE email = :email");
    query.bindValue(":email", currentAdmin);

    if (!query.exec() || !query.next()) {
        QMessageBox::critical(this, "Error", "Could not verify admin credentials.");
        return;
    }

    QString storedPassword = query.value(0).toString();

    if (passwordInput != storedPassword) {
        QMessageBox::critical(this, "Access Denied", "Incorrect password. Operation aborted.");
        return;
    }

    QSqlQuery deleteAll(db);
    if (deleteAll.exec("DELETE FROM candidates_info")) {
        ui->candidate_tableWidget->setRowCount(0);
        QMessageBox::information(this, "Deleted", "All candidates have been deleted.");
    } else {
        QMessageBox::warning(this, "Error", "Failed to delete candidates from the database.");
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
    case 1: columnName = "last_name"; break;
    case 2: columnName = "first_name"; break;
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

