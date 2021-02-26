#include "store2.hpp"
#include "ui_store2.h"

Store2::Store2(int num, Information * in, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Store2)
{
    NumV = num;
    ui->setupUi(this);
    InfPtr = in;

    this->setWindowTitle("فروشگاه");
}

Store2::~Store2()
{
    delete ui;
}
void Store2::on_pushButtonBuyAadi_clicked()
{
    int num = InfPtr->GenRan1();
    InfPtr->VaseL[NumV].FlowerNum = num;
    InfPtr->VaseL[NumV].Kind = 1;
    InfPtr->WareHouse.NormalFlowerCount++;
    switch (num)
    {
    case 1:
        InfPtr->WareHouse.KokabCount++;
        break;
    case 2:
        InfPtr->WareHouse.NargesCount++;
        break;
    }
    InfPtr->WareHouse.Money -= 1000;
}

void Store2::on_pushButtonBuyDecorative_clicked()
{
    int num = InfPtr->GenRan2();
    InfPtr->VaseL[NumV].FlowerNum = num;
    InfPtr->VaseL[NumV].Kind = 3;
    InfPtr->WareHouse.DecorativeFlowerCount++;
    switch (num)
    {
    case 1:
        InfPtr->WareHouse.MagnloiaCount++;
        break;
    case 2:
        InfPtr->WareHouse.LiliumCount++;
        break;
    case 3:
        InfPtr->WareHouse.OrkidehCount++;
        break;
    }
    InfPtr->WareHouse.Money -= 15000;
}

void Store2::on_pushButtonBuyRare_clicked()
{
    int num = InfPtr->GenRan2();
    InfPtr->VaseL[NumV].FlowerNum = num;
    InfPtr->VaseL[NumV].Kind = 2;
    InfPtr->WareHouse.RareFlowerCount++;
    switch (num)
    {
    case 1:
        InfPtr->WareHouse.LalehCount++;
        break;
    case 2:
        InfPtr->WareHouse.MaryamCount++;
        break;
    case 3:
        InfPtr->WareHouse.SonbolCount++;
        break;
    }
    InfPtr->WareHouse.Money -= 10000;
}
