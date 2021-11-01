#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("FCFS  -  Objektno programiranje");
    scena= new QGraphicsScene(this);
    ui->graphicsView->setScene(scena);

    scena->setBackgroundBrush(Qt::lightGray);

    QBrush PCetka(Qt::green);

    QPen crnaOlovka(Qt::black);
    crnaOlovka.setWidth(1);

    QFont fontP("Tahoma",25,1,false);
    QFont fontX("Tahoma",20,1,false);

    //OSE + STRELICE
    //X OSA
    l=scena->addLine(50,50,700,50,crnaOlovka);
    //Y OSA
    l=scena->addLine(50,40,50,300,crnaOlovka);
    //DESNA STRELICA
    l=scena->addLine(700,50,690,55,crnaOlovka);
    l=scena->addLine(700,50,690,45,crnaOlovka);
    //LIJEVA STRELICA
    l=scena->addLine(50,50,60,55,crnaOlovka);
    l=scena->addLine(50,50,60,45,crnaOlovka);

    //LINIJE NA X OSI
    l=scena->addLine(530,35,530,300,crnaOlovka);
    l=scena->addLine(450,35,450,300,crnaOlovka);
    l=scena->addLine(370,35,370,300,crnaOlovka);

    //OZNAKE: BROJEVI I SLOVA NA X OSI
    text=scena->addText("0",fontX);
    text->setPos(40,0);
    text=scena->addText("30",fontX);
    text->setPos(510,0);
    text=scena->addText("27",fontX);
    text->setPos(430,0);
    text=scena->addText("24",fontX);
    text->setPos(350,0);
    text=scena->addText("t",fontX);
    text->setPos(700,5);

    //P1
    text=scena->addText("P1",fontP);
    text->setPos(0,65);

    rect=scena->addRect(50,70,320,40,crnaOlovka,PCetka);

    //P2
    text=scena->addText("P2",fontP);
    text->setPos(0,120);

    rect=scena->addRect(370,122,80,40,crnaOlovka,PCetka);

    //P3
    text=scena->addText("P3",fontP);
    text->setPos(0,175);

    rect=scena->addRect(450,175,80,40,crnaOlovka,PCetka);

     scena->update();
}

Dialog::~Dialog()
{
    delete ui;
}

