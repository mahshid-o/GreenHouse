/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelAadiName;
    QLabel *labelAadiNumber;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelNaderNAme;
    QLabel *labelNaderNumber;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelZinatiName;
    QLabel *labelZinatiNumber;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelHazfNumber_2;
    QLabel *labelHazfNumber;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelOsareName;
    QLabel *labelOsareNumber;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelKashteName;
    QLabel *labelKashteNumber;
    QLabel *labelWarehouse;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *labelMoney;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButtonLoad;
    QPushButton *pushButtonSave;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButtonLaboratory;
    QPushButton *pushButtonStore;
    QPushButton *pushButtonGreenHouse;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelOsOrkide;
    QLabel *labelOsOrkideWH;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelOsLilium;
    QLabel *labelOsLiliumWH;
    QVBoxLayout *verticalLayout_10;
    QLabel *labelOsMagnolia;
    QLabel *labelOsMagnoliaWH;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelWater;
    QLabel *labelWaterWH;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelPoison;
    QLabel *labelPoisonWH;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelSoil;
    QLabel *labelSoilWH;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButtonSaveName;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditProfileName;
    QLabel *labelProfileName;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(900, 522);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/background.png);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(170, 130, 561, 171));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 40, 203, 88));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelAadiName = new QLabel(layoutWidget);
        labelAadiName->setObjectName(QStringLiteral("labelAadiName"));

        horizontalLayout_4->addWidget(labelAadiName);

        labelAadiNumber = new QLabel(layoutWidget);
        labelAadiNumber->setObjectName(QStringLiteral("labelAadiNumber"));

        horizontalLayout_4->addWidget(labelAadiNumber);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelNaderNAme = new QLabel(layoutWidget);
        labelNaderNAme->setObjectName(QStringLiteral("labelNaderNAme"));

        horizontalLayout_3->addWidget(labelNaderNAme);

        labelNaderNumber = new QLabel(layoutWidget);
        labelNaderNumber->setObjectName(QStringLiteral("labelNaderNumber"));

        horizontalLayout_3->addWidget(labelNaderNumber);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelZinatiName = new QLabel(layoutWidget);
        labelZinatiName->setObjectName(QStringLiteral("labelZinatiName"));

        horizontalLayout_2->addWidget(labelZinatiName);

        labelZinatiNumber = new QLabel(layoutWidget);
        labelZinatiNumber->setObjectName(QStringLiteral("labelZinatiNumber"));

        horizontalLayout_2->addWidget(labelZinatiNumber);


        verticalLayout_2->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 40, 211, 101));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 0, 181, 81));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        labelHazfNumber_2 = new QLabel(layoutWidget1);
        labelHazfNumber_2->setObjectName(QStringLiteral("labelHazfNumber_2"));

        horizontalLayout_6->addWidget(labelHazfNumber_2);

        labelHazfNumber = new QLabel(layoutWidget1);
        labelHazfNumber->setObjectName(QStringLiteral("labelHazfNumber"));

        horizontalLayout_6->addWidget(labelHazfNumber);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        labelOsareName = new QLabel(layoutWidget1);
        labelOsareName->setObjectName(QStringLiteral("labelOsareName"));

        horizontalLayout_7->addWidget(labelOsareName);

        labelOsareNumber = new QLabel(layoutWidget1);
        labelOsareNumber->setObjectName(QStringLiteral("labelOsareNumber"));

        horizontalLayout_7->addWidget(labelOsareNumber);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelKashteName = new QLabel(layoutWidget1);
        labelKashteName->setObjectName(QStringLiteral("labelKashteName"));

        horizontalLayout_5->addWidget(labelKashteName);

        labelKashteNumber = new QLabel(layoutWidget1);
        labelKashteNumber->setObjectName(QStringLiteral("labelKashteNumber"));

        horizontalLayout_5->addWidget(labelKashteNumber);


        verticalLayout->addLayout(horizontalLayout_5);

        labelWarehouse = new QLabel(centralWidget);
        labelWarehouse->setObjectName(QStringLiteral("labelWarehouse"));
        labelWarehouse->setGeometry(QRect(820, 20, 31, 21));
        labelWarehouse->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 10, 65, 47));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        labelMoney = new QLabel(layoutWidget2);
        labelMoney->setObjectName(QStringLiteral("labelMoney"));

        verticalLayout_3->addWidget(labelMoney);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(350, 320, 195, 30));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButtonLoad = new QPushButton(layoutWidget3);
        pushButtonLoad->setObjectName(QStringLiteral("pushButtonLoad"));

        horizontalLayout_9->addWidget(pushButtonLoad);

        pushButtonSave = new QPushButton(layoutWidget3);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));

        horizontalLayout_9->addWidget(pushButtonSave);

        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(50, 420, 811, 30));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButtonLaboratory = new QPushButton(layoutWidget4);
        pushButtonLaboratory->setObjectName(QStringLiteral("pushButtonLaboratory"));

        horizontalLayout_8->addWidget(pushButtonLaboratory);

        pushButtonStore = new QPushButton(layoutWidget4);
        pushButtonStore->setObjectName(QStringLiteral("pushButtonStore"));

        horizontalLayout_8->addWidget(pushButtonStore);

        pushButtonGreenHouse = new QPushButton(layoutWidget4);
        pushButtonGreenHouse->setObjectName(QStringLiteral("pushButtonGreenHouse"));

        horizontalLayout_8->addWidget(pushButtonGreenHouse);

        layoutWidget5 = new QWidget(centralWidget);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(800, 60, 91, 341));
        verticalLayout_8 = new QVBoxLayout(layoutWidget5);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        labelOsOrkide = new QLabel(layoutWidget5);
        labelOsOrkide->setObjectName(QStringLiteral("labelOsOrkide"));

        verticalLayout_7->addWidget(labelOsOrkide);

        labelOsOrkideWH = new QLabel(layoutWidget5);
        labelOsOrkideWH->setObjectName(QStringLiteral("labelOsOrkideWH"));

        verticalLayout_7->addWidget(labelOsOrkideWH);


        verticalLayout_8->addLayout(verticalLayout_7);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        labelOsLilium = new QLabel(layoutWidget5);
        labelOsLilium->setObjectName(QStringLiteral("labelOsLilium"));

        verticalLayout_9->addWidget(labelOsLilium);

        labelOsLiliumWH = new QLabel(layoutWidget5);
        labelOsLiliumWH->setObjectName(QStringLiteral("labelOsLiliumWH"));

        verticalLayout_9->addWidget(labelOsLiliumWH);


        verticalLayout_8->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        labelOsMagnolia = new QLabel(layoutWidget5);
        labelOsMagnolia->setObjectName(QStringLiteral("labelOsMagnolia"));

        verticalLayout_10->addWidget(labelOsMagnolia);

        labelOsMagnoliaWH = new QLabel(layoutWidget5);
        labelOsMagnoliaWH->setObjectName(QStringLiteral("labelOsMagnoliaWH"));

        verticalLayout_10->addWidget(labelOsMagnoliaWH);


        verticalLayout_8->addLayout(verticalLayout_10);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        labelWater = new QLabel(layoutWidget5);
        labelWater->setObjectName(QStringLiteral("labelWater"));

        verticalLayout_6->addWidget(labelWater);

        labelWaterWH = new QLabel(layoutWidget5);
        labelWaterWH->setObjectName(QStringLiteral("labelWaterWH"));

        verticalLayout_6->addWidget(labelWaterWH);


        verticalLayout_8->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        labelPoison = new QLabel(layoutWidget5);
        labelPoison->setObjectName(QStringLiteral("labelPoison"));

        verticalLayout_4->addWidget(labelPoison);

        labelPoisonWH = new QLabel(layoutWidget5);
        labelPoisonWH->setObjectName(QStringLiteral("labelPoisonWH"));

        verticalLayout_4->addWidget(labelPoisonWH);


        verticalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        labelSoil = new QLabel(layoutWidget5);
        labelSoil->setObjectName(QStringLiteral("labelSoil"));

        verticalLayout_5->addWidget(labelSoil);

        labelSoilWH = new QLabel(layoutWidget5);
        labelSoilWH->setObjectName(QStringLiteral("labelSoilWH"));

        verticalLayout_5->addWidget(labelSoilWH);


        verticalLayout_8->addLayout(verticalLayout_5);

        layoutWidget6 = new QWidget(centralWidget);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(310, 80, 264, 30));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        pushButtonSaveName = new QPushButton(layoutWidget6);
        pushButtonSaveName->setObjectName(QStringLiteral("pushButtonSaveName"));

        horizontalLayout_10->addWidget(pushButtonSaveName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEditProfileName = new QLineEdit(layoutWidget6);
        lineEditProfileName->setObjectName(QStringLiteral("lineEditProfileName"));

        horizontalLayout->addWidget(lineEditProfileName);

        labelProfileName = new QLabel(layoutWidget6);
        labelProfileName->setObjectName(QStringLiteral("labelProfileName"));

        horizontalLayout->addWidget(labelProfileName);


        horizontalLayout_10->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 26));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        labelAadiName->setText(QApplication::translate("MainWindow", "\332\257\331\204 \331\207\330\247\333\214 \330\271\330\247\330\257\333\214", nullptr));
        labelAadiNumber->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelNaderNAme->setText(QApplication::translate("MainWindow", "\332\257\331\204 \331\207\330\247\333\214 \331\206\330\247\330\257\330\261", nullptr));
        labelNaderNumber->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelZinatiName->setText(QApplication::translate("MainWindow", "\332\257\331\204 \331\207\330\247\333\214 \330\262\333\214\331\206\330\252\333\214", nullptr));
        labelZinatiNumber->setText(QApplication::translate("MainWindow", "0", nullptr));
        groupBox_2->setTitle(QString());
        labelHazfNumber_2->setText(QApplication::translate("MainWindow", " \332\257\331\204 \331\207\330\247\333\214 \330\255\330\260\331\201 \330\264\330\257\331\207", nullptr));
        labelHazfNumber->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelOsareName->setText(QApplication::translate("MainWindow", "\330\271\330\265\330\247\330\261\331\207 \331\207\330\247", nullptr));
        labelOsareNumber->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelKashteName->setText(QApplication::translate("MainWindow", "\332\257\331\204 \331\207\330\247\333\214 \332\251\330\247\330\264\330\252\331\207 \330\264\330\257\331\207", nullptr));
        labelKashteNumber->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelWarehouse->setText(QApplication::translate("MainWindow", "\330\247\331\206\330\250\330\247\330\261", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\331\276\330\263 \330\247\331\206\330\257\330\247\330\262", nullptr));
        labelMoney->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButtonLoad->setText(QApplication::translate("MainWindow", "\330\250\330\247\330\261\332\257\330\262\330\247\330\261\333\214", nullptr));
        pushButtonSave->setText(QApplication::translate("MainWindow", "\330\260\330\256\333\214\330\261\331\207", nullptr));
        pushButtonLaboratory->setText(QApplication::translate("MainWindow", "\330\242\330\262\331\205\330\247\333\214\330\264\332\257\330\247\331\207", nullptr));
        pushButtonStore->setText(QApplication::translate("MainWindow", "\331\201\330\261\331\210\330\264\332\257\330\247\331\207", nullptr));
        pushButtonGreenHouse->setText(QApplication::translate("MainWindow", "\332\257\331\204\330\256\330\247\331\206\331\207", nullptr));
        labelOsOrkide->setText(QApplication::translate("MainWindow", "\330\271\330\265\330\247\330\261\331\207 \330\247\330\261\332\251\333\214\330\257\331\207", nullptr));
        labelOsOrkideWH->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelOsLilium->setText(QApplication::translate("MainWindow", "\330\271\330\265\330\247\330\261\331\207 \331\204\333\214\331\204\333\214\331\210\331\205", nullptr));
        labelOsLiliumWH->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelOsMagnolia->setText(QApplication::translate("MainWindow", "\330\271\330\265\330\247\330\261\331\207 \331\205\332\257\331\206\331\210\331\204\333\214\330\247", nullptr));
        labelOsMagnoliaWH->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelWater->setText(QApplication::translate("MainWindow", "\330\260\330\256\333\214\330\261\331\207 \330\242\330\250", nullptr));
        labelWaterWH->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelPoison->setText(QApplication::translate("MainWindow", "\331\205\330\247\330\257\331\207 \330\263\331\205 \331\276\330\247\330\264\333\214", nullptr));
        labelPoisonWH->setText(QApplication::translate("MainWindow", "0", nullptr));
        labelSoil->setText(QApplication::translate("MainWindow", "\330\260\330\256\333\214\330\261\331\207 \330\256\330\247\332\251", nullptr));
        labelSoilWH->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButtonSaveName->setText(QApplication::translate("MainWindow", "\330\260\330\256\333\214\330\261\331\207 \331\206\330\247\331\205", nullptr));
        labelProfileName->setText(QApplication::translate("MainWindow", "\331\206\330\247\331\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
