#include "../include/mainwindow.h"
#include "ui_mainwindow.h"
#include "../include/Forooshgah.h"
#include <QString>
#include "../include/second.h"
#include "../include/fourth.h"
#include <iostream>
#include <string>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->labelOsOrkideWH->setText(QString::number(Information.WareHouse.OsOrkide));
    ui->labelOsLiliumWH->setText(QString::number(Information.WareHouse.OsLilium));
    ui->labelOsMagnoliaWH->setText(QString::number(Information.WareHouse.OsMagnolia));
    ui->labelWaterWH->setText(QString::number(Information.WareHouse.Water));
    ui->labelSoilWH->setText(QString::number(Information.WareHouse.Soil));
    ui->labelPoisonWH->setText(QString::number(Information.WareHouse.Poison));
    ui->labelMoney->setText(QString::number(Information.WareHouse.Money));
    MainWindowPtr = this;
}

MainWindow::~MainWindow()
{
    if(Information.Flowers.size() != 0)
    {
        for(size_t i = 0; i < Information.Flowers.size(); i++)
        {
            delete Information.Flowers[i];
        }
    }
    cout << Information.Flowers.size() << endl;
    delete ui;
}

void MainWindow::on_pushButtonSaveName_clicked()
{
    QString ProfileNameString = ui->lineEditProfileName->text();
}

void MainWindow::on_pushButtonLaboratory_clicked()
{
    fourth fourth(&Information);
    fourth.setModal(true);
    fourth.exec();
    ui->labelOsOrkideWH->setText(QString::number(Information.WareHouse.OsOrkide));
    ui->labelOsLiliumWH->setText(QString::number(Information.WareHouse.OsLilium));
    ui->labelOsMagnoliaWH->setText(QString::number(Information.WareHouse.OsMagnolia));
}

void MainWindow::on_pushButtonStore_clicked()
{
    Forooshgah Forooshgah(&Information);
    Forooshgah.setModal(true);
    Forooshgah.exec();
//    Information.SetNumbers(Information.Flowers);
    ui->labelWaterWH->setText(QString::number(Information.WareHouse.Water));
    ui->labelSoilWH->setText(QString::number(Information.WareHouse.Soil));
    ui->labelPoisonWH->setText(QString::number(Information.WareHouse.Poison));
    ui->labelAadiNumber->setText(QString::number(Information.WareHouse.NormalFlowerCount));
    ui->labelNaderNumber->setText(QString::number(Information.WareHouse.RareFlowerCount));
    ui->labelZinatiNumber->setText(QString::number(Information.WareHouse.DecorativeFlowerCount));
}

void MainWindow::on_pushButtonGreenHouse_clicked()
{
    second second(&Information);
    second.setModal(true);
    second.exec();
}
