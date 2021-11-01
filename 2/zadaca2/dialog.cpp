#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QString Serijski, Godina, Mjesec,Stranice;
    Serijski=ui->label_serijski->text();
    Godina=ui->label_godina->text();
    Mjesec=ui->label_mjesec->text();
    Stranice=ui->spinBox_stranice->text();

    QSqlQuery qry,qry2;
    qry2.prepare("update PRINTERI set Ispunjeno='1', PocetnoStanje='"+Stranice+"' where Serijski='"+Serijski+"'");
    if(qry2.exec()){
        QMessageBox::information(this,tr("Edit"),tr("Updated"));
    }
    else{
        QMessageBox::critical(this,tr("error::"),qry2.lastError().text());
    }
    qry.prepare("insert into STAMPA (Serijski,Godina,Mjesec,Stranice) values ('"+Serijski+"','"+Godina+"','"+Mjesec+"','"+Stranice+"')");
    if(qry.exec()){
        QMessageBox::information(this,tr("Save"),tr("Saved"));
    }
    else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }

}

