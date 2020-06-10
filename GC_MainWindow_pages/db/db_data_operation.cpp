#include "db_data_operation.h"
#include "ui_db_data_operation.h"
#include <QApplication>
#include"QtSql/QSqlDatabase"
#include"QtSql/QSqlQuery"
#include"QDebug"
#include"QtSql/QSqlError"
#include<QtSql/QSqlQueryModel>
//数据库的的主页面，所有子页面放回的地方都是operation，此页面做了数据库连接的初始化。

DB_Data_Operation::DB_Data_Operation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DB_Data_Operation)
{
    ui->setupUi(this);




}

void mysql()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");	//添加数据库名称，这里写QMYSQL
    db.setHostName("127.0.0.1");	//设置数据库主机名
    db.setDatabaseName("firstpracitce");	//设置数据库名
    db.setUserName("root");	//设置数据库用户名
    db.setPassword("123456");	//设置数据库密码
    if (db.open())
    {
        QSqlQuery query;
        QString sql = QString("select count(*) from information_schema.TABLES t where t.TABLE_SCHEMA ='firstpracitce' and t.TABLE_NAME ='customers'");
        query.exec(sql);
        if(query.next())
        {
            if(query.value(0).toInt()==0)
            {
                qDebug()<<"表不存在立即创建 ";
                QString creatTableStr = "CREATE TABLE Customers \
                        (                                       \
                            姓名      char(10)  NOT NULL ,     \
                            性别    char(50)  NOT NULL ,     \
                            联系方式   char(255) NULL           \
                            );";
                query.prepare(creatTableStr);
                if(!query.exec()){
                    qDebug()<<"query error :"<<query.lastError();
                }
                else{
                    qDebug()<<"creat table success!";
                }


                qDebug() << "yes." ;
            }
        }

    }
}

DB_Data_Operation::~DB_Data_Operation()
{
    delete ui;
}


void DB_Data_Operation::on_operation_change_button_clicked()
{
    emit change();
}


void DB_Data_Operation::on_operation_delte_button_clicked()
{
    emit dele();
}

void DB_Data_Operation::on_operation_insert_pushButton_clicked()
{
    emit insert();
    qDebug()<<"释放信号了";
}
