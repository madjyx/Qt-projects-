#include "combo.h"
#include "ui_combo.h"
#include <QDebug>

combo::combo(QString id, QString qid, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::combo)
{
    ui->setupUi(this);

    setID(id);
    setQuestion(qid);
    loadQuestion();
    loadAnswers();
}

combo::~combo()
{
    delete ui;
}

void combo::openDB()
{
    base = new database();
    db = base->getDatabase();
}

void combo::setID(QString id)
{
    this->userID = id;
}

void combo::setQuestion(QString qid)
{
    this->questionID = qid;
}

void combo::loadQuestion()
{
    openDB();

    QSqlQuery qry;
    qry.prepare("SELECT TekstPitanja FROM Pitanja WHERE RedniBroj='"+questionID+"' ");
    qry.exec();
    qry.next();
    ui->label->setText(qry.value(0).toString());
}

void combo::loadAnswers()
{

    QSqlQuery qry;
    qry.prepare("SELECT Odgovor1, Odgovor2, Odgovor3, Odgovor4, Odgovor5 FROM Pitanja WHERE RedniBroj='"+questionID+"' ");
    qry.exec();
    qry.next();

    ui->answersCombo->addItem(qry.value(0).toString());
    ui->answersCombo->addItem(qry.value(1).toString());
    ui->answersCombo->addItem(qry.value(2).toString());
    ui->answersCombo->addItem(qry.value(3).toString());
    ui->answersCombo->addItem(qry.value(4).toString());
}

void combo::checkRightAnswer()
{
    QSqlQuery qry;
    qry.prepare("SELECT TacanOdg1 FROM Pitanja WHERE RedniBroj='"+questionID+"' ");
    qry.exec();
    qry.next();

    if(ui->answersCombo->currentText() == qry.value(0).toString()) finalRes = true;
    else finalRes = false;

    pointsInsert();
    emit answered(questionID);
    this->close();
}

void combo::pointsInsert()
{
    QSqlQuery qry;
    qry.prepare("SELECT Bodovi FROM Studenti WHERE RedniBroj='"+userID+"' ");
    qry.exec();
    qry.next();

    int points = qry.value(0).toInt();

    if(finalRes == true) points++;

    qry.prepare("UPDATE Studenti SET Bodovi=:value WHERE RedniBroj='"+userID+"' ");
    qry.bindValue(":value", points);
    qry.exec();
}


void combo::on_pushButton_clicked()
{
    checkRightAnswer();
}
