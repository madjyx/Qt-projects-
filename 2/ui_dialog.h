/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_serijski;
    QLabel *label_mjesec;
    QLabel *label_godina;
    QSpinBox *spinBox_stranice;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(585, 187);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 30, 471, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setTextFormat(Qt::AutoText);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_serijski = new QLabel(layoutWidget);
        label_serijski->setObjectName(QStringLiteral("label_serijski"));

        horizontalLayout_2->addWidget(label_serijski);

        label_mjesec = new QLabel(layoutWidget);
        label_mjesec->setObjectName(QStringLiteral("label_mjesec"));
        label_mjesec->setTextFormat(Qt::AutoText);

        horizontalLayout_2->addWidget(label_mjesec);

        label_godina = new QLabel(layoutWidget);
        label_godina->setObjectName(QStringLiteral("label_godina"));

        horizontalLayout_2->addWidget(label_godina);

        spinBox_stranice = new QSpinBox(layoutWidget);
        spinBox_stranice->setObjectName(QStringLiteral("spinBox_stranice"));
        spinBox_stranice->setMaximum(99999999);

        horizontalLayout_2->addWidget(spinBox_stranice);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QApplication::translate("Dialog", "Serijski", 0));
        label_2->setText(QApplication::translate("Dialog", "Mjesec", 0));
        label_3->setText(QApplication::translate("Dialog", "Godina", 0));
        label_4->setText(QApplication::translate("Dialog", "Stranice", 0));
        label_serijski->setText(QApplication::translate("Dialog", "TextLabel", 0));
        label_mjesec->setText(QApplication::translate("Dialog", "TextLabel", 0));
        label_godina->setText(QApplication::translate("Dialog", "TextLabel", 0));
        pushButton->setText(QApplication::translate("Dialog", "Zavr\305\241iti unos", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
