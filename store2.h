#ifndef STORE2_H
#define STORE2_H

#include <QDialog>
#include "information.h"

namespace Ui {
class Store2;
}

class Store2 : public QDialog
{
    Q_OBJECT

public:
    explicit Store2(Information *, QWidget *parent = 0);
    ~Store2();

private slots:
    void on_pushButtonBuyAadi_clicked();

private:
    Ui::Store2 *ui;
    Information * InfPtr = nullptr;
};

#endif // STORE2_H
