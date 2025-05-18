#include "electionresults.h"
#include "ui_electionresults.h"

#include <QSqlDatabase>
#include <QCloseEvent>
#include <QSqlQuery>
#include <QsqlError>

ElectionResults::ElectionResults(QSqlDatabase &database, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ElectionResults)
    , db(database)
{
    ui->setupUi(this);
    loadTable();

    connect(ui->comboBox_positionFilter, &QComboBox::currentTextChanged, this, &ElectionResults::loadTable);

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

void ElectionResults::loadTable()
{
    ui->tableWidget_winners->setSortingEnabled(false);
    ui->tableWidget_winners->clearContents();
    ui->tableWidget_winners->setRowCount(0);
    ui->tableWidget_winners->setColumnCount(6);
    ui->tableWidget_winners->setHorizontalHeaderLabels(QStringList()
                                                       << "POSITION" << "LAST NAME" << "FIRST NAME" << "PARTY" << "VOTE COUNT" << "PERCENTAGE");

    struct PositionInfo {
        QString title;
        int topLimit;
    };

    QList<PositionInfo> positions = {
        {"Barangay Captain", 1},
        {"SK Chairman", 1},
        {"Barangay Councilor", 7},
        {"SK Councilor", 7}
    };

    QString selectedFilter = ui->comboBox_positionFilter->currentText();
    int row = 0;

    for (const PositionInfo& pos : positions) {
        // Skip positions not matching filter
        if (selectedFilter != "All Positions" && selectedFilter != pos.title)
            continue;

        // Total votes per position
        int totalVotes = 0;
        QSqlQuery totalQuery(db);
        totalQuery.prepare("SELECT SUM(vote_count) FROM candidates_info WHERE position = :position");
        totalQuery.bindValue(":position", pos.title);
        if (totalQuery.exec() && totalQuery.next())
            totalVotes = totalQuery.value(0).toInt();

        // Get top N
        QSqlQuery query(db);
        query.prepare(R"(
            SELECT last_name, first_name, party, vote_count
            FROM candidates_info
            WHERE position = :position
            ORDER BY vote_count DESC
        )");
        query.bindValue(":position", pos.title);
        if (!query.exec()) {
            qDebug() << "Failed to load winners for" << pos.title << ":" << query.lastError().text();
            continue;
        }

        int count = 0;
        while (query.next() && count < pos.topLimit) {
            QString lastName = query.value(0).toString();
            QString firstName = query.value(1).toString();
            QString party = query.value(2).toString();
            int votes = query.value(3).toInt();
            QString percentage = (totalVotes > 0)
                                     ? QString::number((votes * 100.0) / totalVotes, 'f', 2) + "%"
                                     : "0%";

            ui->tableWidget_winners->insertRow(row);
            ui->tableWidget_winners->setItem(row, 0, new QTableWidgetItem(pos.title));
            ui->tableWidget_winners->setItem(row, 1, new QTableWidgetItem(lastName));
            ui->tableWidget_winners->setItem(row, 2, new QTableWidgetItem(firstName));
            ui->tableWidget_winners->setItem(row, 3, new QTableWidgetItem(party));
            ui->tableWidget_winners->setItem(row, 4, new QTableWidgetItem(QString::number(votes)));
            ui->tableWidget_winners->setItem(row, 5, new QTableWidgetItem(percentage));

            ++row;
            ++count;
        }
    }

    auto header = ui->tableWidget_winners->horizontalHeader();
    for (int i = 0; i < 6; ++i) {
        header->setSectionResizeMode(i, (i < 4) ? QHeaderView::Stretch : QHeaderView::ResizeToContents);
    }

    ui->tableWidget_winners->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableWidget_winners->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_winners->setSelectionMode(QAbstractItemView::NoSelection);

    ui->tableWidget_winners->setStyleSheet(R"(
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

