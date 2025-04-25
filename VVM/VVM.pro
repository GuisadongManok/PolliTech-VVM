QT       += core gui printsupport

QT += sql

RC_FILE = app_icon.rc

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

TEMPLATE = app
TARGET = vvm

SOURCES += \
    adminlogin.cpp \
    candidatesmanagement.cpp \
    dashboard.cpp \
    electioncontrol.cpp \
    loginsystem.cpp \
    main.cpp \
    reportsnresults.cpp \
    votermanagement.cpp \
    vvm.cpp

HEADERS += \
    adminlogin.h \
    candidatesmanagement.h \
    dashboard.h \
    electioncontrol.h \
    loginsystem.h \
    reportsnresults.h \
    votermanagement.h \
    vvm.h

FORMS += \
    adminlogin.ui \
    candidatesmanagement.ui \
    dashboard.ui \
    electioncontrol.ui \
    loginsystem.ui \
    reportsnresults.ui \
    votermanagement.ui \
    vvm.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ../VVM.qrc
