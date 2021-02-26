#ifndef DIALOGFOROUSHGAH_H
#define DIALOGFOROUSHGAH_H

#include <QDialog>

namespace Ui {
class DialogForoushgah;
}

class DialogForoushgah : public QDialog
{
    Q_OBJECT

public:
    explicit DialogForoushgah(QWidget *parent = 0);
    ~DialogForoushgah();

private:
    Ui::DialogForoushgah *ui;
};

#endif // DIALOGFOROUSHGAH_H
