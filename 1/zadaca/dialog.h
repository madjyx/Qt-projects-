#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "list.h"
#include "tree.h"
#include "table.h"
#include <QtSql>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QFileInfo>
#include <QStringListModel>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
    QStringListModel *model;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Dialog *ui;

};
#endif // DIALOG_H
