#ifndef DIALOGFOROOSHGAH_H
#define DIALOGFOROOSHGAH_H

#include "information.h"
#include <QDialog>

namespace Ui {
class Forooshgah;
}

class Forooshgah : public QDialog
{
    Q_OBJECT

public:
    explicit Forooshgah(Information *, QWidget *parent = 0);
    Forooshgah(QWidget *parent = 0);
    ~Forooshgah();

private slots:
    void on_pushButtonBuyKhak_clicked();

    void on_pushButtonBuyAb_clicked();

    void on_pushButtonBuyOs_clicked();

private:
    Ui::Forooshgah *ui;
    Information * InfPtr = nullptr;
};

#endif // DIALOGFOROOSHGAH_H
