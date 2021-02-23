#include "Forooshgah.h"
#include "ui_Forooshgah.h"

Forooshgah::Forooshgah(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Forooshgah)
{
    ui->setupUi(this);
}

Forooshgah::~Forooshgah()
{
    delete ui;
}
