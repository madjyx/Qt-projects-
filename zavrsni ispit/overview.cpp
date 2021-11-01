#include "overview.h"
#include "ui_overview.h"
#include <QDebug>

overview::overview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::overview)
{
    ui->setupUi(this);
    this->setWindowTitle("Pregled");

    openDB();

    this->resize(600, 600);

    addDataToTable();
}

overview::~overview()
{
    delete ui;
}

void overview::openDB()
{
        base = new database();
        db = base->getDatabase();
}

void overview::addDataToTable()
{

    QSqlQuery qry;

    qry.prepare("SELECT Ime, Prezime, Bodovi, Datum FROM Studenti");
    qry.exec();

    model = new QSqlQueryModel();
    model->setQuery(qry);
    ui->tableView->setModel(model);
}
