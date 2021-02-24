#include "second.h"
#include "ui_second.h"
#include <QString>
#include <QDebug>
#include "Forooshgah.h"
#include <QTime>
#include <QDebug>
#include <random>
#include <QDateTime>

second::second(int a,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::second)
{
    ui->setupUi(this);
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


//void second::on_openButton_clicked()
//{
//    QString n;
//    n=ui->labelName->text();
//    qDebug()<<n;
//}

void second::on_openButton1_clicked()
{
    //Qstring n;
    ui->labelName1->setText("empty");
    ui->openButton1->setEnabled(false);

}

void second::on_openButton2_clicked()
{
    ui->labelName2->setText("empty");
    ui->openButton2->setEnabled(false);
}

void second::on_openButton3_clicked()
{
    ui->labelName3->setText("empty");
    ui->openButton3->setEnabled(false);
}

void second::on_openButton4_clicked()
{
    ui->labelName4->setText("empty");
    ui->openButton4->setEnabled(false);
}

void second::on_openButton5_clicked()
{
    ui->labelName5->setText("empty");
    ui->openButton5->setEnabled(false);
}

void second::on_selectButton1_clicked()
{
    Forooshgah Forooshgah;
    Forooshgah.setModal(true);
    qDebug()<<this->GenRandom(0,3);
    Forooshgah.exec();

    ui->selectButton1->setEnabled(false);
}

void second::on_selectButton2_clicked()
{
    Forooshgah Forooshgah;
    Forooshgah.setModal(true);
    qDebug()<<this->GenRandom(0,3);
    Forooshgah.exec();

    ui->selectButton2->setEnabled(false);
}


void second::on_selectButton3_clicked()
{
    Forooshgah Forooshgah;
    Forooshgah.setModal(true);
    qDebug()<<this->GenRandom(0,3);
    Forooshgah.exec();

    ui->selectButton3->setEnabled(false);
}

void second::on_selectButton4_clicked()
{
    Forooshgah Forooshgah;
    Forooshgah.setModal(true);
    qDebug()<<this->GenRandom(0,3);
    Forooshgah.exec();

    ui->selectButton4->setEnabled(false);
}

void second::on_selectButton5_clicked()
{
    Forooshgah Forooshgah;
    Forooshgah.setModal(true);
    qDebug()<<this->GenRandom(0,3);
    Forooshgah.exec();

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
