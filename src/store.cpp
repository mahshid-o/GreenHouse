#include "store.hpp"
#include "ui_store.h"
#include <QMessageBox>

Forooshgah::Forooshgah(Information * in, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Forooshgah)
{
    InfPtr = in;
    ui->setupUi(this);
    ui->labelAadiNumber->setText(QString::number(InfPtr->WareHouse.NormalFlowerCount));
    ui->labelRareNumber->setText(QString::number(InfPtr->WareHouse.RareFlowerCount));
    ui->labelZinatiNumber->setText(QString::number(InfPtr->WareHouse.DecorativeFlowerCount));

    ui->labelKokabNumber->setText(QString::number(InfPtr->WareHouse.KokabCount));
    ui->labelLaleNumber->setText(QString::number(InfPtr->WareHouse.LalehCount));
    ui->labelLiliumNumber->setText(QString::number(InfPtr->WareHouse.LiliumCount));
    ui->labelMagnoliaNumber->setText(QString::number(InfPtr->WareHouse.MagnloiaCount));
    ui->labelLaleNumber->setText(QString::number(InfPtr->WareHouse.LalehCount));
    ui->labelSonbolNumber->setText(QString::number(InfPtr->WareHouse.SonbolCount));
    ui->labelOrkideNumber->setText(QString::number(InfPtr->WareHouse.OrkidehCount));
    ui->labelNargesNumber->setText(QString::number(InfPtr->WareHouse.NargesCount));
    ui->labelMaryamNumber->setText(QString::number(InfPtr->WareHouse.MaryamCount));
    ui->labelSeedAadiNumberWh->setText(QString::number(InfPtr->WareHouse.NormalFlowerCount));
    ui->labelSeedDecorativeNumber->setText(QString::number(InfPtr->WareHouse.DecorativeFlowerCount));
    ui->labelSeedRareNumber->setText(QString::number(InfPtr->WareHouse.RareFlowerCount));

    this->setWindowTitle("فروشگاه");
}

void Forooshgah::showMessage()
{
    QMessageBox msg;
    msg.setText("خریداری شد");
    msg.show();
    msg.exec();
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
    InfPtr->WareHouse.Money -= 450;

    showMessage();
}

void Forooshgah::on_pushButtonBuyAb_clicked()
{
    InfPtr->WareHouse.Water++;
    ui->labelAbNumber->setText(QString::number(InfPtr->WareHouse.Water));
    InfPtr->WareHouse.Money -= 250;

    showMessage();
}

void Forooshgah::on_pushButtonBuyPoison_clicked()
{
    InfPtr->WareHouse.Poison++;
    ui->labelPoisonNumber->setText(QString::number(InfPtr->WareHouse.Poison));
    InfPtr->WareHouse.Money -= 500;

    showMessage();
}

void Forooshgah::on_pushButtonBuyAadi_clicked()
{
    InfPtr->WareHouse.NormalFlowerCount++;
    ui->labelAadiNumber->setText(QString::number(InfPtr->WareHouse.NormalFlowerCount));
    InfPtr->WareHouse.Money -= 1000;

    showMessage();
}

void Forooshgah::on_pushButtonBuyZinati_clicked()
{
    InfPtr->WareHouse.DecorativeFlowerCount++;
    ui->labelZinatiNumber->setText(QString::number(InfPtr->WareHouse.DecorativeFlowerCount));
    InfPtr->WareHouse.Money -= 20000;

    showMessage();
}

void Forooshgah::on_pushButtonBuyNader_clicked()
{
    InfPtr->WareHouse.RareFlowerCount++;
    ui->labelRareNumber->setText(QString::number(InfPtr->WareHouse.RareFlowerCount));
    InfPtr->WareHouse.Money -= 5000;

    showMessage();
}

void Forooshgah::on_pushButtonOrkideWH_8_clicked()
{

}

void Forooshgah::on_pushButtonNargesWH_2_clicked()
{
    this->close();
}
