#include "login.h"
#include "ui_login.h"
#include <QDebug>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::loginCheck(QString username, QString password)
{
    openDB();
    QSqlQuery qry;

    if(qry.exec("SELECT * FROM Studenti WHERE KorisnickoIme='"+username+"' AND Sifra='"+password+"' ")) {
        int count=0;
        while(qry.next()) {
            count++;
        }
        if(count>0) {
            qry.prepare("SELECT RedniBroj FROM Studenti WHERE KorisnickoIme='"+username+"' ");
            qry.exec();
            qry.next();
            QString id = qry.value(0).toString();
            emit loginSuccessful(id);

            QMessageBox::information(this,"Uspješno","Uspješno ste se prijavili",QMessageBox::Ok);
        }
        else {
            QMessageBox::information(this,"Greška","Pogrešno korisničko ime ili password",QMessageBox::Ok);
    }}
}



void login::openDB()
{
    base = new database();
    db = base->getDatabase();
}

void login::on_prijavaButton_clicked()
{
    loginCheck(ui->username->text(), ui->password->text());
}
