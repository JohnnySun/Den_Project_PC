#include <QApplication>
#include "denmainwindow.h"
#include "read_rfcomm.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DenMainWindow w;
    w.show();
    
    return a.exec();
}
