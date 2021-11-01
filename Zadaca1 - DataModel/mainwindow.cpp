#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWidget *window = new QWidget();
window -> setWindowTitle("Zadaca 1, Grupa 1");
    setCentralWidget(window);
    window->setGeometry(100,100,400,300);
    window->autoFillBackground();



    view = new QListView(this);
    model = new QStringListModel(this);

    view -> setModel(model);

    QStringList lista;
    lista << "Matematika" << "Poslovna informatika" << "Uvod u računarstvo i informacione tehnologije"
          << "Osnove ekonomije" << "Osnove programiranja" << "Strukture podataka i algoritmi"
          << "Upravljanje prodajom i pregovaranje" << "Uvod u informacione sisteme" << "Operativni sistemi"
          << "Poslovni Engleski jezik" << "Razvoj i izgradnja informacionih sistema" << "Računarske mreže"
          << "Programski jezici i programiranje" << "Osnove marketinga i internet marketing"
          << "Primijenjeni finansijski menadžment";

    model->setStringList(lista);

    combobox=new QComboBox(this);
    combobox->setModel(model);

    //view -> listView->setEditTriggers(QAbstractItemView::AnyKeyPressed | QAbstractItemView::DoubleClicked);

    button1 = new QPushButton("Add", this);
    connect(button1,SIGNAL(clicked(bool)),this,SLOT(addAction()));
    button1->setStyleSheet("QPushButton{color: white;background-color: blue;}");

    button2= new QPushButton("Insert", this);
    connect(button2,SIGNAL(clicked(bool)),this,SLOT(insertAction()));
    button2->setStyleSheet("QPushButton{color: white;background-color: green;}");

    button3= new QPushButton("Delete", this);
    connect(button3,SIGNAL(clicked(bool)),this,SLOT(deleteAction()));
    button3->setStyleSheet("QPushButton{color: white;background-color: red;}");

    hlayout = new QHBoxLayout();
    hlayout->addWidget(button1);
    hlayout->addWidget(button2);
    hlayout->addWidget(button3);
    horizontalGroupBox = new QGroupBox();
    horizontalGroupBox->setLayout(hlayout);

    vlayout = new QVBoxLayout();
    vlayout->addWidget(view);
    vlayout->addWidget(combobox);
    verticalGroupBox = new QGroupBox();
    verticalGroupBox->setLayout(vlayout);

    grid= new QGridLayout(this);
    grid->addWidget(verticalGroupBox,0,0,1,2);
    grid->addWidget(horizontalGroupBox,1,0,1,2);

    window->setLayout(grid);

    window->show();

}

void MainWindow::addAction()
{
    //ADD BUTTON FUNKCIJA
    int row=model->rowCount();
    model->insertRows(row,1);

    QModelIndex index=model->index(row);
    view->setCurrentIndex(index);
    view->edit(index);
}

void MainWindow::insertAction()
{
    //INSERT BUTTON FUNKCIJA
    int row=view->currentIndex().row();
    model->insertRows(row,1);

    QModelIndex index=model->index(row);
    view->setCurrentIndex(index);
    view->edit(index);
}

void MainWindow::deleteAction()
{
    //DELETE BUTTON FUNKCIJA
    model->removeRows(view->currentIndex().row(),1);
}


MainWindow::~MainWindow()
{
    delete ui;
}
