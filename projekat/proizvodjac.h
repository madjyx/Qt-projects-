#ifndef PROIZVODJAC_H
#define PROIZVODJAC_H
#include <QThread>
#include <QObject>
//#include <QRandomGenerator>
#include "zajednicke.h"

class Proizvodjac : public QThread
{
    Q_OBJECT
public:
    explicit Proizvodjac(QObject *parent=0);
    void run();
signals:
    void promjenaNapunjenihBuffera(int);
    void promjenaProizvedenih(int);


};

#endif // PROIZVODJAC_H
