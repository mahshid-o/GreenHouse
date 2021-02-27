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
    InfPtr->VaseL[NumV].IsDamaged = false;
    int num = InfPtr->GenRan1();
    InfPtr->VaseL[NumV].FlowerNum = ++num;
    InfPtr->VaseL[NumV].Kind = 1;
    InfPtr->WareHouse.Money -= 1000;
    int Damaged = InfPtr->GenRan3();    // if Gen3 returns 1 the flower is damaged
    if(Damaged == 1)
    {
        InfPtr->VaseL[NumV].IsDamaged = true;
    }
}

void Store2::on_pushButtonBuyDecorative_clicked()
{
    InfPtr->VaseL[NumV].IsDamaged = false;
    int num = InfPtr->GenRan2();
    InfPtr->VaseL[NumV].FlowerNum = num;
    InfPtr->VaseL[NumV].Kind = 3;
    InfPtr->WareHouse.Money -= 15000;
    int Damaged = InfPtr->GenRan3();    // if Gen3 returns 1 the flower is damaged
    if(Damaged == 1)
    {
        InfPtr->VaseL[NumV].IsDamaged = true;
    }
}

void Store2::on_pushButtonBuyRare_clicked()
{
    InfPtr->VaseL[NumV].IsDamaged = false;
    int num = InfPtr->GenRan2();
    InfPtr->VaseL[NumV].FlowerNum = num;
    InfPtr->VaseL[NumV].Kind = 2;
    InfPtr->WareHouse.Money -= 10000;
    int Damaged = InfPtr->GenRan3();    // if Gen3 returns 1 the flower is damaged
    if(Damaged == 1)
    {
        InfPtr->VaseL[NumV].IsDamaged = true;
    }
}
