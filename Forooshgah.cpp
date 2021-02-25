#include "Forooshgah.h"
#include "ui_Forooshgah.h"

Forooshgah::Forooshgah(Information * in, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Forooshgah)
{
    InfPtr = in;
    ui->setupUi(this);
}
Forooshgah::Forooshgah(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Forooshgah)
{

    ui->setupUi(this);
}

Forooshgah::~Forooshgah()
{
    delete ui;
}

void Forooshgah::on_pushButtonBuyKhak_clicked()
{
    InfPtr->WareHouse.Soil++;
}

void Forooshgah::on_pushButtonBuyAb_clicked()
{
    InfPtr->WareHouse.Water++;
}

void Forooshgah::on_pushButtonBuyOs_clicked()
{
    InfPtr->WareHouse.Poison++;
}
