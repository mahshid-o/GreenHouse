#include "greenHouse.hpp".hpp"
#include "ui_greenHouse.h"
#include <QString>
#include <QDebug>
#include "store.hpp"
#include <QTime>
#include <QDebug>
#include <random>
#include <QDateTime>
#include <QPixmap>
#include "store2.hpp"

second::second(Information * in,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::second)
{
    InfPtr = in;
    ui->setupUi(this);
    this->setWindowTitle("گلخانه");
}
second::~second()
{
    delete ui;
}

void second::on_openButton1_clicked()
{
    //Qstring n;
    //ui->labelName1->setText("empty");
    ui->openButton1->setEnabled(false);
    QPixmap pix6(":/new/prefix1/assets/empty0.png");
    ui->labelName1->setPixmap(pix6.scaled(150,80,Qt::KeepAspectRatio));

}

void second::on_openButton2_clicked()
{
    ui->labelName2->setText("empty");
    ui->openButton2->setEnabled(false);
    QPixmap pix7(":/new/prefix1/assets/empty0.png");
    ui->labelName2->setPixmap(pix7.scaled(150,80,Qt::KeepAspectRatio));
}

void second::on_openButton3_clicked()
{
    ui->labelName3->setText("empty");
    ui->openButton3->setEnabled(false);
    QPixmap pix8(":/new/prefix1/assets/empty0.png");
    ui->labelName3->setPixmap(pix8.scaled(150,80,Qt::KeepAspectRatio));
}

void second::on_openButton4_clicked()
{
    ui->labelName4->setText("empty");
    ui->openButton4->setEnabled(false);
    QPixmap pix9(":/new/prefix1/assets/empty0.png");
    ui->labelName4->setPixmap(pix9.scaled(150,80,Qt::KeepAspectRatio));
}

void second::on_openButton5_clicked()
{
    ui->labelName5->setText("empty");
    ui->openButton5->setEnabled(false);
    QPixmap pix10(":/new/prefix1/assets/empty0.png");
    ui->labelName5->setPixmap(pix10.scaled(150,80,Qt::KeepAspectRatio));
}

void second::on_selectButton1_clicked()
{
    Store2 Store2(1, InfPtr);
    Store2.setModal(true);
    Store2.exec();
    if(InfPtr->VaseL[1].Kind==1)
    {
        if(InfPtr->VaseL[1].FlowerNum == 0)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower1-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww1");
        }
        else if(InfPtr->VaseL[1].FlowerNum==1)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower2-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
    }
    else if(InfPtr->VaseL[1].Kind==2)
    {
        if(InfPtr->VaseL[1].FlowerNum == 0)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower3-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww1");
        }
        else if(InfPtr->VaseL[1].FlowerNum==1)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower4-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
        else if(InfPtr->VaseL[1].FlowerNum==2)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower5-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
    }
    else if(InfPtr->VaseL[1].Kind==3)
    {
        if(InfPtr->VaseL[1].FlowerNum == 0)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower6-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww1");
        }
        else if(InfPtr->VaseL[1].FlowerNum==1)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower7-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
        else if(InfPtr->VaseL[1].FlowerNum==2)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower8-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
    }

}

void second::on_selectButton2_clicked()
{
    Store2 Store2(2, InfPtr);
    Store2.setModal(true);
    Store2.exec();
    if(InfPtr->VaseL[2].Kind==1)
    {
        if(InfPtr->VaseL[2].FlowerNum == 0)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower1-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww1");
        }
        else if(InfPtr->VaseL[2].FlowerNum==1)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower2-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
    }
    else if(InfPtr->VaseL[2].Kind==2)
    {
        if(InfPtr->VaseL[2].FlowerNum == 0)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower3-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww1");
        }
        else if(InfPtr->VaseL[2].FlowerNum==1)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower4-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
        else if(InfPtr->VaseL[2].FlowerNum==2)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower5-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
    }
    else if(InfPtr->VaseL[2].Kind==3)
    {
        if(InfPtr->VaseL[2].FlowerNum == 0)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower6-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww1");
        }
        else if(InfPtr->VaseL[2].FlowerNum==1)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower7-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
        else if(InfPtr->VaseL[2].FlowerNum==2)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower8-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
    }
}


void second::on_selectButton3_clicked()
{
    Store2 Store2(3, InfPtr);
    Store2.setModal(true);
    Store2.exec();
    if(InfPtr->VaseL[3].Kind==1)
    {
        if(InfPtr->VaseL[3].FlowerNum == 0)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower1-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww1");
        }
        else if(InfPtr->VaseL[3].FlowerNum==1)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower2-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
    }
    else if(InfPtr->VaseL[3].Kind==2)
    {
        if(InfPtr->VaseL[3].FlowerNum == 0)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower3-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww1");
        }
        else if(InfPtr->VaseL[3].FlowerNum==1)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower4-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
        else if(InfPtr->VaseL[3].FlowerNum==2)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower5-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
    }
    else if(InfPtr->VaseL[3].Kind==3)
    {
        if(InfPtr->VaseL[3].FlowerNum == 0)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower6-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww1");
        }
        else if(InfPtr->VaseL[3].FlowerNum==1)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower7-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
        else if(InfPtr->VaseL[3].FlowerNum==2)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower8-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
    }
}

void second::on_selectButton4_clicked()
{
    Store2 Store2(4, InfPtr);
    Store2.setModal(true);
    Store2.exec();
    if(InfPtr->VaseL[4].Kind==1)
    {
        if(InfPtr->VaseL[4].FlowerNum == 0)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower1-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww1");
        }
        else if(InfPtr->VaseL[4].FlowerNum==1)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower2-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
    }
    else if(InfPtr->VaseL[4].Kind==2)
    {
        if(InfPtr->VaseL[4].FlowerNum == 0)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower3-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww1");
        }
        else if(InfPtr->VaseL[4].FlowerNum==1)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower4-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
        else if(InfPtr->VaseL[4].FlowerNum==2)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower5-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
    }
    else if(InfPtr->VaseL[4].Kind==3)
    {
        if(InfPtr->VaseL[4].FlowerNum == 0)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower6-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww1");
        }
        else if(InfPtr->VaseL[4].FlowerNum==1)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower7-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
        else if(InfPtr->VaseL[4].FlowerNum==2)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower8-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
    }
}

void second::on_selectButton5_clicked()
{
    Store2 Store2(5, InfPtr);
    Store2.setModal(true);
    Store2.exec();
    if(InfPtr->VaseL[5].Kind==1)
    {
        if(InfPtr->VaseL[5].FlowerNum == 0)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower1-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww1");
        }
        else if(InfPtr->VaseL[5].FlowerNum==1)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower2-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
    }
    else if(InfPtr->VaseL[5].Kind==2)
    {
        if(InfPtr->VaseL[5].FlowerNum == 0)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower3-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww1");
        }
        else if(InfPtr->VaseL[5].FlowerNum==1)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower4-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
        else if(InfPtr->VaseL[5].FlowerNum==2)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower5-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
    }
    else if(InfPtr->VaseL[5].Kind==3)
    {
        if(InfPtr->VaseL[5].FlowerNum == 0)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower6-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww1");
        }
        else if(InfPtr->VaseL[5].FlowerNum==1)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower7-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
        else if(InfPtr->VaseL[5].FlowerNum==2)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower8-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250,100,Qt::KeepAspectRatio));
           //ui->labelName1->setText("mewww2");
        }
    }
}

void second::on_saleButton1_clicked()
{
    ui->labelName1->setText("empty");
}

void second::on_saleButton2_clicked()
{
    ui->labelName2->setText("empty");
}

void second::on_saleButton3_clicked()
{
     ui->labelName3->setText("empty");
}
void second::on_saleButton4_clicked()
{
    ui->labelName4->setText("empty");
}

void second::on_saleButton5_clicked()
{
    ui->labelName5->setText("empty");
}

void second::on_openButton1_2_clicked()
{
    this->close();
}
