#include "charsheet.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CharSheet w;
    w.show();

    return a.exec();
}
