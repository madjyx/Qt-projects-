#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDate>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Postanite feningaš");
    log = new login(this);

    programStart();
    connect(log,SIGNAL(loginSuccessful(QString)),this,SLOT(loggedIn(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::deaktPitanja()
{
    ui->pitanje1->setEnabled(false);
    ui->pitanje2->setEnabled(false);
    ui->pitanje3->setEnabled(false);
    ui->pitanje4->setEnabled(false);
    ui->pitanje5->setEnabled(false);
    ui->pitanje6->setEnabled(false);
    ui->pitanje7->setEnabled(false);
    ui->pitanje8->setEnabled(false);
    ui->pitanje9->setEnabled(false);
    ui->pitanje10->setEnabled(false);
    ui->pitanje11->setEnabled(false);
    ui->pitanje12->setEnabled(false);
    ui->pitanje13->setEnabled(false);
    ui->pitanje14->setEnabled(false);
    ui->pitanje15->setEnabled(false);
    ui->pitanje16->setEnabled(false);
    ui->pitanje17->setEnabled(false);
    ui->pitanje18->setEnabled(false);
    ui->pitanje19->setEnabled(false);
    ui->pitanje20->setEnabled(false);
    ui->pitanje21->setEnabled(false);
    ui->pitanje22->setEnabled(false);
    ui->pitanje23->setEnabled(false);
    ui->pitanje24->setEnabled(false);
    ui->pitanje25->setEnabled(false);
}

void MainWindow::aktPitanja()
{
    ui->ending->setEnabled(true);
    ui->pitanje1->setEnabled(true);
    ui->pitanje2->setEnabled(true);
    ui->pitanje3->setEnabled(true);
    ui->pitanje4->setEnabled(true);
    ui->pitanje5->setEnabled(true);
    ui->pitanje6->setEnabled(true);
    ui->pitanje7->setEnabled(true);
    ui->pitanje8->setEnabled(true);
    ui->pitanje9->setEnabled(true);
    ui->pitanje10->setEnabled(true);
    ui->pitanje11->setEnabled(true);
    ui->pitanje12->setEnabled(true);
    ui->pitanje13->setEnabled(true);
    ui->pitanje14->setEnabled(true);
    ui->pitanje15->setEnabled(true);
    ui->pitanje16->setEnabled(true);
    ui->pitanje17->setEnabled(true);
    ui->pitanje18->setEnabled(true);
    ui->pitanje19->setEnabled(true);
    ui->pitanje20->setEnabled(true);
    ui->pitanje21->setEnabled(true);
    ui->pitanje22->setEnabled(true);
    ui->pitanje23->setEnabled(true);
    ui->pitanje24->setEnabled(true);
    ui->pitanje25->setEnabled(true);
}

void MainWindow::openDB()
{
    db = base->getDatabase();
}

void MainWindow::programStart()
{
    ui->label->setFixedWidth(200);
    this->setFixedHeight(600);
    this->setFixedWidth(800);
    ui->progressBar->setValue(0);
    ui->progressBar->setVisible(false);
    ui->progressBar->setMaximum(25);
    deaktPitanja();
    checkDB();
    openDB();
    ui->ending->setEnabled(false);
}

void MainWindow::loggedIn(QString userID)
{
    labelUpdate(userID);
    log->close();

    currentID = new QString();
    *currentID = userID;

    ui->progressBar->setVisible(true);
    ui->ending->setEnabled(true);

    aktPitanja();
    setPointsToZero();
    setDateToNull();
    StatusBarUpdate();
}

void MainWindow::on_actionLog_in_triggered()
{
    log->exec();
}

void MainWindow::labelUpdate(QString userID)
{
    QSqlQuery qry;

    qry.prepare("SELECT Ime, Prezime FROM Studenti WHERE RedniBroj='"+userID+"' ");
    qry.exec();
    qry.next();
    QString ime = qry.value(0).toString();
    ui->label->setText(qry.value(0).toString() + " " + qry.value(1).toString());
}

bool MainWindow::checkDB()
{
    base = new database();

    if(base->connOpen()) {
        ui->label->setText("Baza podataka je otvorena");
        return true;
    }
    else {
        ui->label->setText("Baza podataka nije otvorena");
        return false;
    }
}

void MainWindow::StatusBarUpdate()
{
    QSqlQuery qry;
    qry.prepare("SELECT Bodovi FROM Studenti WHERE RedniBroj='"+*currentID+"' ");
    qry.exec();
    qry.next();

    currentPoints = new int(qry.value(0).toInt());
    ui->progressBar->setValue(*currentPoints);
}

void MainWindow::insertDate()
{
    QString* date = new QString();
    *date = QDate::currentDate().toString();

    QSqlQuery qry;
    qry.prepare("UPDATE Studenti SET Datum=:value WHERE RedniBroj='"+*currentID+"' ");
    qry.bindValue(":value", *date);
    qry.exec();
}

void MainWindow::setPointsToZero()
{

    QSqlQuery qry;
    int points=0;
    qry.prepare("UPDATE Studenti SET Bodovi=:value WHERE RedniBroj='"+*currentID+"' ");
    qry.bindValue(":value", points);
    qry.exec();
}

void MainWindow::setDateToNull()
{
    QSqlQuery qry;
    qry.prepare("UPDATE Studenti SET Datum=NULL WHERE RedniBroj='"+*currentID+"' ");
    qry.exec();
}


int *MainWindow::getCurrentPoints() const
{
    return currentPoints;
}

void MainWindow::setCurrentPoints(int *value)
{
    currentPoints = value;
}

void MainWindow::questionAnswered(QString qid)
{
    if(qid == "1") ui->pitanje1->setEnabled(false);
    else if(qid == "2") ui->pitanje2->setEnabled(false);
    else if(qid == "3") ui->pitanje3->setEnabled(false);
    else if(qid == "4") ui->pitanje4->setEnabled(false);
    else if(qid == "5") ui->pitanje5->setEnabled(false);
    else if(qid == "6") ui->pitanje6->setEnabled(false);
    else if(qid == "7") ui->pitanje7->setEnabled(false);
    else if(qid == "8") ui->pitanje8->setEnabled(false);
    else if(qid == "9") ui->pitanje9->setEnabled(false);
    else if(qid == "10") ui->pitanje10->setEnabled(false);
    else if(qid == "11") ui->pitanje11->setEnabled(false);
    else if(qid == "12") ui->pitanje12->setEnabled(false);
    else if(qid == "12") ui->pitanje13->setEnabled(false);
    else if(qid == "13") ui->pitanje13->setEnabled(false);
    else if(qid == "14") ui->pitanje14->setEnabled(false);
    else if(qid == "15") ui->pitanje15->setEnabled(false);
    else if(qid == "16") ui->pitanje16->setEnabled(false);
    else if(qid == "17") ui->pitanje17->setEnabled(false);
    else if(qid == "18") ui->pitanje18->setEnabled(false);
    else if(qid == "19") ui->pitanje19->setEnabled(false);
    else if(qid == "20") ui->pitanje20->setEnabled(false);
    else if(qid == "21") ui->pitanje21->setEnabled(false);
    else if(qid == "22") ui->pitanje22->setEnabled(false);
    else if(qid == "23") ui->pitanje23->setEnabled(false);
    else if(qid == "24") ui->pitanje24->setEnabled(false);
    else if(qid == "25") ui->pitanje25->setEnabled(false);

    StatusBarUpdate();
}

void MainWindow::on_pitanje1_clicked()
{
    rad = new radio(*currentID, "1");
    connect(rad,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    rad->exec();
}

void MainWindow::on_pitanje2_clicked()
{
    rad = new radio(*currentID, "2");
    connect(rad,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    rad->exec();
}

void MainWindow::on_pitanje3_clicked()
{
    rad = new radio(*currentID, "3");
    connect(rad,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    rad->exec();
}

void MainWindow::on_pitanje4_clicked()
{
    rad = new radio(*currentID, "4");
    connect(rad,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    rad->exec();
}

void MainWindow::on_pitanje5_clicked()
{
    rad = new radio(*currentID, "5");
    connect(rad,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    rad->exec();
}

void MainWindow::on_pitanje6_clicked()
{
    com = new combo(*currentID, "6");
    connect(com,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    com->exec();
}

void MainWindow::on_pitanje7_clicked()
{
    com = new combo(*currentID, "7");
    connect(com,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    com->exec();
}

void MainWindow::on_pitanje8_clicked()
{
    com = new combo(*currentID, "8");
    connect(com,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    com->exec();
}

void MainWindow::on_pitanje9_clicked()
{
    com = new combo(*currentID, "9");
    connect(com,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    com->exec();
}

void MainWindow::on_pitanje10_clicked()
{
    com = new combo(*currentID, "10");
    connect(com,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    com->exec();
}

void MainWindow::on_pitanje11_clicked()
{
    but = new button(*currentID, "11");
    connect(but,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    but->exec();
}

void MainWindow::on_pitanje12_clicked()
{
    but = new button(*currentID, "12");
    connect(but,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    but->exec();
}

void MainWindow::on_pitanje13_clicked()
{
    but = new button(*currentID, "13");
    connect(but,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    but->exec();
}

void MainWindow::on_pitanje14_clicked()
{
    but = new button(*currentID, "14");
    connect(but,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    but->exec();
}

void MainWindow::on_pitanje15_clicked()
{
    but = new button(*currentID, "15");
    connect(but,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    but->exec();
}

void MainWindow::on_pitanje16_clicked()
{
    che = new check(*currentID, "16");
    connect(che,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    che->exec();
}

void MainWindow::on_pitanje17_clicked()
{
    che = new check(*currentID, "17");
    connect(che,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    che->exec();
}

void MainWindow::on_pitanje18_clicked()
{
    che = new check(*currentID, "18");
    connect(che,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    che->exec();
}

void MainWindow::on_pitanje19_clicked()
{
    che = new check(*currentID, "19");
    connect(che,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    che->exec();
}
void MainWindow::on_pitanje20_clicked()
{
    che = new check(*currentID, "20");
    connect(che,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    che->exec();
}

void MainWindow::on_pitanje21_clicked()
{
    che = new check(*currentID, "21");
    connect(che,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    che->exec();
}

void MainWindow::on_pitanje22_clicked()
{
    che = new check(*currentID, "22");
    connect(che,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    che->exec();
}

void MainWindow::on_pitanje23_clicked()
{
    che = new check(*currentID, "23");
    connect(che,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    che->exec();
}

void MainWindow::on_pitanje24_clicked()
{
    che = new check(*currentID, "24");
    connect(che,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    che->exec();
}

void MainWindow::on_pitanje25_clicked()
{
    che = new check(*currentID, "25");
    connect(che,SIGNAL(answered(QString)),this,SLOT(questionAnswered(QString)));
    che->exec();
}

void MainWindow::on_ending_clicked()
{
    insertDate();
    deaktPitanja();
    this->close();
}

void MainWindow::on_actionPregled_triggered()
{
    view = new overview();
    view->exec();
}


