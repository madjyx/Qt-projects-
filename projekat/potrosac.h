#ifndef POTROSAC_H
#define POTROSAC_H

#include <QThread>
#include "zajednicke.h"
//#include <QRandomGenerator>
class Potrosac : public QThread
{
    Q_OBJECT

public:
    explicit Potrosac(QObject *parent=0);
    void run();
signals:
    void promjenaNapunjenihBuffera(int);
    void promjenaPotrosenih(int);
};

#endif // POTROSAC_H
