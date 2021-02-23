#include "azmayeshgah.h"
#include "ui_azmayeshgah.h"

azmayeshgah::azmayeshgah(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::azmayeshgah)
{
    ui->setupUi(this);
}

azmayeshgah::~azmayeshgah()
{
    delete ui;
}
