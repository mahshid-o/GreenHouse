#include "laboratory.hpp"
#include "ui_laboratory.h"
#include "mainwindow.hpp"
#include <QMessageBox>

fourth::fourth(Information *in, QWidget *parent) : QDialog(parent),
                                                   uiFourth(new Ui::fourth)
{
    InfPtr = in;
    uiFourth->setupUi(this);
    this->setWindowTitle("آزمایشگاه");
}

fourth::~fourth()
{
    delete uiFourth;
}
void fourth::on_pushButtonOrkideT_clicked()
{
    if(InfPtr->WareHouse.SonbolCount > 0)
    {
        if(InfPtr->WareHouse.Water > 0)
        {
            if(InfPtr->WareHouse.Money > 5000)
            {
                InfPtr->WareHouse.OsOrkide++;
                InfPtr->WareHouse.Money -= 5000;
                InfPtr->WareHouse.SonbolCount--;
                InfPtr->WareHouse.Water--;

                QMessageBox msg;
                msg.setText("عصاره جادویی ارکیده ساخته شد و آماده استفاده است");
                msg.show();
                msg.exec();
            }
            else
            {
                QMessageBox::information(this, "laboratory", "موجودی پس انداز کم است");
            }
        }
        else
        {
            QMessageBox::information(this, "laboratory", "آب موجود نیست");
        }
    }
    else
    {
        QMessageBox::information(this, "laboratory", "سنبل موجود نیست");
    }
}

void fourth::on_pushButtonLiliumT_clicked()
{
    if(InfPtr->WareHouse.NargesCount > 0)
    {
        if(InfPtr->WareHouse.MaryamCount > 0)
        {
            if(InfPtr->WareHouse.Water > 0)
            {
                InfPtr->WareHouse.OsLilium++;
                InfPtr->WareHouse.NargesCount--;
                InfPtr->WareHouse.MaryamCount--;
                InfPtr->WareHouse.Water--;

                QMessageBox msg;
                msg.setText("عصاره جادویی لیلیوم ساخته شد و آماده استفاده است");
                msg.show();
                msg.exec();
            }
            else
            {
                QMessageBox::information(this, "laboratory", "آب موجود نیست");
            }
        }
        else
        {
            QMessageBox::information(this, "laboratory", "مریم موجود نیست");
        }
    }
    else
    {
        QMessageBox::information(this, "laboratory", "نرگس موجود نیست");
    }
}

void fourth::on_pushButtonMagnoliaT_clicked()
{
    if(InfPtr->WareHouse.KokabCount > 0)
    {
        if(InfPtr->WareHouse.LalehCount > 0)
        {
            if(InfPtr->WareHouse.Water > 0)
            {
                InfPtr->WareHouse.OsMagnolia++;
                InfPtr->WareHouse.KokabCount--;
                InfPtr->WareHouse.LalehCount--;
                InfPtr->WareHouse.Water--;

                QMessageBox msg;
                msg.setText("عصاره جادویی مگنولیا ساخته شد و آماده استفاده است");
                msg.show();
                msg.exec();
            }
            else
            {
                QMessageBox::information(this, "laboratory", "آب موجود نیست");
            }
        }
        else
        {
            QMessageBox::information(this, "laboratory", "لاله موجود نیست");
        }
     }
    else
    {
        QMessageBox::information(this, "laboratory", "کوکب موجود نیست");
    }
}

void fourth::on_pushButtonOrkideT_2_clicked()
{
    this->close();
}
