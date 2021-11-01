#include "check.h"
#include "ui_check.h"
#include <QDebug>

check::check(QString id, QString qid, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::check)
{
    ui->setupUi(this);

    setID(id);
    setQuestion(qid);
    loadQuestion();
    loadAnswers();

    answer1 = false;
    answer2 = false;
    answer3 = false;
    answer4 = false;
    answer5 = false;

    checkRightAnswer();
}

check::~check()
{
    delete ui;
}

void check::openDB()
{
    base = new database();
    db = base->getDatabase();
}

void check::setID(QString id)
{
    this->userID = id;
}

void check::setQuestion(QString qid)
{
    this->questionID = qid;
}

void check::loadQuestion()
{
    openDB();

    QSqlQuery qry;
    qry.prepare("SELECT TekstPitanja FROM Pitanja WHERE RedniBroj='"+questionID+"' ");
    qry.exec();
    qry.next();
    ui->label->setText(qry.value(0).toString());
}

void check::loadAnswers()
{

    QSqlQuery qry;
    qry.prepare("SELECT Odgovor1, Odgovor2, Odgovor3, Odgovor4, Odgovor5 FROM Pitanja WHERE RedniBroj='"+questionID+"' ");
    qry.exec();
    qry.next();
    ui->ans1->setText(qry.value(0).toString());
    ui->ans2->setText(qry.value(1).toString());
    ui->ans3->setText(qry.value(2).toString());
    ui->ans4->setText(qry.value(3).toString());
    ui->ans5->setText(qry.value(4).toString());
}

void check::checkRightAnswer()
{
    QSqlQuery qry;
    qry.prepare("SELECT TacanOdg1, TacanOdg2, TacanOdg3 FROM Pitanja WHERE RedniBroj='"+questionID+"' ");
    qry.exec();
    qry.next();

    if(ui->ans1->text() == qry.value(0).toString()
            || ui->ans1->text() == qry.value(1).toString()
                || ui->ans1->text() == qry.value(2).toString()) answer1 = true;

    if(ui->ans2->text() == qry.value(0).toString()
            || ui->ans2->text() == qry.value(1).toString()
                || ui->ans2->text() == qry.value(2).toString()) answer2 = true;

    if(ui->ans3->text() == qry.value(0).toString()
            || ui->ans3->text() == qry.value(1).toString()
                || ui->ans3->text() == qry.value(2).toString()) answer3 = true;

    if(ui->ans4->text() == qry.value(0).toString()
            || ui->ans4->text() == qry.value(1).toString()
                || ui->ans4->text() == qry.value(2).toString()) answer4 = true;

    if(ui->ans5->text() == qry.value(0).toString()
            || ui->ans5->text() == qry.value(1).toString()
            || ui->ans5->text() == qry.value(2).toString()) answer5 = true;
}

void check::checkSelected()
{
    finalRes = true;

    if(answer1 == true && !ui->ans1->isChecked()) finalRes = false;
    else if(answer2 == true && !ui->ans2->isChecked()) finalRes = false;
    else if(answer3 == true && !ui->ans3->isChecked()) finalRes = false;
    else if(answer4 == true && !ui->ans4->isChecked()) finalRes = false;
    else if(answer5 == true && !ui->ans5->isChecked()) finalRes = false;
    else if(answer1 == false && ui->ans1->isChecked()) finalRes = false;
    else if(answer2 == false && ui->ans2->isChecked()) finalRes = false;
    else if(answer3 == false && ui->ans3->isChecked()) finalRes = false;
    else if(answer4 == false && ui->ans4->isChecked()) finalRes = false;
    else if(answer5 == false && ui->ans5->isChecked()) finalRes = false;

    }

void check::pointsInsert()
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

void check::on_pushButton_clicked()
{
    checkSelected();
    pointsInsert();
    emit answered(questionID);
    this->close();
}
