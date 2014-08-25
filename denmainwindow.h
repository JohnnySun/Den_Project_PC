#ifndef DENMAINWINDOW_H
#define DENMAINWINDOW_H

#include <QMainWindow>
#include "read_rfcomm.h"


namespace Ui {
class DenMainWindow;
}

class DenMainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit DenMainWindow(QWidget *parent = 0);
    QWidget *myparent;
    ~DenMainWindow();
    
private slots:
    void on_conn_button_clicked(bool checked);


    void on_pushButton_clicked();

private:
    Ui::DenMainWindow *ui;
    read_rfcomm *rfcomm0;
    QProcess *rd_rfcomm;


};

#endif // DENMAINWINDOW_H
