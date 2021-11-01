#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "database.h"
#include "login.h"
#include <QString>
#include "radio.h"
#include "button.h"
#include "combo.h"
#include "check.h"
#include "overview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void openDB();
    login *log;
    radio *rad;
    button *but;
    combo *com;
    check *che;
    overview *view;

    int *getCurrentPoints() const;
    void setCurrentPoints(int *value);

public slots:
    void loggedIn(QString userID);
    void questionAnswered(QString qid);

private slots:
    void on_actionLog_in_triggered();

    void on_pitanje1_clicked();

    void on_pitanje2_clicked();

    void on_pitanje3_clicked();

    void on_pitanje4_clicked();

    void on_pitanje5_clicked();

    void on_pitanje6_clicked();

    void on_pitanje7_clicked();

    void on_pitanje8_clicked();

    void on_pitanje9_clicked();

    void on_pitanje10_clicked();

    void on_pitanje11_clicked();

    void on_pitanje12_clicked();

    void on_pitanje13_clicked();

    void on_pitanje14_clicked();

    void on_pitanje15_clicked();

    void on_pitanje16_clicked();

    void on_pitanje17_clicked();

    void on_pitanje18_clicked();

    void on_pitanje19_clicked();

    void on_pitanje20_clicked();

    void on_pitanje21_clicked();

    void on_pitanje22_clicked();

    void on_pitanje23_clicked();

    void on_pitanje24_clicked();

    void on_pitanje25_clicked();

    void on_ending_clicked();

    void on_actionPregled_triggered();

    void on_actionIzlaz_triggered();

private:
    Ui::MainWindow *ui;
    QSqlDatabase* db;
    database *base;
    void programStart();
    void deaktPitanja();
    void aktPitanja();
    void labelUpdate(QString userID);
    bool checkDB();
    void StatusBarUpdate();
    QString *currentID;
    int *currentPoints;
    void insertDate();
    void setPointsToZero();
    void setDateToNull();

};

#endif // MAINWINDOW_H
