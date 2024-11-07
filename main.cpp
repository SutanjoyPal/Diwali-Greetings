#include "mainwindow.h"

#include <QApplication>
#include <QPalette>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QPalette palette = w.palette();
    palette.setColor(QPalette::Window, QColor(230, 230, 250));
    w.setPalette(palette);
    w.setAutoFillBackground(true);
    w.show();
    return a.exec();
}

