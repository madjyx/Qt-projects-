#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setGeometry(500,500,160,160);



}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    //listview

    list list;
    list.exec();

}


void Dialog::on_pushButton_2_clicked()
{
    //treeview
    tree tree;
    tree.exec();
}


void Dialog::on_pushButton_3_clicked()
{
    //tableview
    table table;
    table.exec();
}

