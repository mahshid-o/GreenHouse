#include "laboratory.hpp"
#include "ui_laboratory.h"
#include "mainwindow.hpp"
#include <QMessageBox>

fourth::fourth(Information * in ,QWidget *parent) :
    QDialog(parent),
    uiFourth(new Ui::fourth)
{
    InfPtr = in;
    uiFourth->setupUi(this);
    this->setWindowTitle("آزمایشگاه");
}

fourth::~fourth()
{
    delete uiFourth;
}
void fourth::on_pushButtonOrkideT_clicked()
{
    InfPtr->WareHouse.OsOrkide++;
    InfPtr->WareHouse.Money -= 5000;

    QMessageBox msg;
    msg.setText("عصاره جادویی ارکیده ساخته شد و آماده استفاده است");
    msg.show();
    msg.exec();
}

void fourth::on_pushButtonLiliumT_clicked()
{
    InfPtr->WareHouse.OsLilium++;

    QMessageBox msg;
    msg.setText("عصاره جادویی لیلیوم ساخته شد و آماده استفاده است");
    msg.show();
    msg.exec();
}

void fourth::on_pushButtonMagnoliaT_clicked()
{
    InfPtr->WareHouse.OsMagnolia++;

    QMessageBox msg;
    msg.setText("عصاره جادویی مگنولیا ساخته شد و آماده استفاده است");
    msg.show();
    msg.exec();
}

void fourth::on_pushButtonOrkideT_2_clicked()
{
    this->close();
}
