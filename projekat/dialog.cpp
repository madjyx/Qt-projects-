#include "dialog.h"
#include "ui_dialog.h"

char buffer[BufferSize];
QSemaphore slobodniBajti(BufferSize);
QSemaphore iskoristeniBajti;
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    mProizvodjac=new Proizvodjac(this);
    mPotrosac=new Potrosac(this);

    connect(mPotrosac,SIGNAL(promjenaNapunjenihBuffera(int)),this,SLOT(promjenjenaVrijednostBuffera(int)));
    connect(mProizvodjac,SIGNAL(promjenaNapunjenihBuffera(int)),this,SLOT(promjenjenaVrijednostBuffera(int)));

    connect(mPotrosac,SIGNAL(promjenaPotrosenih(int)),this,SLOT(promjenjenaVrijednostPotrosaca(int)));
    connect(mProizvodjac,SIGNAL(promjenaProizvedenih(int)),this,SLOT(promjenjenaVrijednostProizvodjaca(int)));
}

Dialog::~Dialog()
{
    delete ui;
}

