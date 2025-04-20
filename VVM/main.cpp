#include "vvm.h"
#include <QApplication>
#include "loginsystem.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/GuisadongManok/OneDrive/Documents/Deana Stuff/QT Creator/PolliTech VVM/VVM/database/voting.db");

    if (!db.open()) {
        qDebug() << "Error: Could not open database!" <<db.lastError().text();
    }

    loginsystem loginWindow(db);
    loginWindow.show();


    int result = a.exec();

    db.close();
    return result;
}
