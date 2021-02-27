#ifndef DIALOGFOROOSHGAH_H
#define DIALOGFOROOSHGAH_H

#include "information.hpp"
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

    void on_pushButtonBuyPoison_clicked();

    void on_pushButtonBuyAadi_clicked();

    void on_pushButtonBuyZinati_clicked();

    void on_pushButtonBuyNader_clicked();

    void on_pushButtonNargesWH_2_clicked();

    void on_pushButtonMagnoliaWH_clicked();

    void on_pushButtonLiliumWH_clicked();

    void on_pushButtonOrkideWH_clicked();

    void on_pushButtonKokabWH_clicked();

    void on_pushButtonLaleWH_clicked();

    void on_pushButtonMaryamWH_clicked();

    void on_pushButtonSonbolWH_clicked();

    void on_pushButtonNargesWH_clicked();

    void on_pushButtonDecorativeWH_clicked();

    void on_pushButtonRareWH_clicked();

    void on_pushButtonNormalwH_clicked();

private:
    Ui::Forooshgah *ui;
    Information * InfPtr = nullptr;
    void showMessage();
};

#endif // DIALOGFOROOSHGAH_H
