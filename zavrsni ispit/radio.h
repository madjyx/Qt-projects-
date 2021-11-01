#ifndef RADIO_H
#define RADIO_H

#include <QDialog>
#include "database.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>

namespace Ui {
class radio;
}

class radio : public QDialog
{
    Q_OBJECT

public:
    explicit radio(QString id, QString qid, QWidget *parent = 0);
    ~radio();
    void openDB();
    void setID(QString id);
    void setQuestion(QString qid);

signals:
    void answered(QString);

private slots:
    void on_pushButton_clicked();

private:
    Ui::radio *ui;
    void loadQuestion();
    void loadAnswers();
    QSqlDatabase *db;
    database *base;
    QString questionID;
    QString userID;
    bool answer1;
    bool answer2;
    bool answer3;
    bool answer4;
    bool answer5;
    void checkRightAnswer();
    bool finalRes;
    void checkSelected();
    void pointsInsert();
};

#endif // RADIO_H
