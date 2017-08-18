#include "glwidget.h"
#include <QApplication>
#include <QtGui>

int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    GLWidget w;
    w.show();

    return a.exec();
}

