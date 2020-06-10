#ifndef DB_DATA_CHANGE_H
#define DB_DATA_CHANGE_H

#include <QWidget>

namespace Ui {
class DB_Data_Change;
}

class DB_Data_Change : public QWidget
{
    Q_OBJECT

public:
    explicit DB_Data_Change(QWidget *parent = 0);
    ~DB_Data_Change();

private slots:


    void on_changepaper_dele_button_clicked();


    void on_change_change_button_clicked();

    void on_old_name_line_textChanged(const QString &arg1);

signals:
    void change_dele_operation();
private:
    Ui::DB_Data_Change *ui;
};

#endif // DB_DATA_CHANGE_H
