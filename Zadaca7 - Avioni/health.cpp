#include "Game.h"
extern Game *game;

Health::Health(QGraphicsItem *parent)
{
    health=3;
    setPlainText(QString("Zivoti: ")+QString::number(health));
    setDefaultTextColor(Qt::red);
    setPos(715,0);
    setFont(QFont("times",16));
}

void Health::decrease()
{
    if(health>1){
    health--;
    setPlainText(QString("Zivoti: ")+QString::number(health));
    }
    else if(health==1){
    health--;
    crash=new QMediaPlayer();
    crash->setMedia(QUrl("qrc:/sounds/explosion_sound.wav"));
    if(crash->state()==QMediaPlayer::PlayingState)crash->setPosition(0);

    crash->play();
    setPlainText(QString("Zivoti: ")+QString::number(health));
    QMessageBox msg;
    msg.setText("Game Over");
    QString rezS=QString::number(game->rez->getScore());
    msg.setInformativeText("Izgubili ste sve živote\nVaš rezultat je: " + rezS);
    msg.setIcon(QMessageBox::Critical);
    msg.button(QMessageBox::Escape);
    game->setEnabled(false);

    msg.exec();
    game->setHidden(true);
    qDebug()<<"Game Over";
    game->close();
    }
}

int Health::getHealth()
{
    return health;
}
