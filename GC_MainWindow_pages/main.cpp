#include "mainwindow.h"
#include <QApplication>
#include"QtSql/QSqlDatabase"
#include"QtSql/QSqlQuery"
#include"QDebug"
#include"QtSql/QSqlError"
#include<QtSql/QSqlQueryModel>
#include"db/db_data_insert.h"

int main(int argc, char *argv[])
{
    mysql();
    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    return a.exec();
}

