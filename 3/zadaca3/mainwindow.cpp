#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);

    QPen pen;

    pen.setColor(Qt::black);
    pen.setWidth(3);

    painter.setPen(pen);

    //Tri donje prave linije
    painter.drawLine(80,450,200,450);
    painter.drawLine(280,450,400,450);
    painter.drawLine(480,450,600,450);
    //Dva donja luka
    QRectF rectangle(200,410,80,80);
    int startAngle = 0 * 16;
    int spanAngle = 180 * 16;

    painter.drawArc(rectangle, startAngle, spanAngle);

    QRectF rectangle2(400,410,80,80);
    int startAngle2 = 0 * 16;
    int spanAngle2 = 180 * 16;

    painter.drawArc(rectangle2, startAngle2, spanAngle2);

    //lijeva krajnja uspravna linija
    painter.drawLine(80,450,80,380);
    //desna krajnja uspravna linija
    painter.drawLine(600,450,600,380);
    //vodoravna linija prije zadnje šajbe
    painter.drawLine(80,380,150,380);
    //vodoravna linija posle prednje šajbe
    painter.drawLine(600,380,460,380);
    //vodoravna linija ispod prednjeg prozora
    painter.drawLine(315,380,440,380);
    //vodoravna linija ispod zadnjeg prozora
    painter.drawLine(160,380,300,380);
    //horizontalna linija zadnji prozor
    painter.drawLine(300,380,300,280);
    //horizontalna linija prednji prozor
    painter.drawLine(315,380,315,280);

    //krov
    QRectF rectangle3(150,270,310,210);
    int startAngle3 = 0 * 16;
    int spanAngle3 = 180 * 16;

    painter.drawArc(rectangle3, startAngle3, spanAngle3);

    //prednji prozor
    QRectF rectangle4(160,280,280,180);
    int startAngle4 = 0 * 16;
    int spanAngle4 = 85 * 16;

    painter.drawArc(rectangle4, startAngle4, spanAngle4);
    //zadnji prozor
    QRectF rectangle5(160,280,280,180);
    int startAngle5 = 90 * 16;
    int spanAngle5 = 95 * 16;

    painter.drawArc(rectangle5, startAngle5, spanAngle5);

    //zadnja guma
    painter.drawEllipse(QRect(215,430,50,50));
    painter.drawEllipse(QRect(225,440,30,30));
    painter.drawEllipse(QRect(235,450,10,10));
    painter.drawEllipse(QRect(230,445,20,20));
    painter.drawEllipse(QRect(220,435,40,40));
    painter.drawEllipse(QRect(205,420,70,70));


    //prednja guma
    painter.drawEllipse(QRect(405,420,70,70));
    painter.drawEllipse(QRect(415,430,50,50));
    painter.drawEllipse(QRect(420,435,40,40));
    painter.drawEllipse(QRect(425,440,30,30));
    painter.drawEllipse(QRect(430,445,20,20));
    painter.drawEllipse(QRect(435,450,10,10));


}
