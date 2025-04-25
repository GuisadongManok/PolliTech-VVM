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
    QString fileName = QFileDialog::getSaveFileName(this, "Save Table as PDF", "", "PDF Files (*.pdf)");
    if (fileName.isEmpty()) return;

    if (!fileName.endsWith(".pdf", Qt::CaseInsensitive))
        fileName += ".pdf";

    QPrinter printer;
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);
    printer.setPageOrientation(QPageLayout::Portrait);
    printer.setPageSize(QPageSize::A4);
    printer.setFullPage(true);

    QPageLayout layout = printer.pageLayout();
    QMarginsF margins(15, 15, 15, 15);
    layout.setMargins(margins);
    printer.setPageLayout(layout);

    QString html;
    html += "<html><head><style>";
    html += "body { font-family: 'Segoe UI'; font-size: 12pt; }";
    html += "h2 { font-size: 18pt; margin-bottom: 20px; }";
    html += "table { border-collapse: collapse; width: 100%; font-size: 12pt; }";
    html += "th, td { border: 1px solid black; padding: 6px; }";
    html += "th { background-color: #f0f0f0; text-align: center; }";
    html += "</style></head><body>";

    html += "<h2 align='center'>VOTE COUNT REPORT</h2>";
    html += "<table>";

    html += "<tr>";
    for (int col = 0; col < ui->tableWidget_voteCount->columnCount(); ++col) {
        QString header = ui->tableWidget_voteCount->horizontalHeaderItem(col)->text();
        html += "<th>" + header + "</th>";
    }
    html += "</tr>";

    for (int row = 0; row < ui->tableWidget_voteCount->rowCount(); ++row) {
        html += "<tr>";
        for (int col = 0; col < ui->tableWidget_voteCount->columnCount(); ++col) {
            QTableWidgetItem* item = ui->tableWidget_voteCount->item(row, col);
            QString text = item ? item->text() : "";

            if (col == ui->tableWidget_voteCount->columnCount() - 1)
                html += "<td align='center'>" + text + "</td>";
            else
                html += "<td>" + text + "</td>";
        }
        html += "</tr>";
    }

    html += "</table><br><br>";

    QDateTime current = QDateTime::currentDateTime();
    QString timestamp = current.toString("MMMM d, yyyy - hh:mm AP");

    html += "<div style='text-align: center; font-size: 10pt; margin-top: 40px;'>";
    html += "Generated on: " + timestamp;
    html += "</div>";

    html += "</body></html>";

    QTextDocument document;
    document.setHtml(html);

    QRectF pageRect = printer.pageRect(QPrinter::Point);
    document.setPageSize(QSizeF(pageRect.width(), pageRect.height()));

    document.print(&printer);
}









