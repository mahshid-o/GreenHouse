#ifndef STORE2_H
#define STORE2_H

#include <QDialog>
#include "information.hpp"

namespace Ui {
class Store2;
}

class Store2 : public QDialog
{
    Q_OBJECT

public:
    explicit Store2(int, Information *, QWidget *parent = 0);
    ~Store2();

private slots:
    void on_pushButtonBuyAadi_clicked();

    void on_pushButtonBuyDecorative_clicked();

    void on_pushButtonBuyRare_clicked();

private:
    Ui::Store2 *ui;
    Information * InfPtr = nullptr;
    int NumV = 0;
};

#endif // STORE2_H
