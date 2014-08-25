#ifndef CONN_RFCOMM_H
#define CONN_RFCOMM_H

#include <QObject>

class QProcess;
class read_rfcomm : public QObject
{
    Q_OBJECT
public:
    explicit read_rfcomm(QObject *parent = 0);
    
signals:
    
public slots:
    int conn_rfcomm();
    int discon_rfcomm();

private:

    
};

#endif // CONN_RFCOMM_H
