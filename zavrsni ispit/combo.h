#ifndef COMBO_H
#define COMBO_H

#include <QDialog>
#include "database.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>

namespace Ui {
class combo;
}

class combo : public QDialog
{
    Q_OBJECT

public:
    explicit combo(QString id, QString qid, QWidget *parent = 0);
    ~combo();
    void openDB();
    void setID(QString id);
    void setQuestion(QString qid);

signals:
    void answered(QString);

private slots:
    void on_pushButton_clicked();

private:
    Ui::combo *ui;
    void loadQuestion();
    void loadAnswers();
    QSqlDatabase *db;
    database *base;
    QString questionID;
    QString userID;
    void checkRightAnswer();
    bool finalRes;
    void pointsInsert();
    void answeredButton();
};

#endif // COMBO_H
