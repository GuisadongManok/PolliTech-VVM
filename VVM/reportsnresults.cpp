#include "reportsnresults.h"
#include "ui_reportsnresults.h"

#include <QCloseEvent>
#include <QSqlDatabase>
#include <QStandardItemModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QTimer>
#include <QPrinter>
#include <QFileDialog>
#include <QPainter>
#include <QMessageBox>

ReportsNResults::ReportsNResults(QSqlDatabase &database, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ReportsNResults)

    , db(database)
    , refreshTimer(new QTimer(this))
{
    ui->setupUi(this);

    connect(ui->pushButton_back, &QPushButton::clicked, this, &ReportsNResults::BackButton);
    connect(ui->pushButton_refresh, &QPushButton::clicked, this, &ReportsNResults::loadVoteCounts);
    connect(ui->pushButton_print, &QPushButton::clicked, this, &ReportsNResults::printTable);

    loadVoteCounts();

    connect(refreshTimer, &QTimer::timeout, this, &ReportsNResults::loadVoteCounts);
    refreshTimer->start(5000);

}

ReportsNResults::~ReportsNResults()
{
    delete ui;
}

void ReportsNResults::closeEvent(QCloseEvent *event)
{
    if (refreshTimer && refreshTimer->isActive()) {
        refreshTimer->stop();
    }
    emit windowClosed();
    event->accept();
}

void ReportsNResults::BackButton()
{
    this->close();
}

void ReportsNResults::loadVoteCounts()
{
    ui->tableWidget_voteCount->setSortingEnabled(false);
    ui->tableWidget_voteCount->setColumnCount(4);

    QSqlQuery query(db);
    query.prepare("SELECT first_name || ' ' || last_name AS full_name, position, party, vote_count FROM candidates_info");
    ui->tableWidget_voteCount->setHorizontalHeaderLabels(QStringList() << "NAME" << "POSITION" << "PARTY" << "VOTE COUNT" );

    if (!query.exec()) {
        qDebug() << "Vote count query failed:" << query.lastError().text();
        return;
    }

    ui->tableWidget_voteCount->setRowCount(0);

    int row = 0;
    while (query.next()) {
        QString fullName = query.value("full_name").toString();
        QString pos = query.value("position").toString();
        QString party = query.value("party").toString();
        int votes = query.value("vote_count").toInt();

        ui->tableWidget_voteCount->insertRow(row);
        ui->tableWidget_voteCount->setItem(row, 0, new QTableWidgetItem(fullName));
        ui->tableWidget_voteCount->setItem(row, 1, new QTableWidgetItem(pos));
        ui->tableWidget_voteCount->setItem(row, 2, new QTableWidgetItem(party));
        ui->tableWidget_voteCount->setItem(row, 3, new QTableWidgetItem(QString::number(votes)));

        row++;
    }

    auto header = ui->tableWidget_voteCount->horizontalHeader();
    for (int i = 0; i < ui->tableWidget_voteCount->columnCount(); ++i) {
        header->setSectionResizeMode(i, QHeaderView::ResizeToContents);
    }

    header->setSectionResizeMode(1, QHeaderView::Stretch);
    header->setSectionResizeMode(2, QHeaderView::Stretch);
    ui->tableWidget_voteCount->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);

    ui->tableWidget_voteCount->setStyleSheet(R"(
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

    ui->tableWidget_voteCount->setSortingEnabled(true);
}

void ReportsNResults::printTable()
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
    const int cols = ui->tableWidget_voteCount->columnCount();
    const int rows = ui->tableWidget_voteCount->rowCount();

    for (int col = 0; col < cols; ++col) {
        out << "\"" << ui->tableWidget_voteCount->horizontalHeaderItem(col)->text() << "\"";
        if (col < cols - 1) out << ",";
    }
    out << "\n";


    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            QTableWidgetItem* item = ui->tableWidget_voteCount->item(row, col);
            out << "\"" << (item ? item->text() : "") << "\"";
            if (col < cols - 1) out << ",";
        }
        out << "\n";
    }

    file.close();
}









