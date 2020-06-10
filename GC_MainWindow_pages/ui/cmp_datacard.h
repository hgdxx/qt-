#ifndef CMP_DATACARD_H
#define CMP_DATACARD_H

#include <QWidget>
#include <QMainWindow>
#include"QToolBar"
#include"QToolButton"
#include"QMenu"
#include"QMenuBar"
#include"QHeaderView"
#include"QRadioButton"
#include"QVBoxLayout"

namespace Ui {
class CMP_DataCard;
}

class CMP_DataCard : public QWidget
{
    Q_OBJECT

public:
    explicit CMP_DataCard(QWidget *parent = 0);
    ~CMP_DataCard();

private:
    Ui::CMP_DataCard *ui;

private slots:

};

#endif // CMP_DATACARD_H
