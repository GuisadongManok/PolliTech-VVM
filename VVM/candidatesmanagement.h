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
    explicit candidatesmanagement(QSqlDatabase &database, const QString &email, QWidget *parent = nullptr);
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

private:
    Ui::candidatesmanagement *ui;
    QString currentAdmin;
    QSqlDatabase &db;
    bool loadingTable = false;
};

#endif // CANDIDATESMANAGEMENT_H
