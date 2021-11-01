#include "proizvodjac.h"

Proizvodjac::Proizvodjac(QObject *parent):QThread(parent)
{

}

void Proizvodjac::run()
{
    //QRandomGenerator qrand;
    for(int i=0; i<DataSize; ++i){
        slobodniBajti.acquire();
        buffer[i%BufferSize]="ACGT"[(int)qrand()%4];
        iskoristeniBajti.release();
        this->msleep(3000);
        if(i%20==0)
        emit promjenaNapunjenihBuffera(iskoristeniBajti.available());
        emit promjenaProizvedenih(i);

    }
}
