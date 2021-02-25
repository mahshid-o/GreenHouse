#include "dialogforoushgah.h"
#include "ui_dialogforoushgah.h"

DialogForoushgah::DialogForoushgah(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogForoushgah)
{
    ui->setupUi(this);
}

DialogForoushgah::~DialogForoushgah()
{
    delete ui;
}
