#ifndef TABLE_H
#define TABLE_H

#include <QDialog>
#include <QStringListModel>
namespace Ui {
class table;
}

class table : public QDialog
{
    Q_OBJECT

public:
    explicit table(QWidget *parent = nullptr);
    ~table();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::table *ui;
    QStringListModel *model;
};

#endif // TABLE_H
