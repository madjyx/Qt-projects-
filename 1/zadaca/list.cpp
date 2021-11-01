#include "list.h"
#include "ui_list.h"

list::list(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::list)
{
    ui->setupUi(this);
    setGeometry(670,170,260,260);

    model=new QStringListModel(this);
    QStringList lista;
    lista << "Hadzic Amir" << "Gogić Kemal" << "Fišeković Eldar"<< "Fazlović Emina"<< "Đurić Đorđe"<< "Dzinović Azra"<< "Ćosić Benjamin"<< "Čorbić Amar"<< "Čokić Edin"<< "Čizmić Tarik";

    model->setStringList(lista);

    ui->listView->setModel(model);

    ui->listView->setEditTriggers(QAbstractItemView::AnyKeyPressed | QAbstractItemView::DoubleClicked);

}

list::~list()
{
    delete ui;
}

void list::on_pushButton_clicked()
{
    //add
    int row=model->rowCount();
    model->insertRows(row,1);

    QModelIndex index=model->index(row);
    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);
}


void list::on_pushButton_2_clicked()
{
    //delete
    model->removeRows(ui->listView->currentIndex().row(),1);
}

