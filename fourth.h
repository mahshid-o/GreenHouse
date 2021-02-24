#ifndef FOURTH_H
#define FOURTH_H

#include <QDialog>

namespace Ui {
class fourth;
}

class fourth : public QDialog
{
    Q_OBJECT

public:
    explicit fourth(QWidget *parent = 0);
    ~fourth();

private slots:
    void on_pushButtonOrkideT_clicked();

private:
    Ui::fourth *uiFourth;
};

#endif // FOURTH_H
