#include "fourth.h"
#include "ui_fourth.h"

fourth::fourth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fourth)
{
    ui->setupUi(this);
}

fourth::~fourth()
{
    delete ui;
}
