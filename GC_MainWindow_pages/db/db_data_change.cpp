#include "db_data_change.h"
#include "ui_db_data_change.h"
#include"QtSql/QSqlDatabase"
#include"QtSql/QSqlQuery"
#include"QDebug"
#include"QtSql/QSqlError"
#include<QtSql/QSqlQueryModel>
#pragma execution_character_set("utf-8")
//db_data_change.cpp实现了数据库的修改功能



DB_Data_Change::DB_Data_Change(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DB_Data_Change)
{
    ui->setupUi(this);
}

DB_Data_Change::~DB_Data_Change()
{
    delete ui;
}



void DB_Data_Change::on_changepaper_dele_button_clicked()//修改页面的取消按钮
{
    emit change_dele_operation();
}





void DB_Data_Change::on_change_change_button_clicked()
{
    QString old_name=ui->old_name_line->text();
    QString new_name=ui->new_name_line->text();
    QString change=QString("UPDATE  customers SET 姓名='%1' WHERE 姓名='%2'").arg(new_name,old_name);
    qDebug()<<change;
    QSqlQueryModel *custom=new QSqlQueryModel;
    custom->setQuery(change);
    custom->setQuery("select * from customers");
    emit change_dele_operation();
}

void DB_Data_Change::on_old_name_line_textChanged(const QString &arg1)
{
    QString name_find_data=QString("select * from customers WHERE 姓名='%1'").arg(arg1);
    QSqlQueryModel *custom;
    custom=new QSqlQueryModel;
    custom->setQuery(name_find_data);
    ui->change_tableView->setModel(custom);
}
