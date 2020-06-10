#include "cmp_map.h"
#include "ui_cmp_map.h"

CMP_Map::CMP_Map(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CMP_Map)
{
    ui->setupUi(this);
}

CMP_Map::~CMP_Map()
{
    delete ui;
}

void CMP_Map::on_horizontalSlider_valueChanged(int value)
{
    ui->lineEdit_3->setText(QString::number(value));
}
