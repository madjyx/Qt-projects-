#ifndef GAME_H
#define GAME_H

#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
#include <QGraphicsPixmapItem>
#include <QMessageBox>
#include <QtMath>
#include <QImage>
#include <QBrush>
#include <QKeyEvent>
#include <QObject>
#include <QTimer>
#include <QDebug>
#include <stdlib.h>
#include <QFont>
#include <typeinfo>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include "player.h"
#include "bullet.h"
#include "asteroid.h"
#include "score.h"
#include "health.h"

class Game:public QGraphicsView{
    Q_OBJECT
public:
    Game(QWidget *parent=0);
    QGraphicsScene *scene=new QGraphicsScene();
    Score *rez;
    Health *zivoti;

    int smijer;
public slots:
    void spawn();
};
#endif // GAME_H
