#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mydb=QSqlDatabase::addDatabase("QSQLITE");

    //OVDJE POVEZATI BAZU - ZALIJEPITI URL BAZE
    mydb.setDatabaseName("/studenti.db");

    if(!mydb.open()){
        ui->statusBar->showMessage("Bazu podataka nije moguce otvoriti");
    }
    else
        ui->statusBar->showMessage("Konektovani ste na bazu..");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString korisnik, sifra;
    korisnik=ui->lineEdit_username->text();
    sifra=ui->lineEdit_password->text();

    if(!mydb.isOpen()){
        qDebug()<<"Baza podataka nije otvorena";
        return;
    }
    QSqlQuery qry;

    if(qry.exec("select * from Grupa1 where Username='"+korisnik+"'and Password='"+sifra+"'")){
        int count=0;
        while(qry.next()){
            count++;
        }
        if(count==1){
            ui->label_status->setText("Korisnicko ime i sifra su tacni");
            this->hide();
            StudentInfo studentinfo;
            studentinfo.setModal(true);
            studentinfo.exec();
            }
        if(count>1) ui->label_status->setText("Duplikati korisnickog imena i sifre");
        if(count<1) ui->label_status->setText("Korisnicko ime i sifra su netacni");

    }
}
