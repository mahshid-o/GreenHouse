#include "mainwindow.h"
#include <QApplication>
#include <QFontDatabase>
#pragma execution_character_set("utf-8")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFontDatabase::addApplicationFont("C:/Users/pc/Desktop/finalp3/GreenHouse/aviny.ttf");
    MainWindow w;
    w.show();

    return a.exec();
}
