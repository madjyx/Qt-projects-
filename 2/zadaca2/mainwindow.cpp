#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "ui_dialog.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/User/Desktop/OP 07.07/2/zadaca2/CLCHARGE.db");

    if(!mydb.open()){
        ui->statusbar->showMessage("Bazu podataka nije moguće otvoriti");
    }
    else ui->statusbar->showMessage("Konektovani ste na bazu");


    //onemogućavanje dataedit
    ui->dateEdit->setEnabled(false);
    //onemogućavanje pushbutton next
    ui->pushButton->setEnabled(false);
    //postavljanje default vrijednosti u line edit
    ui->lineEdit->setText("0.075");

    //ispunjavanje tabele PRINTERI
    QSqlQueryModel * sqlModel= new QSqlQueryModel();
    QSqlQuery qry;
    qry.prepare("select * from PRINTERI");
    qry.exec();
    sqlModel->setQuery(qry);
    ui->tableView->setModel(sqlModel);

    qDebug()<<(sqlModel->rowCount());


    //ispunjavanje tabele ŠTAMPA
    QSqlQueryModel * sqlModel2= new QSqlQueryModel();
    QSqlQuery qry2;
    qry2.prepare("select * from STAMPA");
    qry2.exec();
    sqlModel2->setQuery(qry2);
    ui->tableView_2->setModel(sqlModel2);

    qDebug()<<(sqlModel2->rowCount());

    //ispunjavanje tabele FAKTURE
    QSqlQueryModel * sqlModel3= new QSqlQueryModel();
    QSqlQuery qry3;
    qry3.prepare("select * from Fakture");
    qry3.exec();
    sqlModel3->setQuery(qry3);
    ui->tableView_3->setModel(sqlModel3);

    qDebug()<<(sqlModel3->rowCount());


    //Kada za sve printere u tabeli PRINTERI u koloni Ispunjeno bude 1 omogućiti PushButon Next
    QSqlQuery qry4;
    QString uporedi="1";
    qry4.prepare("select Ispunjeno from PRINTERI");
    if(qry4.exec()){
        while(qry4.next()){
        int i;
        for(i=0;i<=8;i++){
        if(qry4.value(0).toInt()<1){
            ui->pushButton->setEnabled(false);
            qDebug()<<(qry4.value(0).toString());
}else{
            ui->pushButton->setEnabled(true);
                qDebug()<<(qry4.value(0).toString());}
        }
}
    }
        }



MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_tableView_activated(const QModelIndex &index)
{

    //Napraviti da pomoću dvostrukog klika na red u tabeli PRINTERI , se otvori Dialog kao na sljedećoj slici koji će prikazivati Serijski iz tabele PRINTERI, mjesec i godinu iz DateEdit-a u Label-ama
    Dialog dialog;

        QString ser=ui->tableView->model()->data(index).toString();
        QSqlQuery qry;
        qry.prepare("select Serijski from PRINTERI where Serijski='"+ser+"'");


        if(qry.exec()){
            while(qry.next()){
                dialog.ui->label_serijski->setText(qry.value(0).toString());
                dialog.ui->label_mjesec->setText(ui->dateEdit->date().toString("MM"));
                dialog.ui->label_godina->setText(ui->dateEdit->date().toString("yyyy"));
            }
        }
        //Za prvi unos namjestiti da je minimalan broj koji se može unijeti u SpinBox onaj koji se nalazi u tabeli PRINTERI u koloni PocetnoStanje
        QSqlQuery qry2;
        qry2.prepare("select PocetnoStanje from PRINTERI where Serijski='"+ser+"'");
        if(qry2.exec()){
            while(qry2.next()){


                dialog.ui->spinBox_stranice->setMinimum(qry2.value(0).toInt());
                dialog.ui->spinBox_stranice->setMaximum(9999999);

            }
        }
        dialog.exec();



}


void MainWindow::on_pushButton_clicked()
{

}

