#ifndef OVERVIEW_H
#define OVERVIEW_H

#include <QDialog>
#include "database.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class overview;
}

class overview : public QDialog
{
    Q_OBJECT

public:
    explicit overview(QWidget *parent = 0);
    ~overview();
    void openDB();
    void addDataToTable();

private:
    Ui::overview *ui;
    QSqlDatabase *db;
    database *base;
    QSqlQueryModel *model;
};

#endif // OVERVIEW_H
