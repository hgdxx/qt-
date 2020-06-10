#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"ui_cmp_datacard.h"
#include"ui_cmp_map.h"
#include"ui_cmp_dtc.h"
#include"ui/cmp_dtc.h"
#include"ui_cmp_popup.h"
#include"ui_db_data_operation.h"
#include"ui_db_data_insert.h"
#include"ui_db_data_change.h"
#include"ui_db_data_delete.h"
#include"QDebug"
//本页面，将不同页面的槽函数和信号进行连接，完成了主页面stackwidget的跳转功能。
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    datacard=new CMP_DataCard(ui->data_card_widget);//显示数据卡
    map=new CMP_Map(ui->map_widget);//显示地图
    dtc=new CMP_Dtc(ui->dtc_widget);//显示dtc
    popup=new CMP_PopUp(ui->popup_widget);//显示popup
    db_data_operation=new DB_Data_Operation(ui->page);//显示数据库连接主页面
    db_data_insert=new DB_Data_Insert(ui->page_2);
    db_data_change=new DB_Data_Change(ui->page_3);
    db_data_delete=new DB_Data_Delete(ui->page_4);
    //*********************三个ui的页面显示完毕




    //***********************************下面是数据库的链接操作
    QObject::connect(db_data_operation,SIGNAL(insert()),this,SLOT(page_change_insert()));//主页面：点击新建，转到新建页面
    QObject::connect(db_data_operation,SIGNAL(change()),this,SLOT(page_change_change()));//点击新建，转到修改页面
    QObject::connect(db_data_operation,SIGNAL(dele()),this,SLOT(page_change_dele()));//点击新建，转到删除页面
    QObject::connect(db_data_change,SIGNAL(change_dele_operation()),this,SLOT(page_change_operation()));//修改页面：取消按钮，回到主页面
    QObject::connect(db_data_change,SIGNAL(change_dele_operation()),this,SLOT(mysql_data_updata()));//修改页面：修改按钮释放信号，回到主页面，完成修改操作
    QObject::connect(db_data_insert,SIGNAL(mysql_custom(QSqlQueryModel *)),this,SLOT(mysql_look(QSqlQueryModel *)));
    QObject::connect(db_data_insert,SIGNAL(close_insert()),this,SLOT(page_change_operation()));//点击插入按钮，回到新建页面
    QObject::connect(db_data_delete,SIGNAL(delete_dele_operation()),this,SLOT(page_change_operation()));
    QObject::connect(db_data_delete,SIGNAL(delete_dele_operation()),this,SLOT(mysql_data_updata()));
    custom=new QSqlQueryModel;
    custom->setQuery("select * from customers");
    ui->tableView->setModel(custom);//显示数据到页面最外层



}
void MainWindow::mysql_look(QSqlQueryModel *custom)//槽函数，将插入页面的custom模型传递到主页面上进行显示,后来发现这样画蛇添足，但是学到了如何使用连接函数在不同页面传递参数
{
    ui->tableView->setModel(custom);

}
void MainWindow::mysql_data_updata()//在进行插入,删除,修改后，需要进行一次显示表的信息操作。
{
    QSqlQueryModel *custom=new QSqlQueryModel;
    custom->setQuery("select * from customers");
    ui->tableView->setModel(custom);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow:: page_change_insert()//
{
    ui->stackedWidget->setCurrentIndex(1);
    qDebug()<<"xxxxxxxxxxxxxx";
}
void MainWindow::page_change_operation()
{
    ui->stackedWidget->setCurrentIndex(0);


}
void MainWindow::page_change_change()
{
    ui->stackedWidget->setCurrentIndex(2);
}
void MainWindow::page_change_dele()
{
    ui->stackedWidget->setCurrentIndex(3);
}
