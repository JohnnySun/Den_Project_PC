#include "read_rfcomm.h"

read_rfcomm::read_rfcomm(QObject *parent) :
    QObject(parent)
{
}
int read_rfcomm::conn_rfcomm()
{
        system("rfcomm connect 0 98:D3:31:30:0D:E2 1 &");
        return 0;
}

int read_rfcomm::discon_rfcomm()
{
    system("killall rfcomm");
    return 0;
}


