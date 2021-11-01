/********************************************************************************
** Form generated from reading UI file 'radio.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIO_H
#define UI_RADIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_radio
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *ans1;
    QRadioButton *ans2;
    QRadioButton *ans3;
    QRadioButton *ans4;
    QRadioButton *ans5;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *radio)
    {
        if (radio->objectName().isEmpty())
            radio->setObjectName(QStringLiteral("radio"));
        radio->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(radio);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(radio);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ans1 = new QRadioButton(radio);
        ans1->setObjectName(QStringLiteral("ans1"));

        verticalLayout->addWidget(ans1);

        ans2 = new QRadioButton(radio);
        ans2->setObjectName(QStringLiteral("ans2"));

        verticalLayout->addWidget(ans2);

        ans3 = new QRadioButton(radio);
        ans3->setObjectName(QStringLiteral("ans3"));

        verticalLayout->addWidget(ans3);

        ans4 = new QRadioButton(radio);
        ans4->setObjectName(QStringLiteral("ans4"));

        verticalLayout->addWidget(ans4);

        ans5 = new QRadioButton(radio);
        ans5->setObjectName(QStringLiteral("ans5"));

        verticalLayout->addWidget(ans5);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(radio);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(radio);

        QMetaObject::connectSlotsByName(radio);
    } // setupUi

    void retranslateUi(QDialog *radio)
    {
        radio->setWindowTitle(QApplication::translate("radio", "Dialog", 0));
        label->setText(QApplication::translate("radio", "TextLabel", 0));
        ans1->setText(QApplication::translate("radio", "RadioButton", 0));
        ans2->setText(QApplication::translate("radio", "RadioButton", 0));
        ans3->setText(QApplication::translate("radio", "RadioButton", 0));
        ans4->setText(QApplication::translate("radio", "RadioButton", 0));
        ans5->setText(QApplication::translate("radio", "RadioButton", 0));
        pushButton->setText(QApplication::translate("radio", "Odgovori", 0));
    } // retranslateUi

};

namespace Ui {
    class radio: public Ui_radio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIO_H
