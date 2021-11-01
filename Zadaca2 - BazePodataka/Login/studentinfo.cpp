#include "studentinfo.h"
#include "ui_studentinfo.h"

StudentInfo::StudentInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentInfo)
{
    ui->setupUi(this);
}

StudentInfo::~StudentInfo()
{
    delete ui;
}

void StudentInfo::on_pushButton_Save_clicked()
{
    QString id, ime, prezime, korisnik,sifra;
    id=ui->lineEdit_ID->text();
    ime=ui->lineEdit_ime->text();
    prezime=ui->lineEdit_prezime->text();
    korisnik=ui->lineEdit_username->text();
    sifra=ui->lineEdit_password->text();

    QSqlQuery qry;
    qry.prepare("insert into Grupa1 (ID,Ime,Prezime,Username,Password) values ('"+id+"','"+ime+"','"+prezime+"','"+korisnik+"','"+sifra+"')");
    if(qry.exec()){
        QMessageBox::information(this,tr("Save"),tr("Saved"));
    }
    else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }

}

void StudentInfo::on_pushButton_Edit_clicked()
{

    QString id, ime, prezime, korisnik,sifra;
    id=ui->lineEdit_ID->text();
    ime=ui->lineEdit_ime->text();
    prezime=ui->lineEdit_prezime->text();
    korisnik=ui->lineEdit_username->text();
    sifra=ui->lineEdit_password->text();

    QSqlQuery qry;
    qry.prepare("update Grupa1 set ID='"+id+"',Ime='"+ime+"',Prezime='"+prezime+"',Username='"+korisnik+"',Password='"+sifra+"' where ID='"+id+"'");
    if(qry.exec()){
        QMessageBox::information(this,tr("Edit"),tr("Updated"));
    }
    else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}

void StudentInfo::on_pushButton_Delete_clicked()
{
    QString id;
    id=ui->lineEdit_ID->text();


    QSqlQuery qry;
    qry.prepare("delete from Grupa1 where ID='"+id+"'");
    if(qry.exec()){
        QMessageBox::information(this,tr("Delete"),tr("Deleted"));
    }
    else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}

void StudentInfo::on_pushButton_load_table_clicked()
{
    QSqlQueryModel * sqlModel= new QSqlQueryModel();
    QSqlQuery qry;
    qry.prepare("select ID, Ime, Prezime from Grupa1");
    qry.exec();
    sqlModel->setQuery(qry);
    ui->tableView->setModel(sqlModel);

    qDebug()<<(sqlModel->rowCount());




}

void StudentInfo::on_pushButton_load_list_clicked()
{
    QSqlQueryModel * sqlModel= new QSqlQueryModel();
    QSqlQuery qry;
    qry.prepare("select Prezime from Grupa1");
    qry.exec();
    sqlModel->setQuery(qry);
    ui->listView->setModel(sqlModel);
    ui->comboBox->setModel(sqlModel);

    qDebug()<<(sqlModel->rowCount());

}

void StudentInfo::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QString prezime=ui->comboBox->currentText();
    QSqlQuery qry;
    qry.prepare("Select * from Grupa1 where Prezime='"+prezime+"'");

    if(qry.exec()){
        while(qry.next()){
            ui->lineEdit_ID->setText(qry.value(0).toString());
            ui->lineEdit_ime->setText(qry.value(1).toString());
            ui->lineEdit_prezime->setText(qry.value(2).toString());
            ui->lineEdit_username->setText(qry.value(3).toString());
            ui->lineEdit_password->setText(qry.value(4).toString());

            ui->radioButton_ID->setText(qry.value(0).toString());
            ui->radioButton_ime->setText(qry.value(1).toString());
            ui->radioButton_prezime->setText(qry.value(2).toString());
            ui->radioButton_username->setText(qry.value(3).toString());
            ui->radioButton_password->setText(qry.value(4).toString());
        }
    }else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}

void StudentInfo::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("Select * from Grupa1 where ID='"+val+"' or Prezime='"+val+"' or Ime='"+val+"'");

    if(qry.exec()){
        while(qry.next()){
            ui->lineEdit_ID->setText(qry.value(0).toString());
            ui->lineEdit_ime->setText(qry.value(1).toString());
            ui->lineEdit_prezime->setText(qry.value(2).toString());
            ui->lineEdit_username->setText(qry.value(3).toString());
            ui->lineEdit_password->setText(qry.value(4).toString());
        }
    }else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }

}

void StudentInfo::on_listView_activated(const QModelIndex &index)
{
    QString prezime=ui->listView->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("Select * from Grupa1 where Prezime='"+prezime+"'");

    if(qry.exec()){
        while(qry.next()){
            ui->lineEdit_ID->setText(qry.value(0).toString());
            ui->lineEdit_ime->setText(qry.value(1).toString());
            ui->lineEdit_prezime->setText(qry.value(2).toString());
            ui->lineEdit_username->setText(qry.value(3).toString());
            ui->lineEdit_password->setText(qry.value(4).toString());

        }
    }else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }


}

void StudentInfo::on_pushButton_load_radio_clicked()
{
    QSqlQueryModel * sqlModel= new QSqlQueryModel();
    QSqlQuery qry;
    qry.prepare("select * from Grupa1");
    qry.exec();
    sqlModel->setQuery(qry);
    qry.first();
    ui->radioButton_ID->setText(qry.value(0).toString());
    ui->radioButton_ime->setText(qry.value(1).toString());
    ui->radioButton_prezime->setText(qry.value(2).toString());
    ui->radioButton_username->setText(qry.value(3).toString());
    ui->radioButton_password->setText(qry.value(4).toString());

    qDebug()<<(sqlModel->rowCount());
}
