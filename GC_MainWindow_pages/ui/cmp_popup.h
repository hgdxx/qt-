#ifndef CMP_POPUP_H
#define CMP_POPUP_H

#include <QWidget>

namespace Ui {
class CMP_PopUp;
}

class CMP_PopUp : public QWidget
{
    Q_OBJECT

public:
    explicit CMP_PopUp(QWidget *parent = 0);
    ~CMP_PopUp();

private slots:
    void on_horizontalSlider_2_valueChanged(int value);

    void on_horizontalSlider_3_valueChanged(int value);

    void on_horizontalSlider_4_valueChanged(int value);

    void on_horizontalSlider_5_valueChanged(int value);

    void on_horizontalSlider_6_valueChanged(int value);

    void on_horizontalSlider_7_valueChanged(int value);

    void on_horizontalSlider_8_valueChanged(int value);

    void on_horizontalSlider_9_valueChanged(int value);

    void on_radioButton_12_clicked();

    void on_radioButton_11_clicked();

    void on_radioButton_10_clicked();

private:
    Ui::CMP_PopUp *ui;

};

#endif // CMP_POPUP_H
