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

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
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
    ui->labelKashteNumber->setText(QString::number(Information.WareHouse.PlantedFlowers));
    ui->labelMoney->setText(QString::number(Information.WareHouse.Money));
    ui->labelOsareNumber->setText(QString::number(Information.WareHouse.OsLilium +
                                                  Information.WareHouse.OsMagnolia + Information.WareHouse.OsOrkide));
    MainWindowPtr = this;
    this->setWindowTitle("پروفایل");
}

MainWindow::~MainWindow()
{
    if (Information.Flowers.size() != 0)
    {
        for (size_t i = 0; i < Information.Flowers.size(); i++)
        {
            delete Information.Flowers[i];
        }
    }
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
    ui->labelKashteNumber->setText(QString::number(Information.WareHouse.PlantedFlowers));
}
ostream &operator<<(ostream &output, WareHouse w) //overload << for writing
{

    output << w.NormalFlowerCount << setw(10) << w.DecorativeFlowerCount << setw(10) << w.RareFlowerCount << setw(10) << w.Soil << setw(10) << w.Water << setw(10) << w.Poison << setw(10) << w.OsMagnolia << setw(10) << w.OsLilium << setw(10) << w.OsOrkide << setw(10) << w.Money << setw(10) << w.LalehCount << setw(10) << w.KokabCount << setw(10) << w.LiliumCount << setw(10) << w.MagnloiaCount << setw(10) << w.MaryamCount << setw(10) << w.NargesCount << setw(10) << w.OrkidehCount << setw(10) << w.SonbolCount << setw(10) << w.SeedNormalFlowerCount << setw(10) << w.SeedRareFlowerCount << setw(10) << w.SeedDecorativeFlowerCount << setw(10) << w.DeletedFlowers << setw(10) << w.PlantedFlowers;
    return output;
}
ostream &operator<<(ostream &output, Vase v) //overload << for writing
{
    //    for(size_t i=0;i<5;i++)
    //    {
    output << v.IsEmpty << setw(10) << v.IsOpen << setw(10) << v.IsGrown << setw(10) << v.IsPoisoned << setw(10) << v.IsWaterd << setw(10) << v.IsDamaged << setw(10) << v.Kind << setw(10) << v.FlowerNum << setw(10) << v.HasSoil << setw(10) << v.Osare << endl;
    //    }
    return output;
}

void MainWindow::on_pushButtonSave_clicked()
{
    QMessageBox::information(this, "ذخیره", "بازی ذخیره شد");
    ofstream file("../myfile.txt", ios::out);
    if (!file.is_open())
    {
        exit(EXIT_FAILURE);
    }
    WareHouse w = Information.WareHouse;
    file << w;

    ofstream file3("../vase.txt", ios::out);
    if (!file3.is_open())
    {
        exit(EXIT_FAILURE);
    }
    Vase Vases = Information.VaseL[0];
    file3 << Vases;

    ofstream file5("../vase2.txt", ios::out);
    if (!file5.is_open())
    {
        exit(EXIT_FAILURE);
    }
    Vase Vases2 = Information.VaseL[1];
    file5 << Vases2;

    ofstream file7("../vase3.txt", ios::out);
    if (!file7.is_open())
    {
        exit(EXIT_FAILURE);
    }
    Vase Vases3 = Information.VaseL[2];
    file7 << Vases3;

    ofstream file8("../vase4.txt", ios::out);
    if (!file8.is_open())
    {
        exit(EXIT_FAILURE);
    }
    Vase Vases4 = Information.VaseL[3];
    file8 << Vases4;

    ofstream file10("../vase5.txt", ios::out);
    if (!file10.is_open())
    {
        exit(EXIT_FAILURE);
    }
    Vase Vases5 = Information.VaseL[4];
    file10 << Vases5;
}

void MainWindow::on_pushButtonLoad_clicked()
{
    Information.IsLoadPressed = true;
    ifstream file2("../myfile.txt", ios::in); //declare an ifstream file for read from file
    if (!file2.is_open())
    {
        exit(EXIT_FAILURE);
    }
    WareHouse w = Information.WareHouse;
    file2 >> w.NormalFlowerCount >> w.DecorativeFlowerCount >> w.RareFlowerCount >> w.Soil >> w.Water >>
        w.Poison >> w.OsMagnolia >> w.OsLilium >> w.OsOrkide >> w.Money >> w.LalehCount >> w.KokabCount >>
        w.LiliumCount >> w.MagnloiaCount >> w.MaryamCount >> w.NargesCount >> w.OrkidehCount >> w.SonbolCount >>
        w.SeedNormalFlowerCount >> w.SeedRareFlowerCount >> w.SeedDecorativeFlowerCount >> w.DeletedFlowers >>
        w.PlantedFlowers;

    Information.WareHouse.NormalFlowerCount = w.NormalFlowerCount;
    ui->labelAadiNumber->setText(QString::number(Information.WareHouse.NormalFlowerCount));
    //qDebug()<<Information.WareHouse.NormalFlowerCount;

    Information.WareHouse.DecorativeFlowerCount = w.DecorativeFlowerCount;
    ui->labelZinatiNumber->setText(QString::number(Information.WareHouse.DecorativeFlowerCount));
    //qDebug()<<Information.WareHouse.DecorativeFlowerCount;

    Information.WareHouse.RareFlowerCount = w.RareFlowerCount;
    ui->labelNaderNumber->setText(QString::number(Information.WareHouse.RareFlowerCount));
    //qDebug()<<Information.WareHouse.RareFlowerCount;

    Information.WareHouse.Soil = w.Soil;
    ui->labelSoilWH->setText(QString::number(Information.WareHouse.Soil));
    //qDebug()<<Information.WareHouse.Soil;

    Information.WareHouse.Water = w.Water;
    ui->labelWaterWH->setText(QString::number(Information.WareHouse.Water));
    //qDebug()<<Information.WareHouse.Water;

    Information.WareHouse.Poison = w.Poison;
    ui->labelPoisonWH->setText(QString::number(Information.WareHouse.Poison));
    //qDebug()<<Information.WareHouse.Poison;

    Information.WareHouse.OsMagnolia = w.OsMagnolia;
    ui->labelOsMagnoliaWH->setText(QString::number(Information.WareHouse.OsMagnolia));
    //qDebug()<<Information.WareHouse.Poison;

    Information.WareHouse.OsLilium = w.OsLilium;
    ui->labelOsLiliumWH->setText(QString::number(Information.WareHouse.OsLilium));
    //qDebug()<<Information.WareHouse.Poison;

    Information.WareHouse.OsOrkide = w.OsOrkide;
    ui->labelOsOrkideWH->setText(QString::number(Information.WareHouse.OsOrkide));
    //qDebug()<<Information.WareHouse.Poison;

    Information.WareHouse.Money = w.Money;
    ui->labelMoney->setText(QString::number(Information.WareHouse.Money));
    //qDebug()<<Information.WareHouse.Poison;

    Information.WareHouse.LalehCount = w.LalehCount;

    Information.WareHouse.KokabCount = w.KokabCount;

    Information.WareHouse.LiliumCount = w.LiliumCount;

    Information.WareHouse.MagnloiaCount = w.MagnloiaCount;

    Information.WareHouse.MaryamCount = w.MaryamCount;

    Information.WareHouse.NargesCount = w.NargesCount;

    Information.WareHouse.OrkidehCount = w.OrkidehCount;

    Information.WareHouse.SonbolCount = w.SonbolCount;

    Information.WareHouse.SeedNormalFlowerCount = w.SeedNormalFlowerCount;

    Information.WareHouse.SeedRareFlowerCount = w.SeedRareFlowerCount;

    Information.WareHouse.SeedDecorativeFlowerCount = w.SeedDecorativeFlowerCount;

    Information.WareHouse.DeletedFlowers = w.DeletedFlowers;
    ui->labelHazfNumber->setText(QString::number(Information.WareHouse.DeletedFlowers));

    Information.WareHouse.PlantedFlowers = w.PlantedFlowers;
    ui->labelKashteNumber->setText(QString::number(Information.WareHouse.PlantedFlowers));

    ifstream file4("../vase.txt", ios::in); //declare an ifstream file for read from file
    if (!file4.is_open())
    {
        exit(EXIT_FAILURE);
    }
    Vase v1;
    v1 = Information.VaseL[0];

    file4 >> v1.IsEmpty >> v1.IsOpen >> v1.IsGrown >> v1.IsPoisoned >> v1.IsWaterd >> v1.IsDamaged;
    Information.VaseL[0].IsEmpty = v1.IsEmpty;
    Information.VaseL[0].IsOpen = v1.IsOpen;
    Information.VaseL[0].IsGrown = v1.IsGrown;
    Information.VaseL[0].IsPoisoned = v1.IsPoisoned;
    Information.VaseL[0].IsWaterd = v1.IsWaterd;
    Information.VaseL[0].IsDamaged = v1.IsDamaged;
    Information.VaseL[0].Kind = v1.Kind;
    Information.VaseL[0].FlowerNum = v1.FlowerNum;
    Information.VaseL[0].HasSoil = v1.HasSoil;
    Information.VaseL[0].Osare = v1.Osare;
    //qDebug()<<Information.VaseL[0].IsOpen;

    ifstream file6("../vase2.txt", ios::in); //declare an ifstream file for read from file
    if (!file6.is_open())
    {
        exit(EXIT_FAILURE);
    }
    Vase v2;
    v2 = Information.VaseL[1];
    file6 >> v2.IsEmpty >> v2.IsOpen >> v2.IsGrown >> v2.IsPoisoned >> v2.IsWaterd >> v2.IsDamaged;
    Information.VaseL[1].IsEmpty = v2.IsEmpty;
    Information.VaseL[1].IsOpen = v2.IsOpen;
    Information.VaseL[1].IsGrown = v2.IsGrown;
    Information.VaseL[1].IsPoisoned = v2.IsPoisoned;
    Information.VaseL[1].IsWaterd = v2.IsWaterd;
    Information.VaseL[1].IsDamaged = v2.IsDamaged;
    Information.VaseL[1].Kind = v2.Kind;
    Information.VaseL[1].FlowerNum = v2.FlowerNum;
    Information.VaseL[1].HasSoil = v2.HasSoil;
    Information.VaseL[1].Osare = v2.Osare;
    //qDebug()<<Information.VaseL[1].IsOpen;

    ifstream file8("../vase3.txt", ios::in); //declare an ifstream file for read from file
    if (!file8.is_open())
    {
        exit(EXIT_FAILURE);
    }
    Vase v3;
    v3 = Information.VaseL[2];
    file6 >> v3.IsEmpty >> v3.IsOpen >> v3.IsGrown >> v3.IsPoisoned >> v3.IsWaterd >> v3.IsDamaged;
    Information.VaseL[2].IsEmpty = v3.IsEmpty;
    Information.VaseL[2].IsOpen = v3.IsOpen;
    Information.VaseL[2].IsGrown = v3.IsGrown;
    Information.VaseL[2].IsPoisoned = v3.IsPoisoned;
    Information.VaseL[2].IsWaterd = v3.IsWaterd;
    Information.VaseL[2].IsDamaged = v3.IsDamaged;
    Information.VaseL[2].Kind = v3.Kind;
    Information.VaseL[2].FlowerNum = v3.FlowerNum;
    Information.VaseL[2].HasSoil = v3.HasSoil;
    Information.VaseL[2].Osare = v3.Osare;
    //qDebug()<<Information.VaseL[2].IsOpen;

    ifstream file9("../vase4.txt", ios::in); //declare an ifstream file for read from file
    if (!file9.is_open())
    {
        exit(EXIT_FAILURE);
    }
    Vase v4;
    v4 = Information.VaseL[3];
    file6 >> v4.IsEmpty >> v4.IsOpen >> v4.IsGrown >> v4.IsPoisoned >> v4.IsWaterd >> v4.IsDamaged;
    Information.VaseL[3].IsEmpty = v4.IsEmpty;
    Information.VaseL[3].IsOpen = v4.IsOpen;
    Information.VaseL[3].IsGrown = v4.IsGrown;
    Information.VaseL[3].IsPoisoned = v4.IsPoisoned;
    Information.VaseL[3].IsWaterd = v4.IsWaterd;
    Information.VaseL[3].IsDamaged = v4.IsDamaged;
    Information.VaseL[3].Kind = v4.Kind;
    Information.VaseL[3].FlowerNum = v4.FlowerNum;
    Information.VaseL[3].HasSoil = v4.HasSoil;
    Information.VaseL[3].Osare = v4.Osare;
    //qDebug()<<Information.VaseL[3].IsOpen;

    ifstream file11("../vase5.txt", ios::in); //declare an ifstream file for read from file
    if (!file11.is_open())
    {
        exit(EXIT_FAILURE);
    }
    Vase v5;
    v5 = Information.VaseL[4];
    file11 >> v4.IsEmpty >> v4.IsOpen >> v5.IsGrown >> v5.IsPoisoned >> v5.IsWaterd >> v5.IsDamaged;
    Information.VaseL[4].IsEmpty = v5.IsEmpty;
    Information.VaseL[4].IsOpen = v5.IsOpen;
    Information.VaseL[4].IsGrown = v5.IsGrown;
    Information.VaseL[4].IsPoisoned = v5.IsPoisoned;
    Information.VaseL[4].IsWaterd = v5.IsWaterd;
    Information.VaseL[4].IsDamaged = v5.IsDamaged;
    Information.VaseL[4].Kind = v5.Kind;
    Information.VaseL[4].FlowerNum = v5.FlowerNum;
    Information.VaseL[4].HasSoil = v5.HasSoil;
    Information.VaseL[4].Osare = v5.Osare;
    //qDebug()<<Information.VaseL[4].IsOpen;
}
