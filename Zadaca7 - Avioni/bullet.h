#ifndef BULLET_H
#define BULLET_H

#include "Game.h"

class Bullet:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
  public:
    Bullet(QGraphicsItem *parent=0);
    QMediaPlayer *boom;
public slots:
    void moveU();
    void moveD();
    void moveL();
    void moveR();
};

#endif // BULLET_H
