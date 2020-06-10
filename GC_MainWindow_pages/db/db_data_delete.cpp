#include "db_data_delete.h"
#include "ui_db_data_delete.h"
#pragma execution_character_set("utf-8")
#include"QtSql/QSqlDatabase"
#include"QtSql/QSqlQuery"
#include"QDebug"
#include"QtSql/QSqlError"
#include<QtSql/QSqlQueryModel>
//db_data_change.cpp实现了数据库的删除功能，dele_dele_button：删除页面的删除按钮


DB_Data_Delete::DB_Data_Delete(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DB_Data_Delete)
{
    ui->setupUi(this);
}

DB_Data_Delete::~DB_Data_Delete()
{
    delete ui;
}







void DB_Data_Delete::on_dele_dele_button_clicked()
{
    QString name=ui->dele_show_line->text();
    qDebug()<<name;
    QString delete_data=QString("Delete from customers WHERE 姓名='%1'").arg(name);\
    QSqlQueryModel *custom;
    custom=new QSqlQueryModel;
    custom->setQuery(delete_data);
    emit delete_dele_operation();
}

void DB_Data_Delete::on_dele_cancel_button_clicked()
{
    emit delete_dele_operation();
}

void DB_Data_Delete::on_dele_show_line_textChanged(const QString &arg1)
{
    QString name_find_data=QString("select * from customers WHERE 姓名='%1'").arg(arg1);
    QSqlQueryModel *custom;
    custom=new QSqlQueryModel;
    custom->setQuery(name_find_data);
    ui->dele_show_tableView->setModel(custom);
}
