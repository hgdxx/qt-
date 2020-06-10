#ifndef DB_DATA_DELETE_H
#define DB_DATA_DELETE_H

#include <QWidget>

namespace Ui {
class DB_Data_Delete;
}

class DB_Data_Delete : public QWidget
{
    Q_OBJECT

public:
    explicit DB_Data_Delete(QWidget *parent = 0);
    ~DB_Data_Delete();

private:
    Ui::DB_Data_Delete *ui;

signals:
    void delete_dele_operation();//取消页面-取消按钮-回到operation
private slots:
    void on_dele_dele_button_clicked();
    void on_dele_cancel_button_clicked();
    void on_dele_show_line_textChanged(const QString &arg1);
};

#endif // DB_DATA_DELETE_H
