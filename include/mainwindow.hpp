#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "information.hpp"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    MainWindow * MainWindowPtr;
    Information Information;
    ~MainWindow();


private slots:
    void on_pushButtonSaveName_clicked();

    void on_pushButtonLaboratory_clicked();

    void on_pushButtonStore_clicked();

    void on_pushButtonGreenHouse_clicked();



    void on_pushButtonSave_clicked();

    void on_pushButtonLoad_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
