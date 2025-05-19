#ifndef ELECTIONRESULTS_H
#define ELECTIONRESULTS_H

#include <QDialog>

#include <QSqlDatabase>
#include <QTableWidget>

namespace Ui {
class ElectionResults;
}

class ElectionResults : public QDialog
{
    Q_OBJECT

public:
    explicit ElectionResults(QSqlDatabase &database, QWidget *parent = nullptr);
    ~ElectionResults();

protected:
    void closeEvent(QCloseEvent *event);
    void showEvent(QShowEvent *event);

signals:
    void windowClosed();

private slots:
    void loadWinnersOnly(QTableWidget* table);
    void loadVoteCounts();
    void printTable();
    void BackButton();

private:
    Ui::ElectionResults *ui;
    QSqlDatabase &db;
};

#endif // ELECTIONRESULTS_H
