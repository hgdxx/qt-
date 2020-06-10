#ifndef DB_DATA_INSERT_H
#define DB_DATA_INSERT_H
#include <QApplication>
#include"QtSql/QSqlDatabase"
#include"QtSql/QSqlQuery"
#include"QDebug"
#include"QtSql/QSqlError"
#include<QtSql/QSqlQueryModel>

#include <QWidget>

namespace Ui {
class DB_Data_Insert;
}

class DB_Data_Insert : public QWidget
{
    Q_OBJECT

public:
    explicit DB_Data_Insert(QWidget *parent = 0);
    ~DB_Data_Insert();

private slots:

    void on_insert_button_clicked();

private:
    Ui::DB_Data_Insert *ui;
signals:
    void close_insert();//关闭新建页面信号
    void mysql_custom(QSqlQueryModel *value);
};

#endif // DB_DATA_INSERT_H
