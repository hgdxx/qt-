#ifndef CMP_DTC_H
#define CMP_DTC_H

#include <QWidget>

namespace Ui {
class CMP_Dtc;
}

class CMP_Dtc : public QWidget
{
    Q_OBJECT

public:
    explicit CMP_Dtc(QWidget *parent = 0);
    ~CMP_Dtc();

private:
    Ui::CMP_Dtc *ui;
};

#endif // CMP_DTC_H
