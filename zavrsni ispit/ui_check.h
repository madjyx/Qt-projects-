/********************************************************************************
** Form generated from reading UI file 'check.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_H
#define UI_CHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_check
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QCheckBox *ans1;
    QCheckBox *ans2;
    QCheckBox *ans3;
    QCheckBox *ans4;
    QCheckBox *ans5;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *check)
    {
        if (check->objectName().isEmpty())
            check->setObjectName(QStringLiteral("check"));
        check->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(check);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(check);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ans1 = new QCheckBox(check);
        ans1->setObjectName(QStringLiteral("ans1"));

        verticalLayout->addWidget(ans1);

        ans2 = new QCheckBox(check);
        ans2->setObjectName(QStringLiteral("ans2"));

        verticalLayout->addWidget(ans2);

        ans3 = new QCheckBox(check);
        ans3->setObjectName(QStringLiteral("ans3"));

        verticalLayout->addWidget(ans3);

        ans4 = new QCheckBox(check);
        ans4->setObjectName(QStringLiteral("ans4"));

        verticalLayout->addWidget(ans4);

        ans5 = new QCheckBox(check);
        ans5->setObjectName(QStringLiteral("ans5"));

        verticalLayout->addWidget(ans5);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(check);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(check);

        QMetaObject::connectSlotsByName(check);
    } // setupUi

    void retranslateUi(QDialog *check)
    {
        check->setWindowTitle(QApplication::translate("check", "Dialog", 0));
        label->setText(QApplication::translate("check", "TextLabel", 0));
        ans1->setText(QApplication::translate("check", "CheckBox", 0));
        ans2->setText(QApplication::translate("check", "CheckBox", 0));
        ans3->setText(QApplication::translate("check", "CheckBox", 0));
        ans4->setText(QApplication::translate("check", "CheckBox", 0));
        ans5->setText(QApplication::translate("check", "CheckBox", 0));
        pushButton->setText(QApplication::translate("check", "Odgovori", 0));
    } // retranslateUi

};

namespace Ui {
    class check: public Ui_check {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_H
