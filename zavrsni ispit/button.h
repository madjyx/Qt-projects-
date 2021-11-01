#ifndef BUTTON_H
#define BUTTON_H

#include <QDialog>
#include "database.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>


namespace Ui {
class button;
}

class button : public QDialog
{
    Q_OBJECT

public:
    explicit button(QString id, QString qid, QWidget *parent = 0);
    ~button();
    void openDB();
    void setID(QString id);
    void setQuestion(QString qid);

signals:
    void answered(QString);

private slots:
    void on_ans1_clicked();
    void on_ans2_clicked();
    void on_ans3_clicked();
    void on_ans4_clicked();
    void on_ans5_clicked();

private:
    Ui::button *ui;
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
    void pointsInsert();
    void answeredButton();
};

#endif // BUTTON_H
