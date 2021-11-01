#include "potrosac.h"

Potrosac::Potrosac(QObject *parent):QThread(parent)
{

}

void Potrosac::run()
{
    for(int i=0; i<DataSize; ++i){
        iskoristeniBajti.acquire();
        fprintf(stderr,"%c", buffer[i%BufferSize]);
        slobodniBajti.release();
        this->msleep(3000);
        emit promjenaNapunjenihBuffera(iskoristeniBajti.available());
        emit promjenaPotrosenih(i);
    }
    fprintf(stderr,"\n");
}
