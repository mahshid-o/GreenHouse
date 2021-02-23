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

private:
    Ui::fourth *ui;
};

#endif // FOURTH_H
