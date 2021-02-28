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
#include <iostream>
#include "store2.hpp"

using namespace std;

second::second(Information *in, QWidget *parent) : QDialog(parent),
                                                   ui(new Ui::second)
{
    InfPtr = in;
    ui->setupUi(this);
    this->setWindowTitle("گلخانه");
    if (InfPtr->IsLoadPressed)
    {
        SetLabels();
    }
    else
    {
        SetEnable();
        SetLabels();
    }
}
second::~second()
{
    delete ui;
}
void second::SetEnable()
{
    if (InfPtr->VaseL[0].IsOpen)
    {
        ui->openButton1->setEnabled(false);
    }
    if (InfPtr->VaseL[1].IsOpen)
    {
        ui->openButton2->setEnabled(false);
    }
    if (InfPtr->VaseL[2].IsOpen)
    {
        ui->openButton3->setEnabled(false);
    }
    if (InfPtr->VaseL[3].IsOpen)
    {
        ui->openButton4->setEnabled(false);
    }
    if (InfPtr->VaseL[4].IsOpen)
    {
        ui->openButton5->setEnabled(false);
    }
    if (!InfPtr->VaseL[0].IsEmpty)
    {
        if (InfPtr->VaseL[0].HasSoil)
            ui->Soil1->setEnabled(false);
        if (InfPtr->VaseL[0].IsWaterd)
            ui->Water1->setEnabled(false);
        if (InfPtr->VaseL[0].IsPoisoned)
            ui->Poison1->setEnabled(false);
    }
    if (!InfPtr->VaseL[1].IsEmpty)
    {
        if (InfPtr->VaseL[1].HasSoil)
            ui->Soil2->setEnabled(false);
        if (InfPtr->VaseL[1].IsWaterd)
            ui->Water2->setEnabled(false);
        if (InfPtr->VaseL[1].IsPoisoned)
            ui->Poison2->setEnabled(false);
    }
    if (!InfPtr->VaseL[2].IsEmpty)
    {
        if (InfPtr->VaseL[2].HasSoil)
            ui->Soil3->setEnabled(false);
        if (InfPtr->VaseL[2].IsWaterd)
            ui->Water3->setEnabled(false);
        if (InfPtr->VaseL[2].IsPoisoned)
            ui->Poison3->setEnabled(false);
    }
    if (!InfPtr->VaseL[3].IsEmpty)
    {
        if (InfPtr->VaseL[3].HasSoil)
            ui->Soil4->setEnabled(false);
        if (InfPtr->VaseL[3].IsWaterd)
            ui->Water4->setEnabled(false);
        if (InfPtr->VaseL[3].IsPoisoned)
            ui->Poison4->setEnabled(false);
    }
    if (!InfPtr->VaseL[4].IsEmpty)
    {
        if (InfPtr->VaseL[4].HasSoil)
            ui->Soil5->setEnabled(false);
        if (InfPtr->VaseL[4].IsWaterd)
            ui->Water5->setEnabled(false);
        if (InfPtr->VaseL[4].IsPoisoned)
            ui->Poison5->setEnabled(false);
    }
}
void second::SetLabels()
{
    if (InfPtr->VaseL[0].IsOpen == true)
    {
        ui->openButton1->setEnabled(false);
    }
    if (InfPtr->VaseL[0].IsEmpty == false)
    {
        switch (InfPtr->VaseL[0].Kind)
        {
        case 1:
            if (InfPtr->VaseL[0].FlowerNum == 0)
            {
                QPixmap pix26(":/new/prefix1/assets/3x/flower1-1.png");
                ui->labelName1->setPixmap(pix26.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[0].FlowerNum == 1)
            {
                QPixmap pix26(":/new/prefix1/assets/3x/flower2-1.png");
                ui->labelName1->setPixmap(pix26.scaled(250, 100, Qt::KeepAspectRatio));
            }
            break;
        case 2:
            if (InfPtr->VaseL[0].FlowerNum == 0)
            {
                QPixmap pix26(":/new/prefix1/assets/3x/flower3-1.png");
                ui->labelName1->setPixmap(pix26.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[0].FlowerNum == 1)
            {
                QPixmap pix26(":/new/prefix1/assets/3x/flower4-1.png");
                ui->labelName1->setPixmap(pix26.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[0].FlowerNum == 2)
            {
                QPixmap pix26(":/new/prefix1/assets/3x/flower5-1.png");
                ui->labelName1->setPixmap(pix26.scaled(250, 100, Qt::KeepAspectRatio));
            }
            break;
        case 3:
            if (InfPtr->VaseL[0].FlowerNum == 0)
            {
                QPixmap pix26(":/new/prefix1/assets/3x/flower6-1.png");
                ui->labelName1->setPixmap(pix26.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[0].FlowerNum == 1)
            {
                QPixmap pix26(":/new/prefix1/assets/3x/flower7-1.png");
                ui->labelName1->setPixmap(pix26.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[0].FlowerNum == 2)
            {
                QPixmap pix26(":/new/prefix1/assets/3x/flower8-1.png");
                ui->labelName1->setPixmap(pix26.scaled(250, 100, Qt::KeepAspectRatio));
            }
            break;
        }
    }

    if (InfPtr->VaseL[1].IsOpen == true)
    {
        ui->openButton1->setEnabled(false);
    }
    if (InfPtr->VaseL[1].IsEmpty == false)
    {
        switch (InfPtr->VaseL[1].Kind)
        {
        case 1:
            if (InfPtr->VaseL[1].FlowerNum == 0)
            {
                QPixmap pix25(":/new/prefix1/assets/3x/flower1-1.png");
                ui->labelName2->setPixmap(pix25.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[1].FlowerNum == 1)
            {
                QPixmap pix25(":/new/prefix1/assets/3x/flower2-1.png");
                ui->labelName2->setPixmap(pix25.scaled(250, 100, Qt::KeepAspectRatio));
            }
            break;
        case 2:
            if (InfPtr->VaseL[1].FlowerNum == 0)
            {
                QPixmap pix25(":/new/prefix1/assets/3x/flower3-1.png");
                ui->labelName2->setPixmap(pix25.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[1].FlowerNum == 1)
            {
                QPixmap pix25(":/new/prefix1/assets/3x/flower4-1.png");
                ui->labelName2->setPixmap(pix25.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[1].FlowerNum == 2)
            {
                QPixmap pix25(":/new/prefix1/assets/3x/flower5-1.png");
                ui->labelName2->setPixmap(pix25.scaled(250, 100, Qt::KeepAspectRatio));
            }
            break;
        case 3:
            if (InfPtr->VaseL[1].FlowerNum == 0)
            {
                QPixmap pix25(":/new/prefix1/assets/3x/flower6-1.png");
                ui->labelName2->setPixmap(pix25.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[1].FlowerNum == 1)
            {
                QPixmap pix25(":/new/prefix1/assets/3x/flower7-1.png");
                ui->labelName2->setPixmap(pix25.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[1].FlowerNum == 2)
            {
                QPixmap pix25(":/new/prefix1/assets/3x/flower8-1.png");
                ui->labelName2->setPixmap(pix25.scaled(250, 100, Qt::KeepAspectRatio));
            }
            break;
        }
    }

    if (InfPtr->VaseL[2].IsOpen == true)
    {
        ui->openButton1->setEnabled(false);
    }
    if (InfPtr->VaseL[2].IsEmpty == false)
    {
        switch (InfPtr->VaseL[2].Kind)
        {
        case 1:
            if (InfPtr->VaseL[2].FlowerNum == 0)
            {
                QPixmap pix24(":/new/prefix1/assets/3x/flower1-1.png");
                ui->labelName3->setPixmap(pix24.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[2].FlowerNum == 1)
            {
                QPixmap pix24(":/new/prefix1/assets/3x/flower2-1.png");
                ui->labelName3->setPixmap(pix24.scaled(250, 100, Qt::KeepAspectRatio));
            }
            break;
        case 2:
            if (InfPtr->VaseL[2].FlowerNum == 0)
            {
                QPixmap pix24(":/new/prefix1/assets/3x/flower3-1.png");
                ui->labelName3->setPixmap(pix24.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[2].FlowerNum == 1)
            {
                QPixmap pix24(":/new/prefix1/assets/3x/flower4-1.png");
                ui->labelName3->setPixmap(pix24.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[2].FlowerNum == 2)
            {
                QPixmap pix24(":/new/prefix1/assets/3x/flower5-1.png");
                ui->labelName3->setPixmap(pix24.scaled(250, 100, Qt::KeepAspectRatio));
            }
            break;
        case 3:
            if (InfPtr->VaseL[2].FlowerNum == 0)
            {
                QPixmap pix24(":/new/prefix1/assets/3x/flower6-1.png");
                ui->labelName3->setPixmap(pix24.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[2].FlowerNum == 1)
            {
                QPixmap pix24(":/new/prefix1/assets/3x/flower7-1.png");
                ui->labelName3->setPixmap(pix24.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[2].FlowerNum == 2)
            {
                QPixmap pix24(":/new/prefix1/assets/3x/flower8-1.png");
                ui->labelName3->setPixmap(pix24.scaled(250, 100, Qt::KeepAspectRatio));
            }
            break;
        }
    }

    if (InfPtr->VaseL[3].IsOpen == true)
    {
        ui->openButton1->setEnabled(false);
    }
    if (InfPtr->VaseL[3].IsEmpty == false)
    {
        switch (InfPtr->VaseL[3].Kind)
        {
        case 1:
            if (InfPtr->VaseL[3].FlowerNum == 0)
            {
                QPixmap pix22(":/new/prefix1/assets/3x/flower1-1.png");
                ui->labelName4->setPixmap(pix22.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[3].FlowerNum == 1)
            {
                QPixmap pix22(":/new/prefix1/assets/3x/flower2-1.png");
                ui->labelName4->setPixmap(pix22.scaled(250, 100, Qt::KeepAspectRatio));
            }
            break;
        case 2:
            if (InfPtr->VaseL[3].FlowerNum == 0)
            {
                QPixmap pix22(":/new/prefix1/assets/3x/flower3-1.png");
                ui->labelName4->setPixmap(pix22.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[3].FlowerNum == 1)
            {
                QPixmap pix22(":/new/prefix1/assets/3x/flower4-1.png");
                ui->labelName4->setPixmap(pix22.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[3].FlowerNum == 2)
            {
                QPixmap pix22(":/new/prefix1/assets/3x/flower5-1.png");
                ui->labelName4->setPixmap(pix22.scaled(250, 100, Qt::KeepAspectRatio));
            }
            break;
        case 3:
            if (InfPtr->VaseL[3].FlowerNum == 0)
            {
                QPixmap pix22(":/new/prefix1/assets/3x/flower6-1.png");
                ui->labelName4->setPixmap(pix22.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[3].FlowerNum == 1)
            {
                QPixmap pix22(":/new/prefix1/assets/3x/flower7-1.png");
                ui->labelName4->setPixmap(pix22.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[3].FlowerNum == 2)
            {
                QPixmap pix22(":/new/prefix1/assets/3x/flower8-1.png");
                ui->labelName4->setPixmap(pix22.scaled(250, 100, Qt::KeepAspectRatio));
            }
            break;
        }
    }

    if (InfPtr->VaseL[4].IsOpen == true)
    {
        ui->openButton1->setEnabled(false);
    }
    if (InfPtr->VaseL[4].IsEmpty == false)
    {
        switch (InfPtr->VaseL[4].Kind)
        {
        case 1:
            if (InfPtr->VaseL[4].FlowerNum == 0)
            {
                QPixmap pix20(":/new/prefix1/assets/3x/flower1-1.png");
                ui->labelName5->setPixmap(pix20.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[4].FlowerNum == 1)
            {
                QPixmap pix20(":/new/prefix1/assets/3x/flower2-1.png");
                ui->labelName5->setPixmap(pix20.scaled(250, 100, Qt::KeepAspectRatio));
            }
            break;
        case 2:
            if (InfPtr->VaseL[4].FlowerNum == 0)
            {
                QPixmap pix20(":/new/prefix1/assets/3x/flower3-1.png");
                ui->labelName5->setPixmap(pix20.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[4].FlowerNum == 1)
            {
                QPixmap pix20(":/new/prefix1/assets/3x/flower4-1.png");
                ui->labelName5->setPixmap(pix20.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[4].FlowerNum == 2)
            {
                QPixmap pix20(":/new/prefix1/assets/3x/flower5-1.png");
                ui->labelName5->setPixmap(pix20.scaled(250, 100, Qt::KeepAspectRatio));
            }
            break;
        case 3:
            if (InfPtr->VaseL[4].FlowerNum == 0)
            {
                QPixmap pix20(":/new/prefix1/assets/3x/flower6-1.png");
                ui->labelName5->setPixmap(pix20.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[4].FlowerNum == 1)
            {
                QPixmap pix20(":/new/prefix1/assets/3x/flower7-1.png");
                ui->labelName5->setPixmap(pix20.scaled(250, 100, Qt::KeepAspectRatio));
            }
            else if (InfPtr->VaseL[4].FlowerNum == 2)
            {
                QPixmap pix20(":/new/prefix1/assets/3x/flower8-1.png");
                ui->labelName5->setPixmap(pix20.scaled(250, 100, Qt::KeepAspectRatio));
            }
            break;
        }
    }
}
void second::on_openButton1_clicked()
{
    InfPtr->VaseL[0].IsOpen = true;
    ui->openButton1->setEnabled(false);
    QPixmap pix6(":/new/prefix1/assets/empty0.png");
    ui->labelName1->setPixmap(pix6.scaled(150, 80, Qt::KeepAspectRatio));
}

void second::on_openButton2_clicked()
{
    InfPtr->VaseL[1].IsOpen = true;
    ui->labelName2->setText("خالی");
    ui->openButton2->setEnabled(false);
    QPixmap pix7(":/new/prefix1/assets/empty0.png");
    ui->labelName2->setPixmap(pix7.scaled(150, 80, Qt::KeepAspectRatio));
}

void second::on_openButton3_clicked()
{
    InfPtr->VaseL[2].IsOpen = true;
    ui->labelName3->setText("خالی");
    ui->openButton3->setEnabled(false);
    QPixmap pix8(":/new/prefix1/assets/empty0.png");
    ui->labelName3->setPixmap(pix8.scaled(150, 80, Qt::KeepAspectRatio));
}

void second::on_openButton4_clicked()
{
    InfPtr->VaseL[3].IsOpen = true;
    ui->labelName4->setText("خالی");
    ui->openButton4->setEnabled(false);
    QPixmap pix9(":/new/prefix1/assets/empty0.png");
    ui->labelName4->setPixmap(pix9.scaled(150, 80, Qt::KeepAspectRatio));
}

void second::on_openButton5_clicked()
{
    InfPtr->VaseL[4].IsOpen = true;
    ui->labelName5->setText("خالی");
    ui->openButton5->setEnabled(false);
    QPixmap pix10(":/new/prefix1/assets/empty0.png");
    ui->labelName5->setPixmap(pix10.scaled(150, 80, Qt::KeepAspectRatio));
}

void second::on_selectButton1_clicked()
{
    InfPtr->WareHouse.PlantedFlowers++;
    InfPtr->VaseL[0].IsEmpty = false;
    Store2 Store2(0, InfPtr);
    Store2.setModal(true);
    Store2.exec();
    if (InfPtr->VaseL[0].Kind == 1)
    {
        if (InfPtr->VaseL[0].FlowerNum == 0)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower1-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[0].FlowerNum == 1)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower2-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250, 100, Qt::KeepAspectRatio));
        }
    }
    else if (InfPtr->VaseL[0].Kind == 2)
    {
        if (InfPtr->VaseL[0].FlowerNum == 0)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower3-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[0].FlowerNum == 1)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower4-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[0].FlowerNum == 2)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower5-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250, 100, Qt::KeepAspectRatio));
        }
    }
    else if (InfPtr->VaseL[0].Kind == 3)
    {
        if (InfPtr->VaseL[0].FlowerNum == 0)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower6-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[0].FlowerNum == 1)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower7-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[0].FlowerNum == 2)
        {
            QPixmap pix11(":/new/prefix1/assets/3x/flower8-1.png");
            ui->labelName1->setPixmap(pix11.scaled(250, 100, Qt::KeepAspectRatio));
        }
    }
}
void second::on_selectButton2_clicked()
{
    InfPtr->WareHouse.PlantedFlowers++;
    InfPtr->VaseL[1].IsEmpty = false;
    Store2 Store2(1, InfPtr);
    Store2.setModal(true);
    Store2.exec();
    if (InfPtr->VaseL[1].Kind == 1)
    {
        if (InfPtr->VaseL[1].FlowerNum == 0)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower1-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[1].FlowerNum == 1)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower2-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250, 100, Qt::KeepAspectRatio));
        }
    }
    else if (InfPtr->VaseL[1].Kind == 2)
    {
        if (InfPtr->VaseL[1].FlowerNum == 0)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower3-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[1].FlowerNum == 1)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower4-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[1].FlowerNum == 2)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower5-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250, 100, Qt::KeepAspectRatio));
        }
    }
    else if (InfPtr->VaseL[1].Kind == 3)
    {
        if (InfPtr->VaseL[1].FlowerNum == 0)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower6-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250, 100, Qt::KeepAspectRatio));
            //ui->labelName1->setText("mewww1");
        }
        else if (InfPtr->VaseL[1].FlowerNum == 1)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower7-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[1].FlowerNum == 2)
        {
            QPixmap pix12(":/new/prefix1/assets/3x/flower8-1.png");
            ui->labelName2->setPixmap(pix12.scaled(250, 100, Qt::KeepAspectRatio));
        }
    }
}
void second::on_selectButton3_clicked()
{
    InfPtr->WareHouse.PlantedFlowers++;
    InfPtr->VaseL[2].IsEmpty = false;
    Store2 Store2(2, InfPtr);
    Store2.setModal(true);
    Store2.exec();
    if (InfPtr->VaseL[2].Kind == 1)
    {
        if (InfPtr->VaseL[2].FlowerNum == 0)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower1-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[2].FlowerNum == 1)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower2-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250, 100, Qt::KeepAspectRatio));
        }
    }
    else if (InfPtr->VaseL[2].Kind == 2)
    {
        if (InfPtr->VaseL[2].FlowerNum == 0)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower3-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[2].FlowerNum == 1)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower4-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[2].FlowerNum == 2)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower5-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250, 100, Qt::KeepAspectRatio));
        }
    }
    else if (InfPtr->VaseL[2].Kind == 3)
    {
        if (InfPtr->VaseL[2].FlowerNum == 0)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower6-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[2].FlowerNum == 1)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower7-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[2].FlowerNum == 2)
        {
            QPixmap pix13(":/new/prefix1/assets/3x/flower8-1.png");
            ui->labelName3->setPixmap(pix13.scaled(250, 100, Qt::KeepAspectRatio));
        }
    }
}

void second::on_selectButton4_clicked()
{
    InfPtr->WareHouse.PlantedFlowers++;
    InfPtr->VaseL[3].IsEmpty = false;
    Store2 Store2(3, InfPtr);
    Store2.setModal(true);
    Store2.exec();
    if (InfPtr->VaseL[3].Kind == 1)
    {
        if (InfPtr->VaseL[3].FlowerNum == 0)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower1-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[3].FlowerNum == 1)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower2-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250, 100, Qt::KeepAspectRatio));
        }
    }
    else if (InfPtr->VaseL[3].Kind == 2)
    {
        if (InfPtr->VaseL[3].FlowerNum == 0)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower3-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[3].FlowerNum == 1)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower4-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[3].FlowerNum == 2)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower5-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250, 100, Qt::KeepAspectRatio));
        }
    }
    else if (InfPtr->VaseL[3].Kind == 3)
    {
        if (InfPtr->VaseL[3].FlowerNum == 0)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower6-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[3].FlowerNum == 1)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower7-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[3].FlowerNum == 2)
        {
            QPixmap pix14(":/new/prefix1/assets/3x/flower8-1.png");
            ui->labelName4->setPixmap(pix14.scaled(250, 100, Qt::KeepAspectRatio));
        }
    }
}

void second::on_selectButton5_clicked()
{
    InfPtr->WareHouse.PlantedFlowers++;
    InfPtr->VaseL[4].IsEmpty = false;
    Store2 Store2(4, InfPtr);
    Store2.setModal(true);
    Store2.exec();
    if (InfPtr->VaseL[4].Kind == 1)
    {
        if (InfPtr->VaseL[4].FlowerNum == 0)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower1-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[4].FlowerNum == 1)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower2-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250, 100, Qt::KeepAspectRatio));
        }
    }
    else if (InfPtr->VaseL[4].Kind == 2)
    {
        if (InfPtr->VaseL[4].FlowerNum == 0)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower3-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[4].FlowerNum == 1)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower4-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[4].FlowerNum == 2)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower5-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250, 100, Qt::KeepAspectRatio));
        }
    }
    else if (InfPtr->VaseL[4].Kind == 3)
    {
        if (InfPtr->VaseL[4].FlowerNum == 0)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower6-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[4].FlowerNum == 1)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower7-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250, 100, Qt::KeepAspectRatio));
        }
        else if (InfPtr->VaseL[4].FlowerNum == 2)
        {
            QPixmap pix15(":/new/prefix1/assets/3x/flower8-1.png");
            ui->labelName5->setPixmap(pix15.scaled(250, 100, Qt::KeepAspectRatio));
        }
    }
}

void second::on_saleButton1_clicked()
{
    InfPtr->SetIsGrown();
    if (InfPtr->VaseL[0].IsOpen)
    {
        if (InfPtr->VaseL[0].IsEmpty)
        {
            QMessageBox::information(this, "GreenHouse", "گلدان خالی است");
        }
        else if (InfPtr->VaseL[0].IsGrown)
        {
            if (InfPtr->VaseL[0].IsDamaged == true)
            {
                QMessageBox::information(this, "GreenHouse", "متاسفانه گل تخریب شد");
                InfPtr->SetDefault(0);
            }
            else
            {
                ui->labelName1->setText("خالی");
                QMessageBox::information(this, "GreenHouse", "گل به انبار اضافه شد");
                InfPtr->SetFlowerNumbers(InfPtr->VaseL[0].FlowerNum, InfPtr->VaseL[0].Kind);
                switch (InfPtr->VaseL[0].Kind)
                {
                case 1:
                    InfPtr->WareHouse.NormalFlowerCount++;
                    break;
                case 2:
                    InfPtr->WareHouse.RareFlowerCount++;
                    break;
                case 3:
                    InfPtr->WareHouse.DecorativeFlowerCount++;
                    break;
                }
                InfPtr->SetDefault(0);
            }
        }
        else
        {
            QMessageBox::information(this, "GreenHouse", "گل رشد نکرده است");
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
    if (InfPtr->VaseL[1].IsOpen)
    {
        if (InfPtr->VaseL[1].IsEmpty)
        {
            QMessageBox::information(this, "GreenHouse", "گلدان خالی است");
        }
        else if (InfPtr->VaseL[1].IsGrown)
        {
            if (InfPtr->VaseL[1].IsDamaged == true)
            {
                QMessageBox::information(this, "GreenHouse", "متاسفانه گل تخریب شد");
                InfPtr->SetDefault(1);
            }
            else
            {
                ui->labelName2->setText("خالی");
                QMessageBox::information(this, "GreenHouse", "گل به انبار اضافه شد");
                InfPtr->SetFlowerNumbers(InfPtr->VaseL[1].FlowerNum, InfPtr->VaseL[1].Kind);
                switch (InfPtr->VaseL[1].Kind)
                {
                case 1:
                    InfPtr->WareHouse.NormalFlowerCount++;
                    break;
                case 2:
                    InfPtr->WareHouse.RareFlowerCount++;
                    break;
                case 3:
                    InfPtr->WareHouse.DecorativeFlowerCount++;
                    break;
                }
                InfPtr->SetDefault(1);
            }
        }
        else
        {
            QMessageBox::information(this, "GreenHouse", "گل رشد نکرده است");
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
    if (InfPtr->VaseL[2].IsOpen)
    {
        if (InfPtr->VaseL[2].IsEmpty)
        {
            QMessageBox::information(this, "GreenHouse", "گلدان خالی است");
        }
        else if (InfPtr->VaseL[2].IsGrown)
        {
            if (InfPtr->VaseL[2].IsDamaged == true)
            {
                QMessageBox::information(this, "GreenHouse", "متاسفانه گل تخریب شد");
                InfPtr->SetDefault(2);
            }
            else
            {
                ui->labelName3->setText("خالی");
                QMessageBox::information(this, "GreenHouse", "گل به انبار اضافه شد");
                InfPtr->SetFlowerNumbers(InfPtr->VaseL[2].FlowerNum, InfPtr->VaseL[2].Kind);
                switch (InfPtr->VaseL[2].Kind)
                {
                case 1:
                    InfPtr->WareHouse.NormalFlowerCount++;
                    break;
                case 2:
                    InfPtr->WareHouse.RareFlowerCount++;
                    break;
                case 3:
                    InfPtr->WareHouse.DecorativeFlowerCount++;
                    break;
                }
                InfPtr->SetDefault(1);
            }
        }
        else
        {
            QMessageBox::information(this, "GreenHouse", "گل رشد نکرده است");
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
    if (InfPtr->VaseL[3].IsOpen)
    {
        if (InfPtr->VaseL[3].IsEmpty)
        {
            QMessageBox::information(this, "GreenHouse", "گلدان خالی است");
        }
        else if (InfPtr->VaseL[3].IsGrown)
        {
            if (InfPtr->VaseL[3].IsDamaged == true)
            {
                QMessageBox::information(this, "GreenHouse", "متاسفانه گل تخریب شد");
                InfPtr->SetDefault(3);
            }
            else
            {
                ui->labelName4->setText("خالی");
                QMessageBox::information(this, "GreenHouse", "گل به انبار اضافه شد");
                InfPtr->SetFlowerNumbers(InfPtr->VaseL[3].FlowerNum, InfPtr->VaseL[3].Kind);
                switch (InfPtr->VaseL[3].Kind)
                {
                case 1:
                    InfPtr->WareHouse.NormalFlowerCount++;
                    break;
                case 2:
                    InfPtr->WareHouse.RareFlowerCount++;
                    break;
                case 3:
                    InfPtr->WareHouse.DecorativeFlowerCount++;
                    break;
                }
                InfPtr->SetDefault(3);
            }
        }
        else
        {
            QMessageBox::information(this, "GreenHouse", "گل رشد نکرده است");
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
    if (InfPtr->VaseL[4].IsOpen)
    {
        if (InfPtr->VaseL[4].IsEmpty)
        {
            QMessageBox::information(this, "GreenHouse", "گلدان خالی است");
        }
        else if (InfPtr->VaseL[4].IsGrown)
        {
            if (InfPtr->VaseL[4].IsDamaged == true)
            {
                QMessageBox::information(this, "GreenHouse", "متاسفانه گل تخریب شد");
                InfPtr->SetDefault(4);
            }
            else
            {
                ui->labelName5->setText("خالی");
                QMessageBox::information(this, "GreenHouse", "گل به انبار اضافه شد");
                InfPtr->SetFlowerNumbers(InfPtr->VaseL[4].FlowerNum, InfPtr->VaseL[4].Kind);
                InfPtr->SetDefault(4);
            }
        }
        else
        {
            QMessageBox::information(this, "GreenHouse", "گل رشد نکرده است");
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

void second::on_OsMagnolia1_clicked()
{
    if ((InfPtr->VaseL[0].FlowerNum == 0) & (InfPtr->VaseL[0].Kind == 3))
    {
        InfPtr->VaseL[0].Osare = true;
        QMessageBox::information(this, "GreenHouse", " عصاره مگنولیا به خاک اضافه شد");
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "این گل به عصاره مگنولیا نیاز ندارد");
    }
}

void second::on_OsMagnolia2_clicked()
{
    if ((InfPtr->VaseL[1].FlowerNum == 0) & (InfPtr->VaseL[1].Kind == 3))
    {
        InfPtr->VaseL[1].Osare = true;
        QMessageBox::information(this, "GreenHouse", " عصاره مگنولیا به خاک اضافه شد");
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "این گل به عصاره مگنولیا نیاز ندارد");
    }
}

void second::on_OsMagnolia3_clicked()
{
    if ((InfPtr->VaseL[2].FlowerNum == 0) & (InfPtr->VaseL[2].Kind == 3))
    {
        InfPtr->VaseL[2].Osare = true;
        QMessageBox::information(this, "GreenHouse", " عصاره مگنولیا به خاک اضافه شد");
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "این گل به عصاره مگنولیا نیاز ندارد");
    }
}

void second::on_OsMagnolia4_clicked()
{
    if ((InfPtr->VaseL[3].FlowerNum == 0) & (InfPtr->VaseL[3].Kind == 3))
    {
        InfPtr->VaseL[3].Osare = true;
        QMessageBox::information(this, "GreenHouse", " عصاره مگنولیا به خاک اضافه شد");
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "این گل به عصاره مگنولیا نیاز ندارد");
    }
}

void second::on_OsMagnolia5_clicked()
{
    if ((InfPtr->VaseL[4].FlowerNum == 0) & (InfPtr->VaseL[4].Kind == 3))
    {
        InfPtr->VaseL[4].Osare = true;
        QMessageBox::information(this, "GreenHouse", " عصاره مگنولیا به خاک اضافه شد");
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "این گل به عصاره مگنولیا نیاز ندارد");
    }
}

void second::on_OsLilium1_clicked()
{
    if ((InfPtr->VaseL[0].FlowerNum == 1) & (InfPtr->VaseL[0].Kind == 3))
    {
        InfPtr->VaseL[0].Osare = true;
        QMessageBox::information(this, "GreenHouse", " عصاره لیلیوم به خاک اضافه شد");
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "این گل به عصاره لیلیوم نیاز ندارد");
    }
}

void second::on_OsLilium2_clicked()
{
    if ((InfPtr->VaseL[1].FlowerNum == 1) & (InfPtr->VaseL[1].Kind == 3))
    {
        InfPtr->VaseL[1].Osare = true;
        QMessageBox::information(this, "GreenHouse", " عصاره لیلیوم به خاک اضافه شد");
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "این گل به عصاره لیلیوم نیاز ندارد");
    }
}

void second::on_OsLilium3_clicked()
{
    if ((InfPtr->VaseL[2].FlowerNum == 1) & (InfPtr->VaseL[2].Kind == 3))
    {
        InfPtr->VaseL[2].Osare = true;
        QMessageBox::information(this, "GreenHouse", " عصاره لیلیوم به خاک اضافه شد");
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "این گل به عصاره لیلیوم نیاز ندارد");
    }
}

void second::on_OsLilium4_clicked()
{
    if ((InfPtr->VaseL[3].FlowerNum == 1) & (InfPtr->VaseL[3].Kind == 3))
    {
        InfPtr->VaseL[3].Osare = true;
        QMessageBox::information(this, "GreenHouse", " عصاره لیلیوم به خاک اضافه شد");
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "این گل به عصاره لیلیوم نیاز ندارد");
    }
}

void second::on_OsLilium5_clicked()
{
    if ((InfPtr->VaseL[4].FlowerNum == 1) & (InfPtr->VaseL[4].Kind == 3))
    {
        InfPtr->VaseL[4].Osare = true;
        QMessageBox::information(this, "GreenHouse", " عصاره لیلیوم به خاک اضافه شد");
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "این گل به عصاره لیلیوم نیاز ندارد");
    }
}

void second::on_OsOrkide1_clicked()
{
    if ((InfPtr->VaseL[0].FlowerNum == 2) & (InfPtr->VaseL[0].Kind == 3))
    {
        InfPtr->VaseL[0].Osare = true;
        QMessageBox::information(this, "GreenHouse", " عصاره اورکیده به خاک اضافه شد");
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "این گل به عصاره اورکیده نیاز ندارد");
    }
}

void second::on_OsOrkide2_clicked()
{
    if ((InfPtr->VaseL[1].FlowerNum == 2) & (InfPtr->VaseL[1].Kind == 3))
    {
        InfPtr->VaseL[1].Osare = true;
        QMessageBox::information(this, "GreenHouse", " عصاره اورکیده به خاک اضافه شد");
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "این گل به عصاره اورکیده نیاز ندارد");
    }
}

void second::on_OsOrkide3_clicked()
{
    if ((InfPtr->VaseL[2].FlowerNum == 2) & (InfPtr->VaseL[2].Kind == 3))
    {
        InfPtr->VaseL[2].Osare = true;
        QMessageBox::information(this, "GreenHouse", " عصاره اورکیده به خاک اضافه شد");
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "این گل به عصاره اورکیده نیاز ندارد");
    }
}

void second::on_OsOrkide4_clicked()
{
    if ((InfPtr->VaseL[3].FlowerNum == 2) & (InfPtr->VaseL[3].Kind == 3))
    {
        InfPtr->VaseL[3].Osare = true;
        QMessageBox::information(this, "GreenHouse", " عصاره اورکیده به خاک اضافه شد");
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "این گل به عصاره اورکیده نیاز ندارد");
    }
}

void second::on_OsOrkide5_clicked()
{
    if ((InfPtr->VaseL[4].FlowerNum == 2) & (InfPtr->VaseL[4].Kind == 3))
    {
        InfPtr->VaseL[4].Osare = true;
        QMessageBox::information(this, "GreenHouse", " عصاره اورکیده به خاک اضافه شد");
    }
    else
    {
        QMessageBox::information(this, "GreenHouse", "این گل به عصاره اورکیده نیاز ندارد");
    }
}

void second::on_DeleteFlower1_clicked()
{
    if (InfPtr->VaseL[0].IsEmpty || InfPtr->VaseL[0].IsOpen == false)
    {
        QMessageBox::information(this, "Greenhouse", "گلدان خالی است");
    }
    else
    {
        InfPtr->SetDefault(0);
        QMessageBox::information(this, "Greenhouse", "گل حذف شد");
        InfPtr->WareHouse.DeletedFlowers++;
    }
}

void second::on_DeleteFlower2_clicked()
{
    if (InfPtr->VaseL[1].IsEmpty || InfPtr->VaseL[1].IsOpen == false)
    {
        QMessageBox::information(this, "Greenhouse", "گلدان خالی است");
    }
    else
    {
        InfPtr->SetDefault(1);
        QMessageBox::information(this, "Greenhouse", "گل حذف شد");
        InfPtr->WareHouse.DeletedFlowers++;
    }
}

void second::on_DeleteFlower3_clicked()
{
    if (InfPtr->VaseL[2].IsEmpty || InfPtr->VaseL[2].IsOpen == false)
    {
        QMessageBox::information(this, "Greenhouse", "گلدان خالی است");
    }
    else
    {
        InfPtr->SetDefault(2);
        QMessageBox::information(this, "Greenhouse", "گل حذف شد");
        InfPtr->WareHouse.DeletedFlowers++;
    }
}

void second::on_DeleteFlower4_clicked()
{
    if (InfPtr->VaseL[3].IsEmpty || InfPtr->VaseL[3].IsOpen == false)
    {
        QMessageBox::information(this, "Greenhouse", "گلدان خالی است");
    }
    else
    {
        InfPtr->SetDefault(3);
        QMessageBox::information(this, "Greenhouse", "گل حذف شد");
        InfPtr->WareHouse.DeletedFlowers++;
    }
}

void second::on_DeleteFlower5_clicked()
{
    if (InfPtr->VaseL[4].IsEmpty || InfPtr->VaseL[4].IsOpen == false)
    {
        QMessageBox::information(this, "Greenhouse", "گلدان خالی است");
    }
    else
    {
        InfPtr->SetDefault(4);
        QMessageBox::information(this, "Greenhouse", "گل حذف شد");
        InfPtr->WareHouse.DeletedFlowers++;
    }
}
