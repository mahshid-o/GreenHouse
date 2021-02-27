/********************************************************************************
** Form generated from reading UI file 'store2.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORE2_H
#define UI_STORE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Store2
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_18;
    QLabel *labelPrice;
    QSpacerItem *horizontalSpacer_21;
    QLabel *labeStore;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNormalPrice;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonBuyAadi;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelDecorativePrice;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonBuyDecorative;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelRarePrice;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonBuyRare;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelSoilPrice;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonBuyKhak;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelWaterPrice;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonBuyAb;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelPoisonPrice;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonBuyPoison;

    void setupUi(QDialog *Store2)
    {
        if (Store2->objectName().isEmpty())
            Store2->setObjectName(QStringLiteral("Store2"));
        Store2->resize(493, 521);
        Store2->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/background.png);"));
        groupBox = new QGroupBox(Store2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(80, 50, 311, 371));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        labelPrice = new QLabel(groupBox);
        labelPrice->setObjectName(QStringLiteral("labelPrice"));

        horizontalLayout_18->addWidget(labelPrice);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_21);

        labeStore = new QLabel(groupBox);
        labeStore->setObjectName(QStringLiteral("labeStore"));

        horizontalLayout_18->addWidget(labeStore);


        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelNormalPrice = new QLabel(groupBox);
        labelNormalPrice->setObjectName(QStringLiteral("labelNormalPrice"));

        horizontalLayout->addWidget(labelNormalPrice);

        horizontalSpacer = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonBuyAadi = new QPushButton(groupBox);
        pushButtonBuyAadi->setObjectName(QStringLiteral("pushButtonBuyAadi"));

        horizontalLayout->addWidget(pushButtonBuyAadi);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelDecorativePrice = new QLabel(groupBox);
        labelDecorativePrice->setObjectName(QStringLiteral("labelDecorativePrice"));

        horizontalLayout_2->addWidget(labelDecorativePrice);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButtonBuyDecorative = new QPushButton(groupBox);
        pushButtonBuyDecorative->setObjectName(QStringLiteral("pushButtonBuyDecorative"));

        horizontalLayout_2->addWidget(pushButtonBuyDecorative);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelRarePrice = new QLabel(groupBox);
        labelRarePrice->setObjectName(QStringLiteral("labelRarePrice"));

        horizontalLayout_3->addWidget(labelRarePrice);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButtonBuyRare = new QPushButton(groupBox);
        pushButtonBuyRare->setObjectName(QStringLiteral("pushButtonBuyRare"));

        horizontalLayout_3->addWidget(pushButtonBuyRare);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelSoilPrice = new QLabel(groupBox);
        labelSoilPrice->setObjectName(QStringLiteral("labelSoilPrice"));

        horizontalLayout_4->addWidget(labelSoilPrice);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        pushButtonBuyKhak = new QPushButton(groupBox);
        pushButtonBuyKhak->setObjectName(QStringLiteral("pushButtonBuyKhak"));

        horizontalLayout_4->addWidget(pushButtonBuyKhak);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelWaterPrice = new QLabel(groupBox);
        labelWaterPrice->setObjectName(QStringLiteral("labelWaterPrice"));

        horizontalLayout_5->addWidget(labelWaterPrice);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        pushButtonBuyAb = new QPushButton(groupBox);
        pushButtonBuyAb->setObjectName(QStringLiteral("pushButtonBuyAb"));

        horizontalLayout_5->addWidget(pushButtonBuyAb);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        labelPoisonPrice = new QLabel(groupBox);
        labelPoisonPrice->setObjectName(QStringLiteral("labelPoisonPrice"));

        horizontalLayout_6->addWidget(labelPoisonPrice);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        pushButtonBuyPoison = new QPushButton(groupBox);
        pushButtonBuyPoison->setObjectName(QStringLiteral("pushButtonBuyPoison"));

        horizontalLayout_6->addWidget(pushButtonBuyPoison);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(Store2);

        QMetaObject::connectSlotsByName(Store2);
    } // setupUi

    void retranslateUi(QDialog *Store2)
    {
        Store2->setWindowTitle(QApplication::translate("Store2", "Dialog", nullptr));
        groupBox->setTitle(QString());
        labelPrice->setText(QApplication::translate("Store2", "\331\202\333\214\331\205\330\252", nullptr));
        labeStore->setText(QApplication::translate("Store2", "       \331\201\330\261\331\210\330\264\332\257\330\247\331\207          ", nullptr));
        labelNormalPrice->setText(QApplication::translate("Store2", "1000", nullptr));
        pushButtonBuyAadi->setText(QApplication::translate("Store2", "\331\276\333\214\330\247\330\262 \332\257\331\204 \330\271\330\247\330\257\333\214", nullptr));
        labelDecorativePrice->setText(QApplication::translate("Store2", "20000", nullptr));
        pushButtonBuyDecorative->setText(QApplication::translate("Store2", "\331\276\333\214\330\247\330\262 \332\257\331\204 \330\262\333\214\331\206\330\252\333\214", nullptr));
        labelRarePrice->setText(QApplication::translate("Store2", "5000", nullptr));
        pushButtonBuyRare->setText(QApplication::translate("Store2", "\331\276\333\214\330\247\330\262 \332\257\331\204 \331\206\330\247\330\257\330\261", nullptr));
        labelSoilPrice->setText(QApplication::translate("Store2", "450", nullptr));
        pushButtonBuyKhak->setText(QApplication::translate("Store2", "\330\256\330\247\332\251", nullptr));
        labelWaterPrice->setText(QApplication::translate("Store2", "250", nullptr));
        pushButtonBuyAb->setText(QApplication::translate("Store2", "\330\242\330\250", nullptr));
        labelPoisonPrice->setText(QApplication::translate("Store2", "500", nullptr));
        pushButtonBuyPoison->setText(QApplication::translate("Store2", "\331\205\330\247\330\257\331\207 \330\263\331\205\331\276\330\247\330\264\333\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Store2: public Ui_Store2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORE2_H
