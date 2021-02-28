#ifndef GOLKHANE_H
#define GOLKHANE_H

#include <QDialog>

namespace Ui
{
    class golkhane;
}

class golkhane : public QDialog
{
    Q_OBJECT

public:
    explicit golkhane(QWidget *parent = 0);
    ~golkhane();

private:
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

    Ui::golkhane *ui;
};

#endif // GOLKHANE_H
