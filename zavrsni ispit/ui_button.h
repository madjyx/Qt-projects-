/********************************************************************************
** Form generated from reading UI file 'button.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTON_H
#define UI_BUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_button
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *ans1;
    QPushButton *ans2;
    QPushButton *ans3;
    QPushButton *ans4;
    QPushButton *ans5;

    void setupUi(QDialog *button)
    {
        if (button->objectName().isEmpty())
            button->setObjectName(QStringLiteral("button"));
        button->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(button);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(button);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ans1 = new QPushButton(button);
        ans1->setObjectName(QStringLiteral("ans1"));

        verticalLayout->addWidget(ans1);

        ans2 = new QPushButton(button);
        ans2->setObjectName(QStringLiteral("ans2"));

        verticalLayout->addWidget(ans2);

        ans3 = new QPushButton(button);
        ans3->setObjectName(QStringLiteral("ans3"));

        verticalLayout->addWidget(ans3);

        ans4 = new QPushButton(button);
        ans4->setObjectName(QStringLiteral("ans4"));

        verticalLayout->addWidget(ans4);

        ans5 = new QPushButton(button);
        ans5->setObjectName(QStringLiteral("ans5"));

        verticalLayout->addWidget(ans5);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(button);

        QMetaObject::connectSlotsByName(button);
    } // setupUi

    void retranslateUi(QDialog *button)
    {
        button->setWindowTitle(QApplication::translate("button", "Dialog", 0));
        label->setText(QApplication::translate("button", "TextLabel", 0));
        ans1->setText(QApplication::translate("button", "PushButton", 0));
        ans2->setText(QApplication::translate("button", "PushButton", 0));
        ans3->setText(QApplication::translate("button", "PushButton", 0));
        ans4->setText(QApplication::translate("button", "PushButton", 0));
        ans5->setText(QApplication::translate("button", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class button: public Ui_button {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTON_H
