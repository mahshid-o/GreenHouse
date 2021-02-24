#include "fourth.h"
#include "ui_fourth.h"
#include "mainwindow.h"

fourth::fourth(QWidget *parent) :
    QDialog(parent),
    uiFourth(new Ui::fourth)
{
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
