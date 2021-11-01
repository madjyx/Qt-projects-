#ifndef ZAJEDNICKE_H
#define ZAJEDNICKE_H

#include <QSemaphore>

const int DataSize=100;
const int BufferSize=5;

extern char buffer[BufferSize];

extern QSemaphore slobodniBajti;
extern QSemaphore iskoristeniBajti;



#endif // ZAJEDNICKE_H
