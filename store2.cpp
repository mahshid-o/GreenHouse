#include "store2.h"
#include "ui_store2.h"

Store2::Store2(Information * in, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Store2)
{
    ui->setupUi(this);
    InfPtr = in;
}

Store2::~Store2()
{
    delete ui;
}
void Store2::on_pushButtonBuyAadi_clicked()
{
    InfPtr->VaseL[1].FlowerNum = 2;
}
