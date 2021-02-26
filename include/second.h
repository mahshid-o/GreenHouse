#ifndef SECOND_H
#define SECOND_H

#include <QDialog>
#include "information.h"

namespace Ui {
class second;
}

class second : public QDialog
{
    Q_OBJECT

public:
    explicit second(Information *, QWidget *parent = 0);

    ~second();

private slots:

    void on_openButton1_clicked();
    void on_openButton2_clicked();
    void on_openButton3_clicked();
    void on_openButton4_clicked();
    void on_openButton5_clicked();
    void on_selectButton1_clicked();
    void on_selectButton2_clicked();
    void on_selectButton3_clicked();
    void on_selectButton4_clicked();
    void on_selectButton5_clicked();
    void on_saleButton1_clicked();
    void on_saleButton2_clicked();
    void on_saleButton3_clicked();
    void on_saleButton4_clicked();
    void on_saleButton5_clicked();

private:
    Ui::second *ui;
    Information * InfPtr;
};

#endif // SECOND_H
