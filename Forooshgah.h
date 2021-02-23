#ifndef DIALOGFOROOSHGAH_H
#define DIALOGFOROOSHGAH_H

#include <QDialog>

namespace Ui {
class Forooshgah;
}

class Forooshgah : public QDialog
{
    Q_OBJECT

public:
    explicit Forooshgah(QWidget *parent = 0);
    ~Forooshgah();

private:
    Ui::Forooshgah *ui;
};

#endif // DIALOGFOROOSHGAH_H
