#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPainter>
#include <QPalette>
#include <QtCore>
#include <QtGui>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <Qt>
#include <QGraphicsTextItem>
#include <QTextItem>
#include <QFont>
#include <QGraphicsPathItem>
#include <QPoint>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsEllipseItem *elipsa;
    QGraphicsRectItem *kvadrat;
    QGraphicsLineItem *linija;
    QGraphicsTextItem *tekstovi;
};
#endif // MAINWINDOW_H
