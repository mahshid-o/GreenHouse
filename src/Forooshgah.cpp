#include "../include/Forooshgah.h"
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

void Forooshgah::on_pushButtonBuyAadi_clicked()
{
    InfPtr->Flowers.push_back(new Kokab);
}

void Forooshgah::on_pushButtonBuyZinati_clicked()
{
    InfPtr->Flowers.push_back(new Orkideh);
}

void Forooshgah::on_pushButtonBuyNader_clicked()
{
    InfPtr->Flowers.push_back(new Laleh);
}
