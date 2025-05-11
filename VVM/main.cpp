#include "vvm.h"
#include <QApplication>
#include "loginsystem.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QDir>
#include <QFile>
#include <QStandardPaths>

void copyFolder(const QString &sourcePath, const QString &destinationPath)
{
    QDir sourceDir(sourcePath);
    if (!sourceDir.exists())
        return;

    QDir destDir(destinationPath);
    if (!destDir.exists())
        destDir.mkpath(destinationPath);

    QStringList files = sourceDir.entryList(QDir::Files);
    for (const QString &fileName : files) {
        QString srcFilePath = sourcePath + "/" + fileName;
        QString destFilePath = destinationPath + "/" + fileName;
        if (QFile::copy(srcFilePath, destFilePath)) {
            QFile::setPermissions(destFilePath, QFile::WriteOwner | QFile::ReadOwner);
            qDebug() << "Copied file:" << destFilePath;
        } else {
            qDebug() << "Failed to copy file:" << srcFilePath;
        }
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString dbPath;

#if defined(QT_DEBUG) || defined(QT_RELEASE)
    // When running inside Qt Creator (Debug or Release)
    dbPath = QCoreApplication::applicationDirPath() + "/database/voting.db";
#else
    // When running as a deployed executable
    QString writableDir = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QString writableDatabaseDir = writableDir + "/database";
    dbPath = writableDatabaseDir + "/voting.db";

    if (!QFile::exists(dbPath)) {
        QString bundledDatabaseDir = QCoreApplication::applicationDirPath() + "/database";

        if (QDir(bundledDatabaseDir).exists()) {
            copyFolder(bundledDatabaseDir, writableDatabaseDir);
            qDebug() << "Copied database folder to writable location:" << writableDatabaseDir;
        } else {
            qDebug() << "Bundled database folder not found:" << bundledDatabaseDir;
        }
    }
#endif

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPath);

    qDebug() << "Opening database at:" << dbPath;

    if (!db.open()) {
        qDebug() << "Error: Could not open database!" << db.lastError().text();
    }

    loginsystem loginWindow(db, "", nullptr);
    loginWindow.show();

    int result = a.exec();

    db.close();
    return result;
}
