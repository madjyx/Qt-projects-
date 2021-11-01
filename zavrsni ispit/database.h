#ifndef DATABASE_H
#define DATABASE_H
#include <QSqlDatabase>

class database
{
public:
    database();
    bool connOpen();
    void connClose();
    QSqlDatabase* getDatabase();
    QSqlDatabase base;
};

#endif // DATABASE_H
