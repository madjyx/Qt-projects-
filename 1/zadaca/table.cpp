#include "table.h"
#include "ui_table.h"

table::table(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::table)
{
    ui->setupUi(this);
    setGeometry(670,560,260,260);

    model=new QStringListModel(this);
    QStringList lista;
    lista << "Hadzic Amir" << "Gogić Kemal" << "Fišeković Eldar"<< "Fazlović Emina"<< "Đurić Đorđe"<< "Dzinović Azra"<< "Ćosić Benjamin"<< "Čorbić Amar"<< "Čokić Edin"<< "Čizmić Tarik";
    model->setStringList(lista);

    ui->tableView->setModel(model);

    ui->tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed | QAbstractItemView::DoubleClicked);
}

table::~table()
{
    delete ui;
}

void table::on_pushButton_2_clicked()
{
    //add
    int row=model->rowCount();
    model->insertRows(row,1);

    QModelIndex index=model->index(row);
    ui->tableView->setCurrentIndex(index);
    ui->tableView->edit(index);
}


void table::on_pushButton_clicked()
{
    //delete
    model->removeRows(ui->tableView->currentIndex().row(),1);
}

