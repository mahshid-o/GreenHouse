#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include "store.hpp"
#include <QString>
#include "greenHouse.hpp"
#include "laboratory.hpp"
#include <iostream>
#include <string>
#include <QMessageBox>
#include <warehouse.hpp>
#include <iomanip>
#include <QDebug>
#include <fstream>
#include <vase.hpp>

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
    QMessageBox::information(this, "mainWindow", "نام کاربری ذخیره شد");
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
ostream &operator<<(ostream &output,WareHouse w)//overload << for writing
{
    output<<w.NormalFlowerCount<<setw(5)<<w.DecorativeFlowerCount<<setw(5)<<w.RareFlowerCount<<setw(5)<<w.Soil<<setw(5)<<w.Water<<setw(5)<<w.Poison<<setw(5)<<w.OsLilium;
    return output;
}
ostream &operator<<(ostream &output,Vase v)//overload << for writing
{
//    for(size_t i=0;i<5;i++)
//    {
      output<<v.IsEmpty<<setw(5)<<v.IsOpen<<setw(5)<<v.IsGrown<<endl;
//    }
    return output;
}

void MainWindow::on_pushButtonSave_clicked()
{
    ofstream file("../GreenHouse/myfile.txt",ios::out);
    if (!file.is_open())
    {
       exit(EXIT_FAILURE);
    }
    WareHouse w=Information.WareHouse;
    file<<w;

    ofstream file3("../GreenHouse/vase.txt",ios::out);
    if(!file3.is_open())
    {
        exit(EXIT_FAILURE);
    }
    Vase Vases=Information.VaseL[0];
    file3<<Vases;
}

void MainWindow::on_pushButtonLoad_clicked()
{
    ifstream file2("../GreenHouse/myfile.txt",ios::in);//declare an ifstream file for read from file
    if (!file2.is_open())
    {
        exit(EXIT_FAILURE);
    }
    WareHouse w=Information.WareHouse;
    file2>>w.NormalFlowerCount>>w.DecorativeFlowerCount>>w.RareFlowerCount>>w.Soil>>w.Water>>w.Poison;

    Information.WareHouse.NormalFlowerCount=w.NormalFlowerCount;
    ui->labelAadiNumber->setText(QString::number(Information.WareHouse.NormalFlowerCount));
    //qDebug()<<Information.WareHouse.NormalFlowerCount;

    Information.WareHouse.DecorativeFlowerCount=w.DecorativeFlowerCount;
    ui->labelZinatiNumber->setText(QString::number(Information.WareHouse.DecorativeFlowerCount));
    //qDebug()<<Information.WareHouse.DecorativeFlowerCount;

    Information.WareHouse.RareFlowerCount=w.RareFlowerCount;
    ui->labelNaderNumber->setText(QString::number(Information.WareHouse.RareFlowerCount));
    //qDebug()<<Information.WareHouse.RareFlowerCount;

    Information.WareHouse.Soil=w.Soil;
    ui->labelSoilWH->setText(QString::number(Information.WareHouse.Soil));
    //qDebug()<<Information.WareHouse.Soil;

    Information.WareHouse.Water=w.Water;
    ui->labelWaterWH->setText(QString::number(Information.WareHouse.Water));
    //qDebug()<<Information.WareHouse.Water;

    Information.WareHouse.Poison=w.Poison;
    ui->labelPoisonWH->setText(QString::number(Information.WareHouse.Poison));
    //qDebug()<<Information.WareHouse.Poison;



    ifstream file4("../GreenHouse/vase.txt",ios::in);//declare an ifstream file for read from file
    if (!file4.is_open())
    {
        exit(EXIT_FAILURE);
    }
    Vase v1;
    v1=Information.VaseL[0];
//    for(size_t i=0;i<5;i++)
//    {
//       v[i]=Information.VaseL[i];
//    }

//    for(size_t i=0;i<5;i++)
//    {
        file4>>v1.IsEmpty>>v1.IsOpen>>v1.IsGrown;
        //Information.VaseL[i].IsEmpty=v[i].IsEmpty;
        Information.VaseL[0].IsOpen=v1.IsOpen;
        qDebug()<<Information.VaseL[0].IsOpen;
        //qDebug()<<v[i].IsOpen;
        //Information.VaseL[i].IsGrown=v[i].IsOpen;

//    }
}
