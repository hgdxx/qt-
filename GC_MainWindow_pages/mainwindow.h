#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"ui/cmp_datacard.h"//datac
#include"ui/cmp_map.h"
#include"ui/cmp_dtc.h"
#include"ui/cmp_popup.h"

#include"db/db_data_operation.h"//数据库主页面
#include"db/db_data_insert.h"//插入页面
#include"db/db_data_change.h"//改变页面
#include"db/db_data_delete.h"//删除页面
#include <QMainWindow>

namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public:
    CMP_DataCard *datacard;
    CMP_Map *map;
    CMP_Dtc *dtc;
    CMP_PopUp *popup;

    DB_Data_Operation *db_data_operation;
    DB_Data_Insert *db_data_insert;
    DB_Data_Change *db_data_change;
    DB_Data_Delete *db_data_delete;
    QSqlQueryModel *custom;
public slots:
    void page_change_insert();//回到insert页面
    void page_change_operation();//回到operation
    void page_change_change();//回到change页面
    void page_change_dele();//回到delete页面
    void mysql_look(QSqlQueryModel *);//插入页面传递QSqlQueryModel模型到mainwindow
    void mysql_data_updata();

};

void mysql();//声明数据库连接

#endif // MAINWINDOW_H
