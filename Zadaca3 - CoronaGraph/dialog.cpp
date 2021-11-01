#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
     control=0;
    ui->setupUi(this);
    ui->tableView->setFixedWidth(250);
    ui->tableView->setFixedHeight(200);
    ui->pushButton->setFixedWidth(252);
    mydb=QSqlDatabase::addDatabase("QSQLITE");

    //OVDJE POVEZATI BAZU - ZALIJEPITI URL
    mydb.setDatabaseName("/graf.db");

    if(!mydb.open()){
        qDebug()<<"Bazu podataka nije moguce otvoriti";
    }
    else
        qDebug()<<"Konektovani ste na bazu..";


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{

    if(!mydb.isOpen()){
        qDebug()<<"Baza podataka nije otvorena";
        return;
    }
    QSqlQuery qry;
    sqlModel= new QSqlQueryModel();
    qry.prepare("select * from Tacke");

    if(qry.exec("select * from Tacke")){

        int count=0;
        while(qry.next()){
            graph<<QPoint(qry.value(0).toInt()*10,-qry.value(1).toInt()/100);
            qDebug()<<"x="<< qry.value(0).toInt()*10 <<"; y="<<-qry.value(1).toInt()/100;
           // graph<<QPoint(qry.value(0).toInt()*10,-qry.value(1).toInt());
            //qDebug()<<"x="<< qry.value(0).toInt()*10 <<"; y="<<-qry.value(1).toInt();
            lista<<qry.value(1).toString();
            count++;
            if(count==30) graph<<QPoint(qry.value(0).toInt()*10,0);
        }

        if(count==30){
            qDebug()<<"Potpuni podaci";
        }
        if(count<30)  qDebug()<<"Nepotpuni podaci";
       this->update();
    }
    sqlModel->setQuery(qry);
    ui->tableView->setModel(sqlModel);
    control=1;
    if(control==1) ui->pushButton->setEnabled(false);


}

void Dialog::paintEvent(QPaintEvent *e)
{


    QPainter painter(this);
    painter.translate(400,350);

    QRect zastava1(-390,-340,75,150);
    QRect zastava2(-315,-340,75,150);
    QRect zastava3(-240,-340,75,150);
    QBrush zastava_plava(Qt::darkBlue);
    painter.fillRect(zastava1,zastava_plava);
    QBrush zastava_bijela(Qt::white);
    painter.fillRect(zastava2,zastava_bijela);
    QBrush zastava_crvena(Qt::red);
    painter.fillRect(zastava3,zastava_crvena);

    painter.drawRect(zastava1);
    painter.drawRect(zastava2);
    painter.drawRect(zastava3);

    QPen linepen;
    linepen.setWidth(4);
    linepen.setColor(Qt::white);
    painter.setPen(linepen);

    QBrush fillbrush;
    fillbrush.setColor(Qt::red);
    fillbrush.setStyle(Qt::SolidPattern);

    QPainterPath path;
    path.addPolygon(graph);

    painter.drawPolygon(graph);
    painter.fillPath(path,fillbrush);

    QPen axispen;
    axispen.setWidth(5);
    axispen.setColor(Qt::darkBlue);
    axispen.setCapStyle(Qt::RoundCap);
    painter.setPen(axispen);

    QBrush fillbrush2;
    fillbrush2.setColor(Qt::black);
    fillbrush2.setStyle(Qt::SolidPattern);

    QPoint point_center(0,0);
    QPoint point_x(400,0);
    QPoint point_y(0,-300);

    painter.drawLine(point_center,point_x); //x osa
    painter.drawLine(point_center,point_y); //y osa

    painter.drawLine(400, 0, 380,  20); //strelica x
    painter.drawLine(400, 0, 380, -20);
    painter.drawLine(0,-300,  20,-280); //strelica y
    painter.drawLine(0,-300, -20,-280);



    if(control==1){
        QSqlQuery qry2;
        int presjek=0,skala=0;
        //bolesnika=3000, y_osa=40;
        if(qry2.exec("select * from Tacke")){
            while(qry2.next()){
                presjek++;
                if(presjek%5==0){
                    skala+=1;

                painter.drawText(qry2.value(0).toInt()*10,-qry2.value(1).toInt()/100-10,QString::number(qry2.value(1).toInt()));
                painter.drawText(qry2.value(0).toInt()*10,20,QString::number(qry2.value(0).toInt()));
                if(presjek==30)  painter.drawText(qry2.value(0).toInt()*10+50,20,"Dana");
                if(skala==6) painter.drawText(-40,-50*skala,"Bolesnika");
                else painter.drawText(-40,-50*skala,QString::number(5000*skala));
                qDebug()<<"x="<< qry2.value(0).toInt()*10 <<"; y="<<qry2.value(1).toInt()/100;
               }
            }
    }
    control=0;
   }

    QPen paintpen1 (Qt::black);
       painter.setPen(paintpen1);
       painter.setFont(QFont("Verdana", 10, QFont::Normal));
       painter.drawText(350, -300, "Stanje od: 25 Februar - 25 Mart");

}



