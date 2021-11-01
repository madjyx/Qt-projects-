#ifndef CHECK_H
#define CHECK_H

#include <QDialog>
#include "database.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>

namespace Ui {
class check;
}

class check : public QDialog
{
    Q_OBJECT

public:
    explicit check(QString id, QString qid, QWidget *parent = 0);
    ~check();
    void openDB();
    void setID(QString id);
    void setQuestion(QString qid);

signals:
    void answered(QString);

private slots:
    void on_pushButton_clicked();

private:
    Ui::check *ui;
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
    void checkSelected();
    bool finalRes;
    void pointsInsert();
    void answeredButton();
};

#endif // CHECK_H
