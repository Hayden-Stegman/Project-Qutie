#include "cutewindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CuteWindow w;
    w.show();
    return a.exec();
}
