/********************************************************************************
** Form generated from reading UI file 'overview.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEW_H
#define UI_OVERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_overview
{
public:
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;

    void setupUi(QDialog *overview)
    {
        if (overview->objectName().isEmpty())
            overview->setObjectName(QStringLiteral("overview"));
        overview->resize(400, 300);
        horizontalLayout = new QHBoxLayout(overview);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableView = new QTableView(overview);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout->addWidget(tableView);


        retranslateUi(overview);

        QMetaObject::connectSlotsByName(overview);
    } // setupUi

    void retranslateUi(QDialog *overview)
    {
        overview->setWindowTitle(QApplication::translate("overview", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class overview: public Ui_overview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEW_H
