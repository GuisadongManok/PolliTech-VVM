#ifndef REPORTSNRESULTS_H
#define REPORTSNRESULTS_H

#include <QDialog>
#include <QSqlDatabase>
#include <QTimer>
#include <QTableWidget>

namespace Ui {
class ReportsNResults;
}

class ReportsNResults : public QDialog
{
    Q_OBJECT

public:
    explicit ReportsNResults(QSqlDatabase &database, QWidget *parent = nullptr);
    ~ReportsNResults();

protected:
    void closeEvent(QCloseEvent *event) override;

signals:
    void windowClosed();

private slots:
    void BackButton();
    void loadWinnersOnly(QTableWidget* table);
    void loadVoteCounts();
    void printTable();

private:
    Ui::ReportsNResults *ui;
    QSqlDatabase &db;
    QTimer* refreshTimer;
};

#endif // REPORTSNRESULTS_H
