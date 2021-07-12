#include "mainwindow.h"
#include <QApplication>
#include <QTextEdit>
#include <QWidget>
#include <QDate>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
