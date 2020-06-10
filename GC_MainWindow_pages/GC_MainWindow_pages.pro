#-------------------------------------------------
#
# Project created by QtCreator 2020-06-07T17:27:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GC_MainWindow_pages
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    ui/cmp_datacard.cpp \
    ui/cmp_map.cpp \
    ui/cmp_dtc.cpp \
    ui/cmp_popup.cpp \
    db/db_data_operation.cpp \
    db/db_data_insert.cpp \
    db/db_data_change.cpp \
    db/db_data_delete.cpp

HEADERS  += mainwindow.h \
   ui/cmp_datacard.h \
   ui/cmp_map.h \
   ui/cmp_dtc.h \
   ui/cmp_popup.h \
   db/db_data_operation.h \
    db/db_data_insert.h \
    db/db_data_change.h \
    db/db_data_delete.h

FORMS    += mainwindow.ui \
    ui/cmp_datacard.ui \
    ui/cmp_map.ui \
    ui/cmp_dtc.ui \
    ui/cmp_popup.ui \
    db/db_data_operation.ui \
    db/db_data_insert.ui \
    db/db_data_change.ui \
    db/db_data_delete.ui

DISTFILES +=

RESOURCES += \
    resource.qrc

QT       +=core gui sql
QT       +=multimediawidgets
