#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Forooshgah.h"
#include <QString>

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
    Forooshgah Forooshgah;
    Forooshgah.setModal(true);
    Forooshgah.exec();
}
