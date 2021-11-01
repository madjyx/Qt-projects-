#include "tree.h"
#include "ui_tree.h"

tree::tree(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tree)
{
    ui->setupUi(this);
    setGeometry(670,460,260,260);

    model=new QStringListModel(this);
    QStringList lista;
    lista << "Hadzic Amir" << "Gogić Kemal" << "Fišeković Eldar"<< "Fazlović Emina"<< "Đurić Đorđe"<< "Dzinović Azra"<< "Ćosić Benjamin"<< "Čorbić Amar"<< "Čokić Edin"<< "Čizmić Tarik";
    model->setStringList(lista);

    ui->treeView->setModel(model);

    ui->treeView->setEditTriggers(QAbstractItemView::AnyKeyPressed | QAbstractItemView::DoubleClicked);
}

tree::~tree()
{
    delete ui;
}

void tree::on_pushButton_clicked()
{
    //add
    int row=model->rowCount();
    model->insertRows(row,1);

    QModelIndex index=model->index(row);
    ui->treeView->setCurrentIndex(index);
    ui->treeView->edit(index);
}


void tree::on_pushButton_2_clicked()
{
    //delete
    model->removeRows(ui->treeView->currentIndex().row(),1);
}

