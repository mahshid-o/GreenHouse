#include "store.hpp"
#include "ui_store.h"
#include <QMessageBox>

Forooshgah::Forooshgah(Information * in, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Forooshgah)
{
    InfPtr = in;
    ui->setupUi(this);
    ui->labelAadiNumber->setText(QString::number(InfPtr->WareHouse.SeedNormalFlowerCount));
    ui->labelRareNumber->setText(QString::number(InfPtr->WareHouse.SeedRareFlowerCount));
    ui->labelZinatiNumber->setText(QString::number(InfPtr->WareHouse.SeedDecorativeFlowerCount));

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
    InfPtr->WareHouse.SeedNormalFlowerCount++;
    ui->labelAadiNumber->setText(QString::number(InfPtr->WareHouse.SeedNormalFlowerCount));
    InfPtr->WareHouse.Money -= 1000;

    showMessage();
}

void Forooshgah::on_pushButtonBuyZinati_clicked()
{
    InfPtr->WareHouse.SeedDecorativeFlowerCount++;
    ui->labelZinatiNumber->setText(QString::number(InfPtr->WareHouse.SeedDecorativeFlowerCount));
    InfPtr->WareHouse.Money -= 20000;

    showMessage();
}

void Forooshgah::on_pushButtonBuyNader_clicked()
{
    InfPtr->WareHouse.SeedRareFlowerCount++;
    ui->labelRareNumber->setText(QString::number(InfPtr->WareHouse.SeedRareFlowerCount));
    InfPtr->WareHouse.Money -= 5000;

    showMessage();
}

void Forooshgah::on_pushButtonNargesWH_2_clicked()
{
    this->close();
}

void Forooshgah::on_pushButtonMagnoliaWH_clicked()
{
    if(0 < InfPtr->WareHouse.MagnloiaCount)
    {
        InfPtr->WareHouse.MagnloiaCount--;
        InfPtr->WareHouse.Money += 30000;
        QMessageBox::information(this,"Store", "فروخته شد");
    }
    else
    {
        QMessageBox::information(this,"Store", "موجودی این گل صفر است");
    }
}

void Forooshgah::on_pushButtonLiliumWH_clicked()
{
    if(0 < InfPtr->WareHouse.LiliumCount)
    {
        InfPtr->WareHouse.LiliumCount--;
        InfPtr->WareHouse.Money += 30000;
        QMessageBox::information(this,"Store", "فروخته شد");
    }
    else
    {
        QMessageBox::information(this,"Store", "موجودی این گل صفر است");
    }
}

void Forooshgah::on_pushButtonOrkideWH_clicked()
{
    if(0 < InfPtr->WareHouse.OrkidehCount)
    {
        InfPtr->WareHouse.OrkidehCount--;
        InfPtr->WareHouse.Money += 30000;
        QMessageBox::information(this,"Store", "فروخته شد");
    }
    else
    {
        QMessageBox::information(this,"Store", "موجودی این گل صفر است");
    }
}

void Forooshgah::on_pushButtonKokabWH_clicked()
{
    if(0 < InfPtr->WareHouse.KokabCount)
    {
        InfPtr->WareHouse.KokabCount--;
        InfPtr->WareHouse.Money += 2000;
        QMessageBox::information(this,"Store", "فروخته شد");
    }
    else
    {
        QMessageBox::information(this,"Store", "موجودی این گل صفر است");
    }
}

void Forooshgah::on_pushButtonLaleWH_clicked()
{
    if(0 < InfPtr->WareHouse.LalehCount)
    {
        InfPtr->WareHouse.LalehCount--;
        InfPtr->WareHouse.Money += 20000;
        QMessageBox::information(this,"Store", "فروخته شد");
    }
    else
    {
        QMessageBox::information(this,"Store", "موجودی این گل صفر است");
    }
}

void Forooshgah::on_pushButtonMaryamWH_clicked()
{
    if(0 < InfPtr->WareHouse.MaryamCount)
    {
        InfPtr->WareHouse.MaryamCount--;
        InfPtr->WareHouse.Money += 20000;
        QMessageBox::information(this,"Store", "فروخته شد");
    }
    else
    {
        QMessageBox::information(this,"Store", "موجودی این گل صفر است");
    }
}

void Forooshgah::on_pushButtonSonbolWH_clicked()
{
    if(0 < InfPtr->WareHouse.SonbolCount)
    {
        InfPtr->WareHouse.SonbolCount--;
        InfPtr->WareHouse.Money += 20000;
        QMessageBox::information(this,"Store", "فروخته شد");
    }
    else
    {
        QMessageBox::information(this,"Store", "موجودی این گل صفر است");
    }
}

void Forooshgah::on_pushButtonNargesWH_clicked()
{
    if(0 < InfPtr->WareHouse.NargesCount)
    {
        InfPtr->WareHouse.NargesCount--;
        InfPtr->WareHouse.Money += 2000;
        QMessageBox::information(this,"Store", "فروخته شد");
    }
    else
    {
        QMessageBox::information(this,"Store", "موجودی این گل صفر است");
    }
}

void Forooshgah::on_pushButtonDecorativeWH_clicked()
{
    if(0 < InfPtr->WareHouse.DecorativeFlowerCount)
    {
        InfPtr->WareHouse.DecorativeFlowerCount--;
        InfPtr->WareHouse.Money += 10000;
        QMessageBox::information(this,"Store", "فروخته شد");
    }
    else
    {
        QMessageBox::information(this,"Store", "موجودی صفر است");
    }
}

void Forooshgah::on_pushButtonRareWH_clicked()
{
    if(0 < InfPtr->WareHouse.RareFlowerCount)
    {
        InfPtr->WareHouse.RareFlowerCount--;
        InfPtr->WareHouse.Money += 5000;
        QMessageBox::information(this,"Store", "فروخته شد");
    }
    else
    {
        QMessageBox::information(this,"Store", "موجودی صفر است");
    }
}

void Forooshgah::on_pushButtonNormalwH_clicked()
{
    if(0 < InfPtr->WareHouse.NormalFlowerCount)
    {
        InfPtr->WareHouse.NormalFlowerCount--;
        InfPtr->WareHouse.Money += 500;
        QMessageBox::information(this,"Store", "فروخته شد");
    }
    else
    {
        QMessageBox::information(this,"Store", "موجودی صفر است");
    }
}
