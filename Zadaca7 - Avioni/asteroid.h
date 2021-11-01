#ifndef ASTEROID_H
#define ASTEROID_H

#include "Game.h"

class Asteroid:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Asteroid(QGraphicsItem *parent=0);

public slots:
    void moveAsteroid();
private:
    void sudarRuba();

};
#endif // ASTEROID_H
