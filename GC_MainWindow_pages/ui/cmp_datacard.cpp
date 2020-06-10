#include "cmp_datacard.h"
#include "ui_cmp_datacard.h"
//本页面完成了datacard的部分属性的设置,主要是按钮组的安装和页面的布局
CMP_DataCard::CMP_DataCard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CMP_DataCard)
{
    ui->setupUi(this);
    ui->data_tableWidget_one->horizontalHeader()->setVisible(false);//隐藏表头，写死单元格合并即可;
    ui->data_tableWidget_one->verticalHeader()->setVisible(false);//隐藏表头;
    //****************对tableWidget_2处理*************************************
    ui->airforce_tableWidget->horizontalHeader()->setVisible(true);
    ui->airforce_tableWidget->verticalHeader()->setVisible(true);
    ui->airforce_tableWidget->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);//填充表格空白区域;

    ui->airforce_tableWidget_horizontalHeader->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//填充表格空白区域;
    ui->airforce_tableWidget_horizontalHeader->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->airforce_tableWidget_horizontalHeader->setSpan(0,0,3,1);



    //****************对air_tableWidget表布局操作操作**************************/*
    ui->air_tableWidget->horizontalHeader()->setVisible(true);//表头显示
    ui->air_tableWidget->setSpan(0,0,4,1);//合并方便插按钮
    ui->air_tableWidget->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Stretch);
    ui->air_tableWidget_horizontalHeader->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->air_tableWidget_horizontalHeader->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->air_tableWidget_horizontalHeader->setSpan(0,0,3,1);




    //**********************装按钮****************************************
    QRadioButton *tableWidget_3_radiobutton_1=new QRadioButton();
    tableWidget_3_radiobutton_1->setText("Lead");
    QRadioButton *tableWidget_3_radiobutton_2=new QRadioButton();
    tableWidget_3_radiobutton_2->setText("Wing");
    QRadioButton *tableWidget_3_radiobutton_3=new QRadioButton();
    tableWidget_3_radiobutton_3->setText("Eleme");
    QRadioButton *tableWidget_3_radiobutton_4=new QRadioButton();
    tableWidget_3_radiobutton_4->setText("Wing");
    QWidget *widget=new QWidget();
    QVBoxLayout *tableWidget_3_boxlayout =new QVBoxLayout(widget);
    tableWidget_3_boxlayout->addWidget(tableWidget_3_radiobutton_1);
    tableWidget_3_boxlayout->addWidget(tableWidget_3_radiobutton_2);
    tableWidget_3_boxlayout->addWidget(tableWidget_3_radiobutton_3);
    tableWidget_3_boxlayout->addWidget(tableWidget_3_radiobutton_4);
    ui->air_tableWidget->setCellWidget(0,0,widget);




//************************对package_tableWidget表操作******************************
ui->package_tableWidget->horizontalHeader()->setVisible(true);
ui->package_tableWidget->verticalHeader()->setVisible(false);//显示表头,隐藏列头。

ui->package_tableWidget_horizontalHeader2->horizontalHeader()->setVisible(false);
ui->package_tableWidget_horizontalHeader->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
ui->package_tableWidget_horizontalHeader->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

ui->package_tableWidget_horizontalHeader->setSpan(0,0,3,1);//显示包裹

//*************************装按钮********************************
    ui->package_tableWidget_horizontalHeader2->setSpan(1,0,4,1);
    QRadioButton *tableWidget_4_radiobutton_1=new QRadioButton();

    tableWidget_4_radiobutton_1->setText("Lead");
    QRadioButton *tableWidget_4_radiobutton_2=new QRadioButton();

    tableWidget_4_radiobutton_2->setText("Wing");
    QRadioButton *tableWidget_4_radiobutton_3=new QRadioButton();

    tableWidget_4_radiobutton_3->setText("Eleme");
    QRadioButton *tableWidget_4_radiobutton_4=new QRadioButton();

    tableWidget_4_radiobutton_4->setText("Wing");
    QWidget *tableWidget_4_widget=new QWidget();

    QVBoxLayout *tableWidget_4_boxlayout =new QVBoxLayout(tableWidget_4_widget);

    tableWidget_4_boxlayout->addWidget(tableWidget_4_radiobutton_1);
    tableWidget_4_boxlayout->addWidget(tableWidget_4_radiobutton_2);
    tableWidget_4_boxlayout->addWidget(tableWidget_4_radiobutton_3);
    tableWidget_4_boxlayout->addWidget(tableWidget_4_radiobutton_4);
    ui->package_tableWidget_horizontalHeader2->setCellWidget(1,0,tableWidget_4_widget);// 装按钮完毕




//******************对flight_plan_tableWidget表进行操作************************************************

    ui->flight_plan_tableWidget->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->flight_plan_tableWidget->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Stretch);


    ui->flight_plan_tableWidget_horizontalHeader->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->flight_plan_tableWidget_horizontalHeader->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->flight_plan_tableWidget_horizontalHeader->setSpan(0,0,3,1);//显示飞行计划





//***************第二页***************************************************
//********************************对data_tableWidget2表操作（第二页的第一个表）
    ui->data_tableWidget2->setSpan(0,1,1,8);



//**********************************对TO_tableWidget_horizontalHeader表操作（第二页第二个表）**************
    ui->TO_tableWidget_horizontalHeader->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->TO_tableWidget_horizontalHeader->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->TO_tableWidget_horizontalHeader->setSpan(0,0,3,1);//显示TGT






//********************************对TGT_tableWidget_horizontalHeader表操作***********************
    ui->TGT_tableWidget_horizontalHeader->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->TGT_tableWidget_horizontalHeader->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->TGT_tableWidget_horizontalHeader->setSpan(0,0,3,1);//显示TGT



//********************************对arms_tableWidget表操作***********************
    ui->arms_tableWidget_horizontalHeader->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->arms_tableWidget_horizontalHeader->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->arms_tableWidget_horizontalHeader->setSpan(0,0,3,1);

    ui->introduction_horizontalHeader->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->introduction_horizontalHeader->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->introduction_horizontalHeader->setSpan(0,0,3,1);

    ui->introduction_horizontalHeader2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->introduction_horizontalHeader2->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->introduction_horizontalHeader2->setSpan(0,0,3,1);



    ui->transport_tableWidget_horizontalHeader->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->transport_tableWidget_horizontalHeader->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->support_tableWidget_horizontalHeader->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->support_tableWidget_horizontalHeader->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

CMP_DataCard::~CMP_DataCard()
{
    delete ui;
}
