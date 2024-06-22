#include "mainwindow.h"

#include <QApplication>
#include <QLabel>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("KUvent");
    MainWindow w;
    w.setWindowTitle(a.applicationName());
    w.show();
    return a.exec();
}
