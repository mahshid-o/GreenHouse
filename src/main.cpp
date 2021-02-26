#include "mainwindow.hpp"
#include <QApplication>
#include <QFontDatabase>
#pragma execution_character_set("utf-8")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFontDatabase::addApplicationFont("./assets/fonts/Gandom.ttf");
    MainWindow w;
    w.show();

    return a.exec();
}

/*
    Green House Game
    contributers:
        Mahshid Oveisi
        Elnaz Sharafian
        Mohammad Moradi
*/
