#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Forooshgah.h"
#include <QString>
#include "second.h"
#include "fourth.h"
#include <iostream>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonSaveName_clicked()
{
    QString ProfileNameString = ui->lineEditProfileName->text();
}

void MainWindow::on_pushButtonLaboratory_clicked()
{
    fourth fourth;
    fourth.setModal(true);
    fourth.exec();
}

void MainWindow::on_pushButtonStore_clicked()
{
    Forooshgah Forooshgah;
    Forooshgah.setModal(true);
    Forooshgah.exec();
}

void MainWindow::on_pushButtonGreenHouse_clicked()
{
    second second;
    second.setModal(true);
    second.exec();
}
