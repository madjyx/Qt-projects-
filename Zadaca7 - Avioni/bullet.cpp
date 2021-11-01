# include "Game.h"
extern Game* game;
Bullet::Bullet(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    //setRect(0,0,10,50);
    setPixmap(QPixmap(":/images/missile.png"));

    QTimer *timerU=new QTimer();
    QTimer *timerD=new QTimer();
    QTimer *timerL=new QTimer();
    QTimer *timerR=new QTimer();
    if(game->smijer==0){
     qDebug()<<"timerU start";
    connect(timerU,SIGNAL(timeout()),this,SLOT(moveU()));
    timerU->start(50);
    }
    if(game->smijer==180){
    qDebug()<<"timerD start";
    connect(timerD,SIGNAL(timeout()),this,SLOT(moveD()));
    timerD->start(50);
    }
    if(game->smijer==270){
    qDebug()<<"timerL start";
    connect(timerL,SIGNAL(timeout()),this,SLOT(moveL()));
    timerL->start(50);
    }
    if(game->smijer==90){
    qDebug()<<"timerR start";
    connect(timerR,SIGNAL(timeout()),this,SLOT(moveR()));
    timerR->start(50);
    }
}

void Bullet::moveU()
{
    QList<QGraphicsItem *> colliding_items=collidingItems();
    for(int i=0, n=colliding_items.size();i<n;++i){
        if(typeid(*(colliding_items[i]))==typeid(Asteroid)){
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            qDebug()<<"Asteroid uništen";
            game->rez->increase();
            return;
        }
    }
    setPos(x(),y()-10);
    if(pos().y()<0){
        scene()->removeItem(this);
        delete this;
        qDebug()<<"Metak je unisten";
    }

}

void Bullet::moveD()
{
    QList<QGraphicsItem *> colliding_items=collidingItems();
    for(int i=0, n=colliding_items.size();i<n;++i){
        if(typeid(*(colliding_items[i]))==typeid(Asteroid)){
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            qDebug()<<"Asteroid uništen";
            game->rez->increase();
            return;
        }
    }

    setPos(x(),y()+10);
    if(pos().y()>600){
        scene()->removeItem(this);
        delete this;
        qDebug()<<"Metak je unisten";
    }

}

void Bullet::moveL()
{
    QList<QGraphicsItem *> colliding_items=collidingItems();
    for(int i=0, n=colliding_items.size();i<n;++i){
        if(typeid(*(colliding_items[i]))==typeid(Asteroid)){
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            qDebug()<<"Asteroid uništen";
            game->rez->increase();

            return;
        }
    }

    setPos(x()-10,y());
    if(pos().x()+100<0){
        scene()->removeItem(this);
        delete this;
        qDebug()<<"Metak je unisten";
    }

}

void Bullet::moveR()
{
    QList<QGraphicsItem *> colliding_items=collidingItems();
    for(int i=0, n=colliding_items.size();i<n;++i){
        if(typeid(*(colliding_items[i]))==typeid(Asteroid)){
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            qDebug()<<"Asteroid uništen";
            game->rez->increase();

            return;
        }
    }

    setPos(x()+10,y());
    if(pos().x()+100>900){
        scene()->removeItem(this);
        delete this;
        qDebug()<<"Metak je unisten";
    }

}
