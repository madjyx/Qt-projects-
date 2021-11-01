#include "Game.h"
extern Game* game;
Player::Player(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    shoot=new QMediaPlayer();
    shoot->setMedia(QUrl("qrc:/sounds/shooting_sound.wav"));
    setPixmap(QPixmap(":/images/spaceship.png"));
    setPos(400,500);
}

void Player::keyPressEvent(QKeyEvent *event)
{
    //qDebug()<<"Player zna da ste pritisnuli tipku";
    if(event->key()==Qt::Key_Left){
        game->smijer-=90;
        if(game->smijer<0)game->smijer+=360;
        qDebug()<<game->smijer;
        setTransformOriginPoint(32,32);
        setRotation(game->smijer);
        game->update();
    }
    if(event->key()==Qt::Key_Right){
        game->smijer+=90;
        if(game->smijer>359)game->smijer-=360;
        qDebug()<<game->smijer;
        setTransformOriginPoint(32,32);
        setRotation(game->smijer);
        game->update();

    }
    if(event->key()==Qt::Key_Up){
        if(game->smijer==0){
            if(y()>0)
            setPos(x(),y()-10);
        }
        if(game->smijer==90){
            if(x()<735)
            setPos(x()+10,y());
        }
        if(game->smijer==180){
            if(y()<535)
            setPos(x(),y()+10);
        }
        if(game->smijer==270){
            if(x()>0)
            setPos(x()-10,y());
        }
    }
    if(event->key()==Qt::Key_Down){
        if(game->smijer==0){
            if(y()<535)
            setPos(x(),y()+10);
        }
        if(game->smijer==90){
            if(x()>0)
            setPos(x()-10,y());
        }
        if(game->smijer==180){
            if(y()>0)
            setPos(x(),y()-10);
        }
        if(game->smijer==270){
            if(x()<735)
            setPos(x()+10,y());
        }
    }
    if(event->key()==Qt::Key_Space){
         if(shoot->state()==QMediaPlayer::PlayingState)shoot->setPosition(0);

         shoot->play();
         Bullet *bullet=new Bullet();
         bullet->setPos(x()+27,y());
         bullet->setRotation(game->smijer);
         scene()->addItem(bullet);
    }
}
