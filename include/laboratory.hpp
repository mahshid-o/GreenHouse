#ifndef FOURTH_H
#define FOURTH_H

#include <QDialog>
#include "information.hpp"

namespace Ui
{
    class fourth;
}

class fourth : public QDialog
{
    Q_OBJECT

public:
    explicit fourth(Information *, QWidget *parent = 0);
    ~fourth();

private slots:

    void on_pushButtonOrkideT_clicked();

    void on_pushButtonLiliumT_clicked();

    void on_pushButtonMagnoliaT_clicked();

    void on_pushButtonOrkideT_2_clicked();

private:
    Ui::fourth *uiFourth;
    Information *InfPtr = nullptr;
};

#endif // FOURTH_H
