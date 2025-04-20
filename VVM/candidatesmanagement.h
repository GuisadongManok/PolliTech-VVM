#ifndef CANDIDATESMANAGEMENT_H
#define CANDIDATESMANAGEMENT_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QCloseEvent>
#include <QTimer>

namespace Ui {
class candidatesmanagement;
}

class candidatesmanagement : public QMainWindow
{
    Q_OBJECT

public:
    explicit candidatesmanagement(QSqlDatabase &database, QWidget *parent = nullptr);
    ~candidatesmanagement();

protected:
    void closeEvent(QCloseEvent *event);

signals:
    void windowClosed();

private slots:
    void BackButton();
    void InsertButton();
    void LoadCandidateTable();
    void ListDeleteButton();
    void ListDeleteAllButton();
    void onCellChanged(int row, int column);
    void AutoRefresh();

private:
    Ui::candidatesmanagement *ui;
    QSqlDatabase &db;
    bool loadingTable = false;
    QTimer* refreshTimer;
};

#endif // CANDIDATESMANAGEMENT_H
