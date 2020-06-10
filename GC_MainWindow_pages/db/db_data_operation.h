#ifndef DB_DATA_OPERATION_H
#define DB_DATA_OPERATION_H
#include"QtSql/QSqlDatabase"
#include"QtSql/QSqlQuery"
#include"QDebug"
#include"QtSql/QSqlError"
#include<QtSql/QSqlQueryModel>
#include <QWidget>

namespace Ui {
class DB_Data_Operation;
}

class DB_Data_Operation : public QWidget
{
    Q_OBJECT

public:
    explicit DB_Data_Operation(QWidget *parent = 0);
    ~DB_Data_Operation();
     QSqlQueryModel *custom;
     Ui::DB_Data_Operation *ui;

private slots:

     void on_operation_change_button_clicked();



     void on_operation_delte_button_clicked();

     void on_operation_insert_pushButton_clicked();

private:


signals:
    void insert();//点击新建按钮,发射转换到插入窗口的信号
    void change();//点击修改按钮，发射修改信号到修改窗口
    void dele();//


};
void mysql();



#endif // DB_DATA_OPERATION_H
