#include "electionresults.h"
#include "ui_electionresults.h"

#include <QSqlDatabase>
#include <QCloseEvent>
#include <QSqlQuery>
#include <QsqlError>
#include <QFileDialog>
#include <QMessageBox>

ElectionResults::ElectionResults(QSqlDatabase &database, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ElectionResults)
    , db(database)
{
    ui->setupUi(this);

    loadVoteCounts();
    connect(ui->pushButton_back, &QPushButton::clicked, this, &ElectionResults::BackButton);


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

void ElectionResults::showEvent(QShowEvent *event)
{
    QDialog::showEvent(event);
    loadVoteCounts();
}


void ElectionResults::BackButton()
{
    this->close();
}

void ElectionResults::loadWinnersOnly(QTableWidget* table)
{
    table->setSelectionMode(QAbstractItemView::NoSelection);
    table->setFocusPolicy(Qt::NoFocus);
    table->setSortingEnabled(false);
    table->setColumnCount(4);
    table->setHorizontalHeaderLabels(QStringList() << "NAME" << "POSITION" << "PARTY" << "VOTE COUNT");
    table->setRowCount(0);

    QStringList positions = {
        "Barangay Captain", "Barangay Councilor",
        "SK Chairman", "SK Councilor"
    };

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

            table->insertRow(row);
            table->setItem(row, 0, new QTableWidgetItem(name));
            table->setItem(row, 1, new QTableWidgetItem(position));
            table->setItem(row, 2, new QTableWidgetItem(party));
            table->setItem(row, 3, new QTableWidgetItem(QString::number(votes)));

            ++row;
            ++count;
        }
    }

    // Resize columns
    auto header = table->horizontalHeader();
    header->setSectionResizeMode(0, QHeaderView::Stretch); // Name
    header->setSectionResizeMode(1, QHeaderView::ResizeToContents); // Position
    header->setSectionResizeMode(2, QHeaderView::Stretch); // Party
    header->setSectionResizeMode(3, QHeaderView::ResizeToContents); // Votes

    table->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);

    // Table styling
    table->setStyleSheet(R"(
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

void ElectionResults::loadVoteCounts()
{
    loadWinnersOnly(ui->VoteTable);
}

void ElectionResults::printTable()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save Table as CSV", "", "CSV Files (*.csv)");
    if (fileName.isEmpty()) return;
    if (!fileName.endsWith(".csv", Qt::CaseInsensitive))
        fileName += ".csv";

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Failed to save file.");
        return;
    }

    QTextStream out(&file);
    const int cols = ui->VoteTable->columnCount();
    const int rows = ui->VoteTable->rowCount();

    for (int col = 0; col < cols; ++col) {
        out << "\"" << ui->VoteTable->horizontalHeaderItem(col)->text() << "\"";
        if (col < cols - 1) out << ",";
    }
    out << "\n";


    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            QTableWidgetItem* item = ui->VoteTable->item(row, col);
            out << "\"" << (item ? item->text() : "") << "\"";
            if (col < cols - 1) out << ",";
        }
        out << "\n";
    }

    file.close();
}


