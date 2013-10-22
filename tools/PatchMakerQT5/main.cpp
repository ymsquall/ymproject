#include "PatchMakerWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PatchMakerWindow w;
    w.show();
    
    return a.exec();
}
