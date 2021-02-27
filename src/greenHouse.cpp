#include "greenHouse.hpp"
#include "ui_greenHouse.h"
#include <QString>
#include <QDebug>
#include "store.hpp"
#include <QTime>
#include <QDebug>
#include <random>
#include <QDateTime>
#include <QPixmap>
#include <QMessageBox>
#include "store2.hpp"

second::second(Information * in,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::second)
{
    InfPtr = in;
    ui->setupUi(this);
    this->setWindowTitle("گلخانه");
    SetEnable();
}
second::~second()
{
    delete ui;
}
void second::SetEnable()
{
    if(InfPtr->VaseL[0].IsOpen)
    {
        ui->openButton1->setEnabled(false);
    }
    if(InfPtr->VaseL[1].IsOpen)
    {
        ui->openButton2->setEnabled(false);
    }
    if(InfPtr->VaseL[2].IsOpen)
    {
        ui->openButton3->setEnabled(false);
    }
    if(InfPtr->VaseL[3].IsOpen)
    {
        ui->openButton4->setEnabled(false);
    }
    if(InfPtr->VaseL[4].IsOpen)
    {
        ui->openButton5->setEnabled(false);
    }
    if(!InfPtr->VaseL[0].IsEmpty)
    {
        if(InfPtr->VaseL[0].HasSoil)
            ui->Soil1->setEnabled(false);
        if(InfPtr->VaseL[0].IsWaterd)
            ui->Water1->setEnabled(false);
        if(InfPtr->VaseL[0].IsPoisoned)
            ui->Poison1->setEnabled(false);
    }
    if(!InfPtr->VaseL[1].IsEmpty)
    {
        if(InfPtr->VaseL[1].HasSoil)
            ui->Soil2->setEnabled(false);
        if(InfPtr->VaseL[1].IsWaterd)
            ui->Water2->setEnabled(false);
        if(InfPtr->VaseL[1].IsPoisoned)
            ui->Poison2->setEnabled(false);
    }
    if(!InfPtr->VaseL[2].IsEmpty)
    {
        if(InfPtr->VaseL[2].HasSoil)
            ui->Soil3->setEnabled(false);
        if(InfPtr->VaseL[2].IsWaterd)
            ui->Water3->setEnabled(false);
        if(InfPtr->VaseL[2].IsPoisoned)
            ui->Poison3->setEnabled(false);
    }
    if(!InfPtr->VaseL[3].IsEmpty)
    {
        if(InfPtr->VaseL[3].HasSoil)
            ui->Soil4->setEnabled(false);
        if(InfPtr->VaseL[3].IsWaterd)
            ui->Water4->setEnabled(false);
        if(InfPtr->VaseL[3].IsPoisoned)
            ui->Poison4->setEnabled(false);
    }
    if(!InfPtr->VaseL[4].IsEmpty)
    {
        if(InfPtr->VaseL[4].HasSoil)
            ui->Soil5->setEnabled(false);
        if(InfPtr->VaseL[4].IsWaterd)
            ui->Water5->setEnabled(false);
        if(InfPtr->VaseL[4].IsPoisoned)
            ui->Poison5->setEnabled(false);
    }
}
void second::on_openButton1_clicked()
{
    InfPtr->VaseL[0].IsOpen = true;
    ui->openButton1->setEnabled(false);
    QPixmap pix6(":/new/prefix1/assets/empty0.png");
    ui->labelName1->setPixmap(pix6.scaled(150,80,Qt::KeepAspectRatio));
}

void second::on_openButton2_clicked()
{
    InfPtr->VaseL[1].IsOpen = true;
    ui->labelName2->setText("empty");
    ui->openButton2->setEnabled(false);
    QPixmap pix7(":/new/prefix1/assets/empty0.png");
    ui->labelName2->setPixmap(pix7.scaled(150,80,Qt::KeepAspectRatio));
}

void second::on_openButton3_clicked()
{
    InfPtr->VaseL[2].IsOpen = true;
    ui->labelName3->setText("empty");
    ui->openButton3->setEnabled(false);
    QPixmap pix8(":/new/prefix1/assets/empty0.png");
    ui->labelName3->setPixmap(pix8.scaled(150,80,Qt::KeepAspectRatio));
}

void second::on_openButton4_clicked()
{
    InfPtr->VaseL[3].IsOpen = true;
    ui->labelName4->setText("empty");
    ui->openButton4->setEnabled(false);
    QPixmap pix9(":/new/prefix1/assets/empty0.png");
    ui->labelName4->setPixmap(pix9.scaled(150,80,Qt::KeepAspectRatio));
}

void second::on_openButton5_clicked()
{
    InfPtr->VaseL[4].IsOpen = true;
    ui->labelName5->setText("empty");
    ui->openButton5->setEnabled(false);
    QPixmap pix10(":/new/prefix1/assets/empty0.png");
    ui->labelName5->setPixmap(pix10.scaled(150,80,Qt::KeepAspectRatio));
}

void second::on_selectButton1_clicked()
{
    InfPtr->VaseL[0].IsEmpty = false;
    InfPtr->VaseL[0].IsEmpty = false;
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

        }
    }
    else if(InfPtr->VaseL[1].Kind==2)
    {
        if(InfPtr->VaseL[1].FlowerNum == 0)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower3-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[1].FlowerNum==1)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower4-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250,100,Qt::KeepAspectRatio));

        }
        else if(InfPtr->VaseL[1].FlowerNum==2)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower5-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250,100,Qt::KeepAspectRatio));

        }
    }
    else if(InfPtr->VaseL[1].Kind==3)
    {
        if(InfPtr->VaseL[1].FlowerNum == 0)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower6-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[1].FlowerNum==1)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower7-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250,100,Qt::KeepAspectRatio));

        }
        else if(InfPtr->VaseL[1].FlowerNum==2)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower8-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250,100,Qt::KeepAspectRatio));

        }
    }

}
void second::on_selectButton2_clicked()
{
    InfPtr->VaseL[1].IsEmpty = false;
    Store2 Store2(2, InfPtr);
    Store2.setModal(true);
    Store2.exec();
    if(InfPtr->VaseL[2].Kind==1)
    {
        if(InfPtr->VaseL[2].FlowerNum == 0)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower1-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[2].FlowerNum==1)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower2-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250,100,Qt::KeepAspectRatio));

        }
    }
    else if(InfPtr->VaseL[2].Kind==2)
    {
        if(InfPtr->VaseL[2].FlowerNum == 0)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower3-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[2].FlowerNum==1)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower4-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250,100,Qt::KeepAspectRatio));

        }
        else if(InfPtr->VaseL[2].FlowerNum==2)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower5-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250,100,Qt::KeepAspectRatio));
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
        }
        else if(InfPtr->VaseL[2].FlowerNum==2)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower8-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250,100,Qt::KeepAspectRatio));
        }
    }
}
void second::on_selectButton3_clicked()
{
    InfPtr->VaseL[2].IsEmpty = false;
    Store2 Store2(3, InfPtr);
    Store2.setModal(true);
    Store2.exec();
    if(InfPtr->VaseL[3].Kind==1)
    {
        if(InfPtr->VaseL[3].FlowerNum == 0)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower1-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[3].FlowerNum==1)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower2-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250,100,Qt::KeepAspectRatio));
        }
    }
    else if(InfPtr->VaseL[3].Kind==2)
    {
        if(InfPtr->VaseL[3].FlowerNum == 0)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower3-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[3].FlowerNum==1)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower4-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[3].FlowerNum==2)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower5-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250,100,Qt::KeepAspectRatio));
        }
    }
    else if(InfPtr->VaseL[3].Kind==3)
    {
        if(InfPtr->VaseL[3].FlowerNum == 0)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower6-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[3].FlowerNum==1)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower7-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[3].FlowerNum==2)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower8-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250,100,Qt::KeepAspectRatio));
        }
    }
}

void second::on_selectButton4_clicked()
{
    InfPtr->VaseL[3].IsEmpty = false;
    Store2 Store2(4, InfPtr);
    Store2.setModal(true);
    Store2.exec();
    if(InfPtr->VaseL[4].Kind==1)
    {
        if(InfPtr->VaseL[4].FlowerNum == 0)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower1-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[4].FlowerNum==1)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower2-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250,100,Qt::KeepAspectRatio));
        }
    }
    else if(InfPtr->VaseL[4].Kind==2)
    {
        if(InfPtr->VaseL[4].FlowerNum == 0)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower3-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[4].FlowerNum==1)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower4-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[4].FlowerNum==2)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower5-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250,100,Qt::KeepAspectRatio));
        }
    }
    else if(InfPtr->VaseL[4].Kind==3)
    {
        if(InfPtr->VaseL[4].FlowerNum == 0)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower6-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[4].FlowerNum==1)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower7-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[4].FlowerNum==2)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower8-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250,100,Qt::KeepAspectRatio));
        }
    }
}

void second::on_selectButton5_clicked()
{
    InfPtr->VaseL[4].IsEmpty = false;
    Store2 Store2(5, InfPtr);
    Store2.setModal(true);
    Store2.exec();
    if(InfPtr->VaseL[5].Kind==1)
    {
        if(InfPtr->VaseL[5].FlowerNum == 0)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower1-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[5].FlowerNum==1)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower2-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250,100,Qt::KeepAspectRatio));
        }
    }
    else if(InfPtr->VaseL[5].Kind==2)
    {
        if(InfPtr->VaseL[5].FlowerNum == 0)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower3-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[5].FlowerNum==1)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower4-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[5].FlowerNum==2)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower5-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250,100,Qt::KeepAspectRatio));
        }
    }
    else if(InfPtr->VaseL[5].Kind==3)
    {
        if(InfPtr->VaseL[5].FlowerNum == 0)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower6-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[5].FlowerNum==1)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower7-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250,100,Qt::KeepAspectRatio));
        }
        else if(InfPtr->VaseL[5].FlowerNum==2)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower8-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250,100,Qt::KeepAspectRatio));
        }
    }
}

void second::on_saleButton1_clicked()
{
    InfPtr->SetIsGrown();
    if(InfPtr->VaseL[0].IsOpen)
    {
        if(InfPtr->VaseL[0].IsEmpty)
        {
            QMessageBox::information(this, "GreenHouse", "گلدان خالی است");
        }
        else if(InfPtr->VaseL[0].IsGrown)
        {
            ui->labelName1->setText("empty");
        }
        else
        {
            QMessageBox::information(this, "GreenHouse","گل رشد نکرده است");
        }
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "گلدان قفل است");
    }
}

void second::on_saleButton2_clicked()
{
    InfPtr->SetIsGrown();
    if(InfPtr->VaseL[1].IsOpen)
    {
        if(InfPtr->VaseL[1].IsEmpty)
        {
            QMessageBox::information(this, "GreenHouse", "گلدان خالی است");
        }
        else if(InfPtr->VaseL[1].IsGrown)
        {
            ui->labelName2->setText("empty");
        }
        else
        {
            QMessageBox::information(this, "GreenHouse","گل رشد نکرده است");
        }
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "گلدان قفل است");
    }
}

void second::on_saleButton3_clicked()
{
    InfPtr->SetIsGrown();
    if(InfPtr->VaseL[2].IsOpen)
    {
        if(InfPtr->VaseL[2].IsEmpty)
        {
            QMessageBox::information(this, "GreenHouse", "گلدان خالی است");
        }
        else if(InfPtr->VaseL[2].IsGrown)
        {
            ui->labelName3->setText("empty");
        }
        else
        {
            QMessageBox::information(this, "GreenHouse","گل رشد نکرده است");
        }
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "گلدان قفل است");
    }
}
void second::on_saleButton4_clicked()
{
    InfPtr->SetIsGrown();
    if(InfPtr->VaseL[3].IsOpen)
    {
        if(InfPtr->VaseL[3].IsEmpty)
        {
            QMessageBox::information(this, "GreenHouse", "گلدان خالی است");
        }
        else if(InfPtr->VaseL[3].IsGrown)
        {
            ui->labelName4->setText("empty");
        }
        else
        {
            QMessageBox::information(this, "GreenHouse","گل رشد نکرده است");
        }
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "گلدان قفل است");
    }
}

void second::on_saleButton5_clicked()
{
    InfPtr->SetIsGrown();
    if(InfPtr->VaseL[4].IsOpen)
    {
        if(InfPtr->VaseL[4].IsEmpty)
        {
            QMessageBox::information(this, "GreenHouse", "گلدان خالی است");
        }
        else if(InfPtr->VaseL[4].IsGrown)
        {
            ui->labelName5->setText("empty");
        }
        else
        {
            QMessageBox::information(this, "GreenHouse","گل رشد نکرده است");
        }
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "گلدان قفل است");
    }

}

void second::on_openButton1_2_clicked()
{
    this->close();
}

void second::on_Soil1_clicked()
{
    InfPtr->WareHouse.Soil--;
    InfPtr->VaseL[0].HasSoil = true;
    ui->Soil1->setEnabled(false);
}

void second::on_Soil2_clicked()
{
    InfPtr->WareHouse.Soil--;
    InfPtr->VaseL[1].HasSoil = true;
    ui->Soil2->setEnabled(false);
}

void second::on_Soil3_clicked()
{
    InfPtr->WareHouse.Soil--;
    InfPtr->VaseL[2].HasSoil = true;
    ui->Soil3->setEnabled(false);
}

void second::on_Soil4_clicked()
{
    InfPtr->WareHouse.Soil--;
    InfPtr->VaseL[3].HasSoil = true;
    ui->Soil4->setEnabled(false);
}

void second::on_Soil5_clicked()
{
    InfPtr->WareHouse.Soil--;
    InfPtr->VaseL[4].HasSoil = true;
    ui->Soil5->setEnabled(false);
}

void second::on_Water1_clicked()
{
    InfPtr->WareHouse.Water--;
    InfPtr->VaseL[0].IsWaterd = true;
    ui->Water1->setEnabled(false);
}

void second::on_Water2_clicked()
{
    InfPtr->WareHouse.Water--;
    InfPtr->VaseL[1].IsWaterd = true;
    ui->Water2->setEnabled(false);
}

void second::on_Water3_clicked()
{
    InfPtr->WareHouse.Water--;
    InfPtr->VaseL[2].IsWaterd = true;
    ui->Water3->setEnabled(false);
}

void second::on_Water4_clicked()
{
    InfPtr->WareHouse.Water--;
    InfPtr->VaseL[3].IsWaterd = true;
    ui->Water4->setEnabled(false);
}

void second::on_Water5_clicked()
{
    InfPtr->WareHouse.Water--;
    InfPtr->VaseL[4].IsWaterd = true;
    ui->Water5->setEnabled(false);
}

void second::on_Poison1_clicked()
{
    InfPtr->WareHouse.Poison--;
    InfPtr->VaseL[0].IsPoisoned = true;
    ui->Poison1->setEnabled(false);
}

void second::on_Poison2_clicked()
{
    InfPtr->WareHouse.Poison--;
    InfPtr->VaseL[1].IsPoisoned = true;
    ui->Poison2->setEnabled(false);
}

void second::on_Poison3_clicked()
{
    InfPtr->WareHouse.Poison--;
    InfPtr->VaseL[2].IsPoisoned = true;
    ui->Poison3->setEnabled(false);
}
void second::on_Poison4_clicked()
{
    InfPtr->WareHouse.Poison--;
    InfPtr->VaseL[3].IsPoisoned = true;
    ui->Poison4->setEnabled(false);
}
void second::on_Poison5_clicked()
{
    InfPtr->WareHouse.Poison--;
    InfPtr->VaseL[4].IsPoisoned = true;
    ui->Poison5->setEnabled(false);
}
