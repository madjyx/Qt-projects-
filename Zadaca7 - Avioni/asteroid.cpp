#include "Game.h"
extern Game* game;
Asteroid::Asteroid(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    //nacrtaj asteroid
    int random_number=rand()%700;
    setPos(random_number,0);
    //setRect(0,0,100,100);
    setPixmap(QPixmap(":/images/asteroid.png"));

    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(moveAsteroid()));
    timer->start(50);
}

void Asteroid::moveAsteroid()
{

    setPos(x(),y()+5);
    if(pos().y()>590){
        scene()->removeItem(this);
        delete this;
        qDebug()<<"Asteroid je prošao";
        game->zivoti->decrease();
         }
}
void Asteroid::sudarRuba()
{
    if((qrand()%1)){
        setRotation(rotation()+(180+(qrand()%20)));
    }
    else{
        setRotation(rotation()+(180+(qrand()%-20)));
    }
}

