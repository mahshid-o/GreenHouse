#include "../include/second.h"
#include "ui_greenHouse.h"
#include <QString>
#include <QDebug>
#include "../include/Forooshgah.h"
#include <QTime>
#include <QDebug>
#include <random>
#include <QDateTime>
#include <QPixmap>

second::second(Information * in,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::second)
{
    InfPtr = in;
    ui->setupUi(this);
//    QPixmap pix("C:/Users/pc/Desktop/final5/GreenHouse/assets/lock - empty/lock0.png");
//    ui->labelName1->setPixmap(pix.scaled(150,80,Qt::KeepAspectRatio));
//    QPixmap pix2("C:/Users/pc/Desktop/final5/GreenHouse/assets/lock - empty/lock0.png");
//    ui->labelName2->setPixmap(pix2.scaled(150,80,Qt::KeepAspectRatio));
//    QPixmap pix3("C:/Users/pc/Desktop/final5/GreenHouse/assets/lock - empty/lock0.png");
//    ui->labelName3->setPixmap(pix3.scaled(150,80,Qt::KeepAspectRatio));
//    QPixmap pix4("C:/Users/pc/Desktop/final5/GreenHouse/assets/lock - empty/lock0.png");
//    ui->labelName4->setPixmap(pix4.scaled(150,80,Qt::KeepAspectRatio));
//    QPixmap pix5("C:/Users/pc/Desktop/final5/GreenHouse/assets/lock - empty/lock0.png");
//    ui->labelName5->setPixmap(pix5.scaled(150,80,Qt::KeepAspectRatio));
}
second::~second()
{
    delete ui;
}
int second::GenRandom(int min, int max)
{
    unsigned int ms = static_cast<unsigned>(QDateTime::currentMSecsSinceEpoch());
    std::mt19937 gen(ms);
    std::uniform_int_distribution<> uid(min, max);
    return uid(gen);
//    std::array<int,3> arr={uid(gen),uid(gen),uid(gen)};
//    for(auto i:arr)
//    qDebug() << i ;

}

void second::on_openButton1_clicked()
{
    //Qstring n;
    //ui->labelName1->setText("empty");
    ui->openButton1->setEnabled(false);
    QPixmap pix6(":/new/prefix1/assets/empty0.png");
    ui->labelName1->setPixmap(pix6.scaled(150,80,Qt::KeepAspectRatio));

}

void second::on_openButton2_clicked()
{
    ui->labelName2->setText("empty");
    ui->openButton2->setEnabled(false);
    QPixmap pix7(":/new/prefix1/assets/empty0.png");
    ui->labelName2->setPixmap(pix7.scaled(150,80,Qt::KeepAspectRatio));
}

void second::on_openButton3_clicked()
{
    ui->labelName3->setText("empty");
    ui->openButton3->setEnabled(false);
    QPixmap pix8(":/new/prefix1/assets/empty0.png");
    ui->labelName3->setPixmap(pix8.scaled(150,80,Qt::KeepAspectRatio));
}

void second::on_openButton4_clicked()
{
    ui->labelName4->setText("empty");
    ui->openButton4->setEnabled(false);
    QPixmap pix9(":/new/prefix1/assets/empty0.png");
    ui->labelName4->setPixmap(pix9.scaled(150,80,Qt::KeepAspectRatio));
}

void second::on_openButton5_clicked()
{
    ui->labelName5->setText("empty");
    ui->openButton5->setEnabled(false);
    QPixmap pix10(":/new/prefix1/assets/empty0.png");
    ui->labelName5->setPixmap(pix10.scaled(150,80,Qt::KeepAspectRatio));
}

void second::on_selectButton1_clicked()
{
    this->hide();
    Forooshgah Forooshgah(InfPtr);
    Forooshgah.setModal(true);
    qDebug()<<this->GenRandom(0,3);
    Forooshgah.exec();
    this->show();
    ui->selectButton1->setEnabled(false);
}

void second::on_selectButton2_clicked()
{
    this->hide();
    Forooshgah Forooshgah(InfPtr);
    Forooshgah.setModal(true);
    qDebug()<<this->GenRandom(0,3);
    Forooshgah.exec();
    this->show();
    ui->selectButton2->setEnabled(false);
}


void second::on_selectButton3_clicked()
{
    this->hide();
    Forooshgah Forooshgah(InfPtr);
    Forooshgah.setModal(true);
    qDebug()<<this->GenRandom(0,3);
    Forooshgah.exec();
    this->show();
    ui->selectButton3->setEnabled(false);
}

void second::on_selectButton4_clicked()
{
    this->hide();
    Forooshgah Forooshgah(InfPtr);
    Forooshgah.setModal(true);
    qDebug()<<this->GenRandom(0,3);
    Forooshgah.exec();
    this->show();
    ui->selectButton4->setEnabled(false);
}

void second::on_selectButton5_clicked()
{
    this->hide();
    Forooshgah Forooshgah(InfPtr);
    Forooshgah.setModal(true);
    qDebug()<<this->GenRandom(0,3);
    Forooshgah.exec();
    this->show();
    ui->selectButton5->setEnabled(false);
}

void second::on_saleButton1_clicked()
{
    ui->labelName1->setText("empty");
}

void second::on_saleButton2_clicked()
{
    ui->labelName2->setText("empty");
}

void second::on_saleButton3_clicked()
{
     ui->labelName3->setText("empty");
}
void second::on_saleButton4_clicked()
{
    ui->labelName4->setText("empty");
}

void second::on_saleButton5_clicked()
{
    ui->labelName5->setText("empty");
}
