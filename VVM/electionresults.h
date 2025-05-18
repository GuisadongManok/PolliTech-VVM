#ifndef ELECTIONRESULTS_H
#define ELECTIONRESULTS_H

#include <QDialog>

#include <QSqlDatabase>

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
    void loadTable();

private:
    Ui::ElectionResults *ui;
    QSqlDatabase &db;
};

#endif // ELECTIONRESULTS_H
