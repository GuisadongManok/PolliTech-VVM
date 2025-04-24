#include "vvm.h"
#include <QApplication>
#include "loginsystem.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString dbPath = QCoreApplication::applicationDirPath() + "/database/voting.db";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPath);

    qDebug() << "Looking for DB at:" << QCoreApplication::applicationDirPath() + "/database/voting.db";


    if (!db.open()) {
        qDebug() << "Error: Could not open database!" << db.lastError().text();
    }

    loginsystem loginWindow(db);
    loginWindow.show();


    int result = a.exec();

    db.close();
    return result;
}
