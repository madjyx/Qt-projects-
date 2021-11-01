#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtSql>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QPoint>
#include <QPolygon>
#include <QPainter>
#include <QTextDocument>
#include <QFont>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
    QSqlDatabase mydb;
    QPolygon graph;
    QStringList lista;
    QSqlQueryModel * sqlModel;
    int control;


protected:
    void paintEvent(QPaintEvent *e);
};

#endif // DIALOG_H
