#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    scene = new QGraphicsScene();
    scene->setBackgroundBrush(QBrush(QColor(Qt::gray)));
    scene->setSceneRect(0,0,800,600);

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setFixedSize(800,600);

    QPen crna_olovka(Qt::black);
    crna_olovka.setWidth(3);

    linija=scene->addLine(400,10,400,600,crna_olovka);
    linija=scene->addLine(10,500,800,500,crna_olovka);
    //dodavanje zastave
    QPixmap bih("C:/Users/User/Desktop/OP 07.07/4/zadaca4/zastava-bih.jpg");
    scene->addPixmap(bih.scaled(150,150,Qt::KeepAspectRatio));
    QString tekst("Jasmin Muratović");
    tekst.isSimpleText();
    setFont(QFont("times",16,16,BOLD_FONTTYPE));

    QGraphicsTextItem txt;
    ui->label->setText(tekst);
    ui->label->setStyleSheet("color:yellow");
    ui->label_2->setText("Slučajevi");
    ui->label_3->setText("Mjesec");
    ui->label_2->setStyleSheet("color:yellow");
    ui->label_3->setStyleSheet("color:yellow");

    ui->label_4->setText("2020");
    ui->label_5->setText("2021");
    ui->label_4->setStyleSheet("color:yellow");
    ui->label_5->setStyleSheet("color:yellow");

    //mjeseci
    setFont(QFont("times",10));
    ui->label_17->setText("Jun");
    ui->label_6->setText("Jul");
    ui->label_7->setText("Aug");
    ui->label_8->setText("Sep");
    ui->label_9->setText("Okt");
    ui->label_10->setText("Nov");
    ui->label_11->setText("Dec");
    ui->label_12->setText("Jan");
    ui->label_13->setText("Feb");
    ui->label_14->setText("Mar");
    ui->label_15->setText("Apr");
    ui->label_16->setText("Maj");
    ui->label_17->setStyleSheet("color:yellow");
    ui->label_6->setStyleSheet("color:yellow");
    ui->label_7->setStyleSheet("color:yellow");
    ui->label_8->setStyleSheet("color:yellow");
    ui->label_9->setStyleSheet("color:yellow");
    ui->label_10->setStyleSheet("color:yellow");
    ui->label_11->setStyleSheet("color:yellow");
    ui->label_12->setStyleSheet("color:yellow");
    ui->label_13->setStyleSheet("color:yellow");
    ui->label_14->setStyleSheet("color:yellow");
    ui->label_15->setStyleSheet("color:yellow");
    ui->label_16->setStyleSheet("color:yellow");

    //slučajevi
    linija=scene->addLine(395,450,405,450,crna_olovka);
    linija=scene->addLine(395,400,405,400,crna_olovka);
    linija=scene->addLine(395,350,405,350,crna_olovka);
    linija=scene->addLine(395,300,405,300,crna_olovka);
    linija=scene->addLine(395,250,405,250,crna_olovka);
    linija=scene->addLine(395,200,405,200,crna_olovka);
    linija=scene->addLine(395,150,405,150,crna_olovka);
    linija=scene->addLine(395,100,405,100,crna_olovka);
    linija=scene->addLine(395,50,405,50,crna_olovka);

    ui->label_18->setText("50000");
    ui->label_19->setText("45000");
    ui->label_20->setText("40000");
    ui->label_21->setText("35000");
    ui->label_22->setText("30000");
    ui->label_23->setText("25000");
    ui->label_24->setText("20000");
    ui->label_25->setText("15000");
    ui->label_26->setText("10000");
    ui->label_27->setText("5000");

    ui->label_18->setStyleSheet("color:yellow");
    ui->label_19->setStyleSheet("color:yellow");
    ui->label_20->setStyleSheet("color:yellow");
    ui->label_21->setStyleSheet("color:yellow");
    ui->label_22->setStyleSheet("color:yellow");
    ui->label_23->setStyleSheet("color:yellow");
    ui->label_24->setStyleSheet("color:yellow");
    ui->label_25->setStyleSheet("color:yellow");
    ui->label_26->setStyleSheet("color:yellow");
    ui->label_27->setStyleSheet("color:yellow");

    //vertikalne linije
    QPen zuta_olovka(Qt::yellow);
    zuta_olovka.setWidth(3);
    linija=scene->addLine(10,478,10,500,zuta_olovka);
    linija=scene->addLine(66,426,66,500,zuta_olovka);
    linija=scene->addLine(132,439,132,500,zuta_olovka);
    linija=scene->addLine(198,397,198,500,zuta_olovka);
    linija=scene->addLine(264,283,264,500,zuta_olovka);
    linija=scene->addLine(330,222,330,500,zuta_olovka);
    linija=scene->addLine(396,263,396,500,zuta_olovka);
    linija=scene->addLine(462,396,462,500,zuta_olovka);
    linija=scene->addLine(528,400,528,500,zuta_olovka);
    linija=scene->addLine(594,126,594,500,zuta_olovka);
    linija=scene->addLine(660,222,660,500,zuta_olovka);
    linija=scene->addLine(726,460,726,500,zuta_olovka);

    QBrush bijela_cetka(Qt::white);
    QPen bijela_olovka(Qt::white);
    bijela_olovka.setWidth(3);

    elipsa=scene->addEllipse(0,458,20,20,bijela_olovka,bijela_cetka);
    elipsa=scene->addEllipse(56,406,20,20,bijela_olovka,bijela_cetka);
    elipsa=scene->addEllipse(122,419,20,20,bijela_olovka,bijela_cetka);
    elipsa=scene->addEllipse(188,377,20,20,bijela_olovka,bijela_cetka);
    elipsa=scene->addEllipse(254,263,20,20,bijela_olovka,bijela_cetka);
    elipsa=scene->addEllipse(320,202,20,20,bijela_olovka,bijela_cetka);
    elipsa=scene->addEllipse(386,243,20,20,bijela_olovka,bijela_cetka);
    elipsa=scene->addEllipse(452,376,20,20,bijela_olovka,bijela_cetka);
    elipsa=scene->addEllipse(518,380,20,20,bijela_olovka,bijela_cetka);
    elipsa=scene->addEllipse(584,106,20,20,bijela_olovka,bijela_cetka);
    elipsa=scene->addEllipse(650,202,20,20,bijela_olovka,bijela_cetka);
    elipsa=scene->addEllipse(716,440,20,20,bijela_olovka,bijela_cetka);

    //broj slučajeva
    QGraphicsTextItem *text = scene->addText("2199",QFont("times",10));
    text->setPos(0,428);
    text->setDefaultTextColor(Qt::yellow);

    QGraphicsTextItem *text2 = scene->addText("7423",QFont("times",10));
    text2->setPos(56,376);
    text2->setDefaultTextColor(Qt::yellow);

    QGraphicsTextItem *text3 = scene->addText("6153",QFont("times",10));
    text3->setPos(122,399);
    text3->setDefaultTextColor(Qt::yellow);

    QGraphicsTextItem *text4 = scene->addText("10325",QFont("times",10));
    text4->setPos(188,347);
    text4->setDefaultTextColor(Qt::yellow);

    QGraphicsTextItem *text5 = scene->addText("21738",QFont("times",10));
    text5->setPos(254,233);
    text5->setDefaultTextColor(Qt::yellow);

    QGraphicsTextItem *text6 = scene->addText("27804",QFont("times",10));
    text6->setPos(320,172);
    text6->setDefaultTextColor(Qt::yellow);

    QGraphicsTextItem *text7 = scene->addText("23734",QFont("times",10));
    text7->setPos(386,213);
    text7->setDefaultTextColor(Qt::yellow);

    QGraphicsTextItem *text8 = scene->addText("10443",QFont("times",10));
    text8->setPos(452,346);
    text8->setDefaultTextColor(Qt::yellow);

    QGraphicsTextItem *text9 = scene->addText("10052",QFont("times",10));
    text9->setPos(518,350);
    text9->setDefaultTextColor(Qt::yellow);

    QGraphicsTextItem *text10 = scene->addText("37488",QFont("times",10));
    text10->setPos(584,76);
    text10->setDefaultTextColor(Qt::yellow);

    QGraphicsTextItem *text11 = scene->addText("28834",QFont("times",10));
    text11->setPos(650,172);
    text11->setDefaultTextColor(Qt::yellow);

    QGraphicsTextItem *text12 = scene->addText("4000",QFont("times",10));
    text12->setPos(716,410);
    text12->setDefaultTextColor(Qt::yellow);

    //Qpoligon
    QPainter painter(this);
    QPolygon poligon;
    //poligon.setPoints(3,10,500,10,478,66,426,132,439,198,397,264,283,330,222,396,263,462,396,528,400,594,126,660,222,726,460,726,500,10,500);

    poligon <<QPoint(10,500) << QPoint(10,478) << QPoint(66,426) << QPoint(132,439) <<QPoint(198,397)<<QPoint(264,283)<<QPoint(330,222)<<QPoint(396,263)<<QPoint(462,396)<<QPoint(528,400)<<QPoint(594,126)<<QPoint(660,222)<<QPoint(726,460)<<QPoint(726,500)<<QPoint(10,500);
    QPainterPath path;
    path.addPolygon(poligon);

    QGraphicsPathItem pathitem;
    pathitem.setPath(path);

    QPen plava_olovka(Qt::blue);
    plava_olovka.setWidth(3);
    QBrush plava_cetka(Qt::blue);
    //plava_cetka.setColor(Qt::Dense5Pattern);
    plava_cetka.setStyle(Qt::Dense5Pattern);

    pathitem.setPen(plava_olovka);
    pathitem.setBrush(plava_cetka);

    //painter.setBrush(plava_cetka);
    //painter.setPen(plava_olovka);
    //painter.drawPolygon(poligon);

    //painter.drawPath(path);
    //painter.fillPath(path,plava_cetka);


    scene->addPath(path,plava_olovka,plava_cetka);


}

MainWindow::~MainWindow()
{
    delete ui;
}

