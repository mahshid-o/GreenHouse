#ifndef AZMAYESHGAH_H
#define AZMAYESHGAH_H

#include <QDialog>

namespace Ui {
class azmayeshgah;
}

class azmayeshgah : public QDialog
{
    Q_OBJECT

public:
    explicit azmayeshgah(QWidget *parent = 0);
    ~azmayeshgah();

private:
    Ui::azmayeshgah *ui;
};

#endif // AZMAYESHGAH_H
