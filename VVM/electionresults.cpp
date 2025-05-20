#include "electionresults.h"
#include "ui_electionresults.h"

#include <QSqlDatabase>
#include <QCloseEvent>
#include <QSqlQuery>
#include <QsqlError>
#include <QFileDialog>
#include <QMessageBox>
#include <QTimer>

ElectionResults::ElectionResults(QSqlDatabase &database, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ElectionResults)
    , db(database)
{
    ui->setupUi(this);

    loadWinnersOnlyBarangay();
    loadWinnersOnlySK();

    connect(ui->pushButton_back, &QPushButton::clicked, this, &ElectionResults::BackButton);
    connect(ui->pushButton_print, &QPushButton::clicked, this, &ElectionResults::print);

    this->setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);

}

ElectionResults::~ElectionResults()
{
    delete ui;
}

void ElectionResults::closeEvent(QCloseEvent *event)
{
    emit windowClosed();
    event->accept();
}


void ElectionResults::BackButton()
{
    this->close();
}

void ElectionResults::loadWinnersOnlyBarangay()
{
    ui->table_barangay->setSelectionMode(QAbstractItemView::NoSelection);
    ui->table_barangay->setFocusPolicy(Qt::NoFocus);
    ui->table_barangay->setSortingEnabled(false);
    ui->table_barangay->setColumnCount(4);
    ui->table_barangay->setHorizontalHeaderLabels(QStringList() << "NAME" << "POSITION" << "PARTY" << "VOTE COUNT");
    ui->table_barangay->setRowCount(0);

    QStringList positions = {"Barangay Captain", "Barangay Councilor"};

    int row = 0;

    for (const QString& pos : positions) {
        QSqlQuery query(db);
        query.prepare(R"(
            SELECT last_name || ', ' || first_name AS full_name, position, party, vote_count
            FROM candidates_info
            WHERE position = :position
            ORDER BY vote_count DESC
        )");
        query.bindValue(":position", pos);

        if (!query.exec()) {
            qDebug() << "Query failed for position" << pos << ":" << query.lastError().text();
            continue;
        }

        int limit = (pos.contains("Councilor", Qt::CaseInsensitive)) ? 7 : 1;
        int count = 0;

        while (query.next() && count < limit) {
            QString name = query.value(0).toString();
            QString position = query.value(1).toString();
            QString party = query.value(2).toString();
            int votes = query.value(3).toInt();

            ui->table_barangay->insertRow(row);
            ui->table_barangay->setItem(row, 0, new QTableWidgetItem(name));
            ui->table_barangay->setItem(row, 1, new QTableWidgetItem(position));
            ui->table_barangay->setItem(row, 2, new QTableWidgetItem(party));
            ui->table_barangay->setItem(row, 3, new QTableWidgetItem(QString::number(votes)));

            ++row;
            ++count;
        }
    }

    auto header = ui->table_barangay->horizontalHeader();
    header->setSectionResizeMode(0, QHeaderView::Stretch);
    header->setSectionResizeMode(1, QHeaderView::ResizeToContents);
    header->setSectionResizeMode(2, QHeaderView::Stretch);
    header->setSectionResizeMode(3, QHeaderView::ResizeToContents);

    ui->table_barangay->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);

    ui->table_barangay->setStyleSheet(R"(
        QTableWidget {
            background-color: #ffffff;
            border: 1px solid black;
            gridline-color: #ccc;
            font-size: 14px;
        }
        QTableWidget::item {
            padding: 6px;
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
}

void ElectionResults::loadWinnersOnlySK()
{
    ui->table_sk->setSelectionMode(QAbstractItemView::NoSelection);
    ui->table_sk->setFocusPolicy(Qt::NoFocus);
    ui->table_sk->setSortingEnabled(false);
    ui->table_sk->setColumnCount(4);
    ui->table_sk->setHorizontalHeaderLabels(QStringList() << "NAME" << "POSITION" << "PARTY" << "VOTE COUNT");
    ui->table_sk->setRowCount(0);

    QStringList positions = {"SK Chairman", "SK Councilor"};

    int row = 0;

    for (const QString& pos : positions) {
        QSqlQuery query(db);
        query.prepare(R"(
            SELECT last_name || ', ' || first_name AS full_name, position, party, vote_count
            FROM candidates_info
            WHERE position = :position
            ORDER BY vote_count DESC
        )");
        query.bindValue(":position", pos);

        if (!query.exec()) {
            qDebug() << "Query failed for position" << pos << ":" << query.lastError().text();
            continue;
        }

        int limit = (pos.contains("Councilor", Qt::CaseInsensitive)) ? 7 : 1;
        int count = 0;

        while (query.next() && count < limit) {
            QString name = query.value(0).toString();
            QString position = query.value(1).toString();
            QString party = query.value(2).toString();
            int votes = query.value(3).toInt();

            ui->table_sk->insertRow(row);
            ui->table_sk->setItem(row, 0, new QTableWidgetItem(name));
            ui->table_sk->setItem(row, 1, new QTableWidgetItem(position));
            ui->table_sk->setItem(row, 2, new QTableWidgetItem(party));
            ui->table_sk->setItem(row, 3, new QTableWidgetItem(QString::number(votes)));

            ++row;
            ++count;
        }
    }

    auto header = ui->table_sk->horizontalHeader();
    header->setSectionResizeMode(0, QHeaderView::Stretch);
    header->setSectionResizeMode(1, QHeaderView::ResizeToContents);
    header->setSectionResizeMode(2, QHeaderView::Stretch);
    header->setSectionResizeMode(3, QHeaderView::ResizeToContents);

    ui->table_sk->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);

    ui->table_sk->setStyleSheet(R"(
        QTableWidget {
            background-color: #ffffff;
            border: 1px solid black;
            gridline-color: #ccc;
            font-size: 14px;
        }
        QTableWidget::item {
            padding: 6px;
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
}

void ElectionResults::writeTableToStream(QTableWidget* table, QTextStream& out)
{
    const int cols = table->columnCount();
    const int rows = table->rowCount();

    // Header
    for (int col = 0; col < cols; ++col) {
        out << "\"" << table->horizontalHeaderItem(col)->text() << "\"";
        if (col < cols - 1) out << ",";
    }
    out << "\n";

    // Rows
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            QTableWidgetItem* item = table->item(row, col);
            out << "\"" << (item ? item->text() : "") << "\"";
            if (col < cols - 1) out << ",";
        }
        out << "\n";
    }
}


void ElectionResults::print()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save Results as CSV", "", "CSV Files (*.csv)");
    if (fileName.isEmpty()) return;
    if (!fileName.endsWith(".csv", Qt::CaseInsensitive))
        fileName += ".csv";

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Failed to save file.");
        return;
    }

    QTextStream out(&file);

    // Write Barangay Table
    out << "BARANGAY OFFICIALS\n";
    writeTableToStream(ui->table_barangay, out);
    out << "\n";

    // Write SK Table
    out << "SK OFFICIALS\n";
    writeTableToStream(ui->table_sk, out);

    file.close();
    QMessageBox::information(this, "Success", "Results exported successfully.");
}



