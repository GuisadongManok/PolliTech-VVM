#ifndef VOTERMANAGEMENT_H
#define VOTERMANAGEMENT_H

#include <QMainWindow>
#include <QSqlDatabase>


namespace Ui {
class VoterManagement;
}

class VoterManagement : public QMainWindow
{
    Q_OBJECT

public:
    explicit VoterManagement(QSqlDatabase &database, const QString &email, QWidget *parent = nullptr);
    ~VoterManagement();

protected:
    void closeEvent(QCloseEvent *event) override;

signals:
    void windowClosed();

private slots:
    void BackButton();
    void InsertVoterButton();
    void LoadVoterTable();
    void ListDeleteButton();
    void ListDeleteAllButton();
    void onCellChanged(int row, int column);


private:
    Ui::VoterManagement *ui;
    QString currentAdmin;
    QSqlDatabase &db;
    bool loadingTable = false;
};

#endif // VOTERMANAGEMENT_H
