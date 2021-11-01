#ifndef PLAYER_H
#define PLAYER_H

#include "Game.h"

class Player: public QGraphicsPixmapItem{
  public:
    Player(QGraphicsItem *parent=0);
    void keyPressEvent(QKeyEvent * event);
private:
    QMediaPlayer *shoot;

};

#endif // PLAYER_H
