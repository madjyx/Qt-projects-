#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "zajednicke.h"
#include "potrosac.h"
#include "proizvodjac.h"
#include <QSemaphore>


QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

public slots:
    //void promjenjenaVrijednostBuffera(int);
    //void promjenjenaVrijednostProizvodjaca(int);
    //void promjenjenaVrijednostPotrosaca(int);

private:
    Ui::Dialog *ui;
    Proizvodjac *mProizvodjac;
    Potrosac *mPotrosac;
};
#endif // DIALOG_H
