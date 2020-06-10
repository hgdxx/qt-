#include "db_data_insert.h"
#include "ui_db_data_insert.h"
#pragma execution_character_set("utf-8")
//实现了数据库的插入功能

DB_Data_Insert::DB_Data_Insert(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DB_Data_Insert)
{
    ui->setupUi(this);

}

DB_Data_Insert::~DB_Data_Insert()
{
    delete ui;
}



void DB_Data_Insert::on_insert_button_clicked()
{
    QList<QTableWidgetItem*> items = ui->insert_tableWidget->selectedItems();//选中了几行
    int rows = ui->insert_tableWidget->row(items.at(0));//拿出选中的第一行
    qDebug()<<rows;
    for(int i=0;i<=rows;i++)
    {
        QString name=ui->insert_tableWidget->item(i,0)->text();
        QString sex=ui->insert_tableWidget->item(i,1)->text();
        QString phone=ui->insert_tableWidget->item(i,2)->text();//读取表中数据

        QSqlQueryModel *custom=new QSqlQueryModel;
        QString sql=QString("insert into customers(姓名,性别,联系方式) VALUES('%1','%2','%3')").arg(name,sex,phone);
       qDebug()<<sql;
        custom->setQuery(sql);

    }
      QSqlQueryModel *custom=new QSqlQueryModel;
      custom->setQuery("select * from customers");
      emit mysql_custom(custom);
     emit close_insert();//发射回到operation的信号
}
