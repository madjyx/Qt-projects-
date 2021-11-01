#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtSql>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QFileInfo>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include "mainwindow.h"
#include <QTime>
#include <QTimeEdit>
#include <QDateTimeEdit>
#include <QSpinBox>
#include <QValidator>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
Ui::Dialog *ui;

private slots:

void on_pushButton_clicked();

private:
};

#endif // DIALOG_H
