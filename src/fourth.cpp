#include "../include/fourth.h"
#include "ui_laboratory.h"
#include "../include/mainwindow.h"

fourth::fourth(Information * in ,QWidget *parent) :
    QDialog(parent),
    uiFourth(new Ui::fourth)
{
    InfPtr = in;
    uiFourth->setupUi(this);
}

fourth::~fourth()
{
    delete uiFourth;
}

//void fourth::on_pushButtonMagnoliaT_clicked()
//{

//}

//void fourth::on_pushButtonOrkideT_clicked()
//{

//}

void fourth::on_pushButtonOrkideT_clicked()
{
    InfPtr->WareHouse.OsOrkide++;
}

void fourth::on_pushButtonLiliumT_clicked()
{
    InfPtr->WareHouse.OsLilium++;
}

void fourth::on_pushButtonMagnoliaT_clicked()
{
    InfPtr->WareHouse.OsMagnolia++;
}
