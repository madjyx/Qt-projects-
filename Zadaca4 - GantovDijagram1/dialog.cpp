#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("FCFS  -  Objektno programiranje");

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);

    QPen boxPen;
    boxPen.setCapStyle(Qt::RoundCap);
    boxPen.setColor(Qt::black);

    QPoint centar(50,50);
    QPoint Xosa(700,50);
    QPoint Yosa(50,300);
    QPoint pom(50,40);

    //TAČKE X OSE
    QPoint t0(46,30), t1(528,35), t2(458,35), t3(388,35), t(700,35);
    //TAČKE ZA BROJEVE
    QPoint x1(518,30), x2(448,30), x3(378,30);
    //TAČKE DONJE
    QPoint b1(528,300), b2(458,300), b3(388,300);
    //TAČKE Y OSE
    QPoint p1(20,100), p2(20,150), p3(20,200);

    //CRTANJE OSA
    painter.drawLine(centar,Xosa);
    painter.drawLine(pom,Yosa);
    painter.drawLine(t1,b1);
    painter.drawLine(t2,b2);
    painter.drawLine(t3,b3);


    //2X MALE STRELICE NA X OSI
    //DESNA
    painter.drawLine(700,50,690,55);
    painter.drawLine(700,50,690,45);
    //LIJEVA
    painter.drawLine(50,50,60,55);
    painter.drawLine(50,50,60,45);

    QFont font = painter.font() ;
    font.setPointSize(font.pointSize() * 2);
    painter.setFont(font);

    //BROJEVI I OZNAKE NA X OSI
    painter.drawText(t,"t");
    painter.drawText(t0,"0");
    painter.drawText(x1,"30");
    painter.drawText(x2,"27");
    painter.drawText(x3,"24");


    //OZNAKE NA Y OSI
    painter.drawText(p1,"P1");
    painter.drawText(p2,"P2");
    painter.drawText(p3,"P3");

    //P1 BOX
    QRect P1(50,70,338,40);
    painter.fillRect(P1,Qt::green);
    painter.drawRect(P1);

    //P2 BOX
    QRect P2(388,122,70,40);
    painter.fillRect(P2,Qt::green);
    painter.drawRect(P2);

    //P3 BOX
    QRect P3(458,175,70,40);
    painter.fillRect(P3,Qt::green);
    painter.drawRect(P3);


}
