#include "cmp_popup.h"
#include "ui_cmp_popup.h"

CMP_PopUp::CMP_PopUp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CMP_PopUp)
{
    ui->setupUi(this);
}

CMP_PopUp::~CMP_PopUp()
{
    delete ui;
}

void CMP_PopUp::on_horizontalSlider_2_valueChanged(int value)
{
    QString value_1=QString::number(value)+"deg";
    ui->lineEdit_4->setText(value_1);
}

void CMP_PopUp::on_horizontalSlider_3_valueChanged(int value)
{
    QString value_1=QString::number(value*20)+"kts(CAS)";
    ui->lineEdit_5->setText(value_1);
}


void CMP_PopUp::on_horizontalSlider_4_valueChanged(int value)
{
    QString value_1=QString::number(value)+"feet";
    ui->lineEdit_6->setText(value_1);
}


void CMP_PopUp::on_horizontalSlider_5_valueChanged(int value)
{
    QString value_1=QString::number(value)+"sec";
    ui->lineEdit_7->setText(value_1);
}

void CMP_PopUp::on_horizontalSlider_6_valueChanged(int value)
{
    QString a=QString::number(value*0.01)+"g";
    ui->lineEdit_8->setText(a);
}

void CMP_PopUp::on_horizontalSlider_7_valueChanged(int value)
{
    if(value>50)
    {
     ui->lineEdit_9->setText ("Right");
    }
    else
    {
        ui->lineEdit_9->setText ("Left");

    }
}


void CMP_PopUp::on_horizontalSlider_8_valueChanged(int value)
{
    QString value_1=QString::number(value)+"deg";
    ui->lineEdit_10->setText(value_1);
}


void CMP_PopUp::on_horizontalSlider_9_valueChanged(int value)
{
    QString value_1=QString::number(value)+"nm";
    ui->lineEdit_12->setText(value_1);
}

void CMP_PopUp::on_radioButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void CMP_PopUp::on_radioButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void CMP_PopUp::on_radioButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}
