#ifndef SECOND_H
#define SECOND_H

#include <QDialog>
#include <vector>
#include "information.hpp"
#include "vase.hpp"

namespace Ui
{
    class second;
}

class second : public QDialog
{
    Q_OBJECT

public:
    explicit second(Information *, QWidget *parent = 0);
    void SetEnable();
    void SetLabels();
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
    void on_openButton1_2_clicked();
    void on_Soil1_clicked();
    void on_Soil2_clicked();
    void on_Soil3_clicked();
    void on_Soil4_clicked();
    void on_Soil5_clicked();
    void on_Water1_clicked();
    void on_Water2_clicked();
    void on_Water3_clicked();
    void on_Water4_clicked();
    void on_Water5_clicked();
    void on_Poison1_clicked();
    void on_Poison2_clicked();
    void on_Poison3_clicked();
    void on_Poison4_clicked();
    void on_Poison5_clicked();

    void on_OsMagnolia1_clicked();

    void on_OsMagnolia2_clicked();

    void on_OsMagnolia3_clicked();

    void on_OsMagnolia4_clicked();

    void on_OsMagnolia5_clicked();

    void on_OsLilium1_clicked();

    void on_OsLilium2_clicked();

    void on_OsLilium3_clicked();

    void on_OsLilium4_clicked();

    void on_OsLilium5_clicked();

    void on_OsOrkide1_clicked();

    void on_OsOrkide3_clicked();

    void on_OsOrkide2_clicked();

    void on_OsOrkide4_clicked();

    void on_OsOrkide5_clicked();

    void on_DeleteFlower1_clicked();

    void on_DeleteFlower2_clicked();

    void on_DeleteFlower3_clicked();

    void on_DeleteFlower4_clicked();

    void on_DeleteFlower5_clicked();

private:
    Ui::second *ui;
    Information *InfPtr;
};

#endif // SECOND_H
