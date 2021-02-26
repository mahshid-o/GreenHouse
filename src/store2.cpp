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
}

void Store2::on_pushButtonBuyDecorative_clicked()
{
    int num = InfPtr->GenRan2();
    InfPtr->VaseL[NumV].FlowerNum = num;
    InfPtr->VaseL[NumV].Kind = 3;
}

void Store2::on_pushButtonBuyRare_clicked()
{
    int num = InfPtr->GenRan2();
    InfPtr->VaseL[NumV].FlowerNum = num;
    InfPtr->VaseL[NumV].Kind = 2;
}
