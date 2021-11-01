#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include <QListView>
#include <QPushButton>
#include <QComboBox>
#include <QtGui>
#include <QtCore>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QInputDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void addAction();
    void insertAction();
    void deleteAction();

private:
    Ui::MainWindow *ui;
    QStringListModel *model;
    QListView *view;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QComboBox *combobox;
    QHBoxLayout *hlayout;
    QVBoxLayout *vlayout;
    QGroupBox *horizontalGroupBox;
    QGroupBox *verticalGroupBox;
    QGridLayout *grid;
};


#endif // MAINWINDOW_H
