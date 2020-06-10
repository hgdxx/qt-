#include "cmp_dtc.h"
#include "ui_cmp_dtc.h"

CMP_Dtc::CMP_Dtc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CMP_Dtc)
{
    ui->setupUi(this);
}

CMP_Dtc::~CMP_Dtc()
{
    delete ui;
}
