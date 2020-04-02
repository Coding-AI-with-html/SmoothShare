#include "smoothshare.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SmoothShare w;
    w.show();

    return a.exec();
}
