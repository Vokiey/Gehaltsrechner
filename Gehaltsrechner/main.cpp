#include "mainwindow.h"
#include "gehalt.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    Gehalt g;
    MainWindow w(&g);
    w.setWindowTitle("Gegaltsrechner :-)");
    w.show();
    return a.exec();
}
