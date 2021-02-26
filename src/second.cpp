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
    this->setWindowTitle("گلخانه");
}
second::~second()
{
    delete ui;
}

void second::on_openButton1_clicked()
{
    //Qstring n;
    //ui->labelName1->setText("empty");
    ui->openButton1->setEnabled(false);
    QPixmap pix6(":/new/prefix1/assets/empty0.png");
    ui->labelName1->setPixmap(pix6.scaled(150,80,Qt::KeepAspectRatio));
    qDebug()<<InfPtr->GenRan2();

}

void second::on_openButton2_clicked()
{
    ui->labelName2->setText("empty");
    ui->openButton2->setEnabled(false);
    QPixmap pix7(":/new/prefix1/assets/empty0.png");
    ui->labelName2->setPixmap(pix7.scaled(150,80,Qt::KeepAspectRatio));
    qDebug()<<InfPtr->GenRan1();
}

void second::on_openButton3_clicked()
{
    ui->labelName3->setText("empty");
    ui->openButton3->setEnabled(false);
    QPixmap pix8(":/new/prefix1/assets/empty0.png");
    ui->labelName3->setPixmap(pix8.scaled(150,80,Qt::KeepAspectRatio));
    qDebug()<<InfPtr->GenRan2();
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
    Forooshgah.exec();
    this->show();
    ui->selectButton1->setEnabled(false);
}

void second::on_selectButton2_clicked()
{
    this->hide();
    Forooshgah Forooshgah(InfPtr);
    Forooshgah.setModal(true);
    Forooshgah.exec();
    this->show();
    ui->selectButton2->setEnabled(false);
}


void second::on_selectButton3_clicked()
{
    this->hide();
    Forooshgah Forooshgah(InfPtr);
    Forooshgah.setModal(true);
    Forooshgah.exec();
    this->show();
    ui->selectButton3->setEnabled(false);
}

void second::on_selectButton4_clicked()
{
    this->hide();
    Forooshgah Forooshgah(InfPtr);
    Forooshgah.setModal(true);
    Forooshgah.exec();
    this->show();
    ui->selectButton4->setEnabled(false);
}

void second::on_selectButton5_clicked()
{
    this->hide();
    Forooshgah Forooshgah(InfPtr);
    Forooshgah.setModal(true);
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
