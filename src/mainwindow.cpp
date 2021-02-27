#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include "store.hpp"
#include <QString>
#include "greenHouse.hpp"
#include "laboratory.hpp"
#include <iostream>
#include <string>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QCoreApplication>
#include <warehouse.hpp>
#include <iomanip>
#include <QDebug>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->labelProfileName->setText(Information.WareHouse.UserName);
    ui->lineEditProfileName->setText(Information.WareHouse.UserName);
    ui->labelOsOrkideWH->setText(QString::number(Information.WareHouse.OsOrkide));
    ui->labelOsLiliumWH->setText(QString::number(Information.WareHouse.OsLilium));
    ui->labelOsMagnoliaWH->setText(QString::number(Information.WareHouse.OsMagnolia));
    ui->labelWaterWH->setText(QString::number(Information.WareHouse.Water));
    ui->labelSoilWH->setText(QString::number(Information.WareHouse.Soil));
    ui->labelPoisonWH->setText(QString::number(Information.WareHouse.Poison));
    ui->labelMoney->setText(QString::number(Information.WareHouse.Money));
    ui->labelOsareNumber->setText(QString::number(Information.WareHouse.OsLilium +
                        Information.WareHouse.OsMagnolia + Information.WareHouse.OsOrkide));
    MainWindowPtr = this;
    this->setWindowTitle("پروفایل");
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
    Information.WareHouse.UserName = ui->lineEditProfileName->text();
}

void MainWindow::on_pushButtonLaboratory_clicked()
{
    this->hide();
    fourth fourth(&Information);
    fourth.setModal(true);
    fourth.exec();
    this->show();
    ui->labelMoney->setText(QString::number(Information.WareHouse.Money));
    ui->labelWaterWH->setText(QString::number(Information.WareHouse.Water));
    ui->labelOsOrkideWH->setText(QString::number(Information.WareHouse.OsOrkide));
    ui->labelOsLiliumWH->setText(QString::number(Information.WareHouse.OsLilium));
    ui->labelOsMagnoliaWH->setText(QString::number(Information.WareHouse.OsMagnolia));
    ui->labelOsareNumber->setText(QString::number(Information.WareHouse.OsLilium +
                        Information.WareHouse.OsMagnolia + Information.WareHouse.OsOrkide));
}

void MainWindow::on_pushButtonStore_clicked()
{
    this->hide();
    Forooshgah Forooshgah(&Information);
    Forooshgah.setModal(true);
    Forooshgah.exec();
    this->show();
//    Information.SetNumbers(Information.Flowers);
    ui->labelMoney->setText(QString::number(Information.WareHouse.Money));
    ui->labelWaterWH->setText(QString::number(Information.WareHouse.Water));
    ui->labelSoilWH->setText(QString::number(Information.WareHouse.Soil));
    ui->labelPoisonWH->setText(QString::number(Information.WareHouse.Poison));
    ui->labelAadiNumber->setText(QString::number(Information.WareHouse.NormalFlowerCount));
    ui->labelNaderNumber->setText(QString::number(Information.WareHouse.RareFlowerCount));
    ui->labelZinatiNumber->setText(QString::number(Information.WareHouse.DecorativeFlowerCount));
}

void MainWindow::on_pushButtonGreenHouse_clicked()
{
    this->hide();
    second second(&Information);
    second.setModal(true);
    second.exec();
    this->show();
    ui->labelMoney->setText(QString::number(Information.WareHouse.Money));
    ui->labelWaterWH->setText(QString::number(Information.WareHouse.Water));
    ui->labelSoilWH->setText(QString::number(Information.WareHouse.Soil));
    ui->labelPoisonWH->setText(QString::number(Information.WareHouse.Poison));
    ui->labelAadiNumber->setText(QString::number(Information.WareHouse.NormalFlowerCount));
    ui->labelNaderNumber->setText(QString::number(Information.WareHouse.RareFlowerCount));
    ui->labelZinatiNumber->setText(QString::number(Information.WareHouse.DecorativeFlowerCount));
}
QTextStream & operator <<(QTextStream &s, WareHouse w)
{
    s<<w.UserName<<"          "<<w.NormalFlowerCount<<"\t"<<w.RareFlowerCount<<"\t"<<w.DecorativeFlowerCount;
    return s;
}
void MainWindow::on_pushButtonSave_clicked()
{
    QFile file("C:/Users/pc/Desktop/final15/GreenHouse/infoFile.txt");
    file.open(QFile::WriteOnly | QFile::Text);
    if(!file.isOpen())
    {
        QMessageBox::warning(this,"title","file nooot open");
    }
    QTextStream out;
    WareHouse w=Information.WareHouse;
    out.setDevice(&file);
    out<<w;
    file.flush();
    file.close();
}

void MainWindow::on_pushButtonLoad_clicked()
{
    QFile file("C:/Users/pc/Desktop/final15/GreenHouse/infoFile.txt");
    file.open(QFile::ReadOnly | QFile::Text);
    if(!file.isOpen())
    {
        QMessageBox::warning(this,"title","file nooot open");
    }
    QString line=file.readLine();
    qDebug()<<line;
}
