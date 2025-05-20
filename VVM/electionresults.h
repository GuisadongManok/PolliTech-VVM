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

signals:
    void windowClosed();

private slots:
    void loadWinnersOnlyBarangay();
    void loadWinnersOnlySK();
    void writeTableToStream(QTableWidget* table, QTextStream& out);
    void BackButton();
    void print();

private:
    Ui::ElectionResults *ui;
    QSqlDatabase &db;
};

#endif // ELECTIONRESULTS_H
