#ifndef HEALTH_H
#define HEALTH_H

#include "Game.h"

class Health: public QGraphicsTextItem{
public:
    Health(QGraphicsItem *parent=0);
    void decrease();
    int getHealth();
    QMediaPlayer *crash;
private:
    int health;
};

#endif // HEALTH_H
