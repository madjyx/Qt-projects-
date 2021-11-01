/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLog_in;
    QAction *actionPregled;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pitanje1;
    QPushButton *pitanje6;
    QPushButton *pitanje11;
    QPushButton *pitanje16;
    QPushButton *pitanje21;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pitanje2;
    QPushButton *pitanje7;
    QPushButton *pitanje12;
    QPushButton *pitanje17;
    QPushButton *pitanje22;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pitanje3;
    QPushButton *pitanje8;
    QPushButton *pitanje13;
    QPushButton *pitanje18;
    QPushButton *pitanje23;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pitanje4;
    QPushButton *pitanje9;
    QPushButton *pitanje14;
    QPushButton *pitanje19;
    QPushButton *pitanje24;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pitanje5;
    QPushButton *pitanje10;
    QPushButton *pitanje15;
    QPushButton *pitanje20;
    QPushButton *pitanje25;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ending;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QLatin1String("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: rgb(238, 251, 255);\n"
"\n"
"font: 8pt \"Fixedsys\";\n"
"\n"
"selection-background-color: rgb(239, 231, 255);\n"
"\n"
"gridline-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"\n"
"background-color: rgb(166, 202, 255);"));
        actionLog_in = new QAction(MainWindow);
        actionLog_in->setObjectName(QStringLiteral("actionLog_in"));
        QIcon icon;
        icon.addFile(QStringLiteral("login.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLog_in->setIcon(icon);
        actionPregled = new QAction(MainWindow);
        actionPregled->setObjectName(QStringLiteral("actionPregled"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("view.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPregled->setIcon(icon1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_6->addItem(horizontalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pitanje1 = new QPushButton(centralWidget);
        pitanje1->setObjectName(QStringLiteral("pitanje1"));
        QFont font;
        font.setFamily(QStringLiteral("Fixedsys"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        pitanje1->setFont(font);
        pitanje1->setStyleSheet(QStringLiteral("color: rgb(255, 0, 4);"));

        verticalLayout->addWidget(pitanje1);

        pitanje6 = new QPushButton(centralWidget);
        pitanje6->setObjectName(QStringLiteral("pitanje6"));
        pitanje6->setStyleSheet(QStringLiteral("color: rgb(255, 0, 4);"));

        verticalLayout->addWidget(pitanje6);

        pitanje11 = new QPushButton(centralWidget);
        pitanje11->setObjectName(QStringLiteral("pitanje11"));
        pitanje11->setStyleSheet(QStringLiteral("color: rgb(255, 0, 4);"));

        verticalLayout->addWidget(pitanje11);

        pitanje16 = new QPushButton(centralWidget);
        pitanje16->setObjectName(QStringLiteral("pitanje16"));
        pitanje16->setStyleSheet(QStringLiteral("color: rgb(255, 0, 4);"));

        verticalLayout->addWidget(pitanje16);

        pitanje21 = new QPushButton(centralWidget);
        pitanje21->setObjectName(QStringLiteral("pitanje21"));
        pitanje21->setStyleSheet(QStringLiteral("color: rgb(255, 0, 4);"));

        verticalLayout->addWidget(pitanje21);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pitanje2 = new QPushButton(centralWidget);
        pitanje2->setObjectName(QStringLiteral("pitanje2"));
        pitanje2->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));

        verticalLayout_2->addWidget(pitanje2);

        pitanje7 = new QPushButton(centralWidget);
        pitanje7->setObjectName(QStringLiteral("pitanje7"));
        pitanje7->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));

        verticalLayout_2->addWidget(pitanje7);

        pitanje12 = new QPushButton(centralWidget);
        pitanje12->setObjectName(QStringLiteral("pitanje12"));
        pitanje12->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));

        verticalLayout_2->addWidget(pitanje12);

        pitanje17 = new QPushButton(centralWidget);
        pitanje17->setObjectName(QStringLiteral("pitanje17"));
        pitanje17->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));

        verticalLayout_2->addWidget(pitanje17);

        pitanje22 = new QPushButton(centralWidget);
        pitanje22->setObjectName(QStringLiteral("pitanje22"));
        pitanje22->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));

        verticalLayout_2->addWidget(pitanje22);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pitanje3 = new QPushButton(centralWidget);
        pitanje3->setObjectName(QStringLiteral("pitanje3"));
        pitanje3->setStyleSheet(QStringLiteral("color: rgb(22, 120, 11);"));

        verticalLayout_3->addWidget(pitanje3);

        pitanje8 = new QPushButton(centralWidget);
        pitanje8->setObjectName(QStringLiteral("pitanje8"));
        pitanje8->setStyleSheet(QStringLiteral("color: rgb(22, 120, 11);"));

        verticalLayout_3->addWidget(pitanje8);

        pitanje13 = new QPushButton(centralWidget);
        pitanje13->setObjectName(QStringLiteral("pitanje13"));
        pitanje13->setStyleSheet(QStringLiteral("color: rgb(22, 120, 11);"));

        verticalLayout_3->addWidget(pitanje13);

        pitanje18 = new QPushButton(centralWidget);
        pitanje18->setObjectName(QStringLiteral("pitanje18"));
        pitanje18->setStyleSheet(QStringLiteral("color: rgb(22, 120, 11);"));

        verticalLayout_3->addWidget(pitanje18);

        pitanje23 = new QPushButton(centralWidget);
        pitanje23->setObjectName(QStringLiteral("pitanje23"));
        pitanje23->setStyleSheet(QStringLiteral("color: rgb(22, 120, 11);"));

        verticalLayout_3->addWidget(pitanje23);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pitanje4 = new QPushButton(centralWidget);
        pitanje4->setObjectName(QStringLiteral("pitanje4"));
        pitanje4->setStyleSheet(QStringLiteral("color: rgb(226, 226, 0);"));

        verticalLayout_4->addWidget(pitanje4);

        pitanje9 = new QPushButton(centralWidget);
        pitanje9->setObjectName(QStringLiteral("pitanje9"));
        pitanje9->setStyleSheet(QStringLiteral("color: rgb(226, 226, 0);"));

        verticalLayout_4->addWidget(pitanje9);

        pitanje14 = new QPushButton(centralWidget);
        pitanje14->setObjectName(QStringLiteral("pitanje14"));
        pitanje14->setStyleSheet(QStringLiteral("color: rgb(226, 226, 0);"));

        verticalLayout_4->addWidget(pitanje14);

        pitanje19 = new QPushButton(centralWidget);
        pitanje19->setObjectName(QStringLiteral("pitanje19"));
        pitanje19->setStyleSheet(QStringLiteral("color: rgb(226, 226, 0);"));

        verticalLayout_4->addWidget(pitanje19);

        pitanje24 = new QPushButton(centralWidget);
        pitanje24->setObjectName(QStringLiteral("pitanje24"));
        pitanje24->setStyleSheet(QStringLiteral("color: rgb(226, 226, 0);"));

        verticalLayout_4->addWidget(pitanje24);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        pitanje5 = new QPushButton(centralWidget);
        pitanje5->setObjectName(QStringLiteral("pitanje5"));
        pitanje5->setStyleSheet(QStringLiteral("color: rgb(177, 26, 157);"));

        verticalLayout_5->addWidget(pitanje5);

        pitanje10 = new QPushButton(centralWidget);
        pitanje10->setObjectName(QStringLiteral("pitanje10"));
        pitanje10->setStyleSheet(QStringLiteral("color: rgb(177, 26, 157);"));

        verticalLayout_5->addWidget(pitanje10);

        pitanje15 = new QPushButton(centralWidget);
        pitanje15->setObjectName(QStringLiteral("pitanje15"));
        pitanje15->setStyleSheet(QStringLiteral("color: rgb(177, 26, 157);"));

        verticalLayout_5->addWidget(pitanje15);

        pitanje20 = new QPushButton(centralWidget);
        pitanje20->setObjectName(QStringLiteral("pitanje20"));
        pitanje20->setStyleSheet(QStringLiteral("color: rgb(177, 26, 157);"));

        verticalLayout_5->addWidget(pitanje20);

        pitanje25 = new QPushButton(centralWidget);
        pitanje25->setObjectName(QStringLiteral("pitanje25"));
        pitanje25->setStyleSheet(QStringLiteral("color: rgb(177, 26, 157);"));

        verticalLayout_5->addWidget(pitanje25);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        ending = new QPushButton(centralWidget);
        ending->setObjectName(QStringLiteral("ending"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/enter.png"), QSize(), QIcon::Normal, QIcon::Off);
        ending->setIcon(icon2);

        horizontalLayout_4->addWidget(ending);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(358, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_2->addWidget(progressBar);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addSeparator();
        menuMenu->addAction(actionLog_in);
        menuMenu->addAction(actionPregled);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPregled);
        mainToolBar->addAction(actionLog_in);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "POSTANI MILIONA\305\240", 0));
        actionLog_in->setText(QApplication::translate("MainWindow", "Login", 0));
        actionPregled->setText(QApplication::translate("MainWindow", "Pregled", 0));
        pitanje1->setText(QApplication::translate("MainWindow", "Pitanje 1", 0));
        pitanje6->setText(QApplication::translate("MainWindow", "Pitanje 6", 0));
        pitanje11->setText(QApplication::translate("MainWindow", "Pitanje 11", 0));
        pitanje16->setText(QApplication::translate("MainWindow", "Pitanje 16", 0));
        pitanje21->setText(QApplication::translate("MainWindow", "Pitanje 21", 0));
        pitanje2->setText(QApplication::translate("MainWindow", "Pitanje 2", 0));
        pitanje7->setText(QApplication::translate("MainWindow", "Pitanje 7", 0));
        pitanje12->setText(QApplication::translate("MainWindow", "Pitanje 12", 0));
        pitanje17->setText(QApplication::translate("MainWindow", "Pitanje 17", 0));
        pitanje22->setText(QApplication::translate("MainWindow", "Pitanje 22", 0));
        pitanje3->setText(QApplication::translate("MainWindow", "Pitanje 3 ", 0));
        pitanje8->setText(QApplication::translate("MainWindow", "Pitanje 8", 0));
        pitanje13->setText(QApplication::translate("MainWindow", "Pitanje 13", 0));
        pitanje18->setText(QApplication::translate("MainWindow", "Pitanje18", 0));
        pitanje23->setText(QApplication::translate("MainWindow", "Pitanje 23", 0));
        pitanje4->setText(QApplication::translate("MainWindow", "Pitanje 4", 0));
        pitanje9->setText(QApplication::translate("MainWindow", "Pitanje 9", 0));
        pitanje14->setText(QApplication::translate("MainWindow", "Pitanje 14", 0));
        pitanje19->setText(QApplication::translate("MainWindow", "Pitanje 19", 0));
        pitanje24->setText(QApplication::translate("MainWindow", "Pitanje 24", 0));
        pitanje5->setText(QApplication::translate("MainWindow", "Pitanje 5", 0));
        pitanje10->setText(QApplication::translate("MainWindow", "Pitanje 10", 0));
        pitanje15->setText(QApplication::translate("MainWindow", "Pitanje 15", 0));
        pitanje20->setText(QApplication::translate("MainWindow", "Pitanje 20", 0));
        pitanje25->setText(QApplication::translate("MainWindow", "Pitanje 25", 0));
        ending->setText(QApplication::translate("MainWindow", "Zavr\305\241i", 0));
        label->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Opcije", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
