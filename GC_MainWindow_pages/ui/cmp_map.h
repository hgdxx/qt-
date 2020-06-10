#ifndef CMP_MAP_H
#define CMP_MAP_H

#include <QWidget>

namespace Ui {
class CMP_Map;
}

class CMP_Map : public QWidget
{
    Q_OBJECT

public:
    explicit CMP_Map(QWidget *parent = 0);
    ~CMP_Map();

private slots:
    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::CMP_Map *ui;
};

#endif // CMP_MAP_H
