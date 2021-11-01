#ifndef LIST_H
#define LIST_H

#include <QDialog>
#include <QDialog>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QDebug>
#include "globalne.h"
#include <QStringListModel>
namespace Ui {
class list;
}

class list : public QDialog
{
    Q_OBJECT

public:
    explicit list(QWidget *parent = nullptr);
    ~list();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::list *ui;
    QStringListModel *model;
};

#endif // LIST_H
