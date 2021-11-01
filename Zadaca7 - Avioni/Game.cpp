#include "Game.h"


Game::Game(QWidget *parent)
{
    //kreiranje scene
    scene=new QGraphicsScene();
    scene->setStickyFocus(true);
    //objekat za postavljanje u scenu
    Player *player=new Player();

    //dodavanje objekta u scenu
    scene->addItem(player);

    //playerIsFocusable
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    //napravi rezultat
    rez=new Score();
    scene->addItem(rez);

    //napravi zivote
    zivoti=new Health();
    scene->addItem(zivoti);

    //konfiguracija viewa
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);
    setBackgroundBrush(QBrush(QImage(":/images/background.jpg")));
    setScene(scene);

    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(spawn()));
    timer->start(3000);

    QMediaPlaylist *pl=new QMediaPlaylist();
    pl->addMedia(QUrl("qrc:/sounds/background_music.mp3"));
    pl->setPlaybackMode(QMediaPlaylist::Loop);

    QMediaPlayer *music=new QMediaPlayer();
    music->setPlaylist(pl);
    music->play();
    //prikaz scene
    show();


}

void Game::spawn()
{
    Asteroid *asteroid=new Asteroid();
    scene->addItem(asteroid);
}


