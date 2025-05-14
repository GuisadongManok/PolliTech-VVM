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

    ui->tabWidget->setCurrentIndex(0);

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
    ui->vcCaptain->setSelectionMode(QAbstractItemView::NoSelection);
    ui->vcCaptain->setFocusPolicy(Qt::NoFocus);

    ui->vcCaptain->setSortingEnabled(false);
    ui->vcCaptain->setColumnCount(4);
    ui->vcCaptain->setHorizontalHeaderLabels(QStringList() << "NAME" << "PARTY" << "VOTE COUNT" << "PERCENTAGE");

    QSqlQuery query(db);
    query.prepare(R"(
        SELECT last_name || ', ' || first_name AS full_name, party, vote_count
        FROM candidates_info
        WHERE position = 'Barangay Captain'
    )");

    if (!query.exec()) {
        qDebug() << "Vote count query failed:" << query.lastError().text();
        return;
    }

    QList<QList<QVariant>> data;
    int totalVotes = 0;
    int maxVotes = 0;

    while (query.next()) {
        QString name = query.value(0).toString();
        QString party = query.value(1).toString();
        int votes = query.value(2).toInt();

        totalVotes += votes;
        if (votes > maxVotes) maxVotes = votes;

        data.append({name, party, votes});
    }

    ui->vcCaptain->setRowCount(data.size());

    for (int row = 0; row < data.size(); ++row) {
        QString name = data[row][0].toString();
        QString party = data[row][1].toString();
        int votes = data[row][2].toInt();
        QString percent = totalVotes > 0 ? QString::number((votes * 100.0) / totalVotes, 'f', 2) + "%" : "0%";

        ui->vcCaptain->setItem(row, 0, new QTableWidgetItem(name));
        ui->vcCaptain->setItem(row, 1, new QTableWidgetItem(party));
        ui->vcCaptain->setItem(row, 2, new QTableWidgetItem(QString::number(votes)));
        ui->vcCaptain->setItem(row, 3, new QTableWidgetItem(percent));

        // Highlight the winner
        if (votes == maxVotes && maxVotes > 0) {
            for (int col = 0; col < 4; ++col) {
                ui->vcCaptain->item(row, col)->setBackground(QBrush(QColor(Qt::green)));
                ui->vcCaptain->item(row, col)->setFont(QFont("Segoe UI", 10, QFont::Bold));
            }
        }
    }

    auto header = ui->vcCaptain->horizontalHeader();
    for (int i = 0; i < ui->vcCaptain->columnCount(); ++i) {
        header->setSectionResizeMode(i, QHeaderView::ResizeToContents);
    }

    header->setSectionResizeMode(0, QHeaderView::Stretch);
    header->setSectionResizeMode(1, QHeaderView::Stretch);
    ui->vcCaptain->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);

    ui->vcCaptain->setStyleSheet(R"(
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

    ui->vcCaptain->sortItems(2, Qt::DescendingOrder);
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
    const int cols = ui->vcCaptain->columnCount();
    const int rows = ui->vcCaptain->rowCount();

    for (int col = 0; col < cols; ++col) {
        out << "\"" << ui->vcCaptain->horizontalHeaderItem(col)->text() << "\"";
        if (col < cols - 1) out << ",";
    }
    out << "\n";


    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            QTableWidgetItem* item = ui->vcCaptain->item(row, col);
            out << "\"" << (item ? item->text() : "") << "\"";
            if (col < cols - 1) out << ",";
        }
        out << "\n";
    }

    file.close();
}









