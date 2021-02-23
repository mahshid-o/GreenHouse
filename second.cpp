#include "second.h"
#include "ui_second.h"
#include <QString>
#include <QDebug>
#include "Forooshgah.h"

second::second(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::second)
{
    ui->setupUi(this);
}

second::~second()
{
    delete ui;
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
    ui->labelName1->setText("laleh");
    ui->openButton1->setEnabled(false);

}

void second::on_openButton2_clicked()
{
    ui->labelName2->setText("narges");
    ui->openButton2->setEnabled(false);
}

void second::on_openButton3_clicked()
{
    ui->labelName3->setText("kokab");
    ui->openButton3->setEnabled(false);
}

void second::on_openButton4_clicked()
{
    ui->labelName4->setText("magnolia");
    ui->openButton4->setEnabled(false);
}

void second::on_openButton5_clicked()
{
    ui->labelName5->setText("lilium");
    ui->openButton5->setEnabled(false);
}

void second::on_selectButton1_clicked()
{
    Forooshgah Forooshgah;
    Forooshgah.setModal(true);
    Forooshgah.exec();
    ui->selectButton1->setEnabled(false);
}

void second::on_selectButton2_clicked()
{
    Forooshgah Forooshgah;
    Forooshgah.setModal(true);
    Forooshgah.exec();
    ui->selectButton2->setEnabled(false);
}


void second::on_selectButton3_clicked()
{
    Forooshgah Forooshgah;
    Forooshgah.setModal(true);
    Forooshgah.exec();
    ui->selectButton3->setEnabled(false);
}

void second::on_selectButton4_clicked()
{
    Forooshgah Forooshgah;
    Forooshgah.setModal(true);
    Forooshgah.exec();
    ui->selectButton4->setEnabled(false);
}

void second::on_selectButton5_clicked()
{
    Forooshgah Forooshgah;
    Forooshgah.setModal(true);
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
