#include "../include/Forooshgah.h"
#include "ui_store.h"

Forooshgah::Forooshgah(Information * in, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Forooshgah)
{
    InfPtr = in;
    ui->setupUi(this);
    ui->labelAadiNumber->setText(QString::number(InfPtr->WareHouse.NormalFlowerCount));
    ui->labelRareNumber->setText(QString::number(InfPtr->WareHouse.RareFlowerCount));
    ui->labelZinatiNumber->setText(QString::number(InfPtr->WareHouse.DecorativeFlowerCount));
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
    ui->labelKhakNumber->setText(QString::number(InfPtr->WareHouse.Soil));
}

void Forooshgah::on_pushButtonBuyAb_clicked()
{
    InfPtr->WareHouse.Water++;
    ui->labelAbNumber->setText(QString::number(InfPtr->WareHouse.Water));
}

void Forooshgah::on_pushButtonBuyPoison_clicked()
{
    InfPtr->WareHouse.Poison++;
    ui->labelPoisonNumber->setText(QString::number(InfPtr->WareHouse.Poison));
}

void Forooshgah::on_pushButtonBuyAadi_clicked()
{
    InfPtr->Flowers.push_back(new Kokab);
    InfPtr->WareHouse.NormalFlowerCount++;
    ui->labelAadiNumber->setText(QString::number(InfPtr->WareHouse.NormalFlowerCount));
}

void Forooshgah::on_pushButtonBuyZinati_clicked()
{
    InfPtr->Flowers.push_back(new Orkideh);
    InfPtr->WareHouse.DecorativeFlowerCount++;
    ui->labelZinatiNumber->setText(QString::number(InfPtr->WareHouse.DecorativeFlowerCount));
}

void Forooshgah::on_pushButtonBuyNader_clicked()
{
    InfPtr->Flowers.push_back(new Laleh);
    InfPtr->WareHouse.RareFlowerCount++;
    ui->labelRareNumber->setText(QString::number(InfPtr->WareHouse.RareFlowerCount));
}
