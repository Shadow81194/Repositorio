#include "repositorio.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Repositorio w;
    w.show();
    return a.exec();
}
