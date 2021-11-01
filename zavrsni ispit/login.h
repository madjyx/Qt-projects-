#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "database.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QString>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();
    void loginCheck(QString username, QString password);
    void openDB();

signals:
    void loginSuccessful(QString);

private slots:
    void on_prijavaButton_clicked();

private:
    Ui::login *ui;
    QSqlDatabase *db;
    database *base;

};

#endif // LOGIN_H
