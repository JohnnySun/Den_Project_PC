#include "denmainwindow.h"
#include "ui_denmainwindow.h"
#include "read_rfcomm.h"
#include <QProcess>


DenMainWindow::DenMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DenMainWindow)
{
    ui->setupUi(this);
    //rfcomm0->rfcomm_start();
    rd_rfcomm = new QProcess(parent);
}

DenMainWindow::~DenMainWindow()
{
    delete ui;
}


void DenMainWindow::on_conn_button_clicked(bool checked)
{
    if(checked){
        rfcomm0->conn_rfcomm();
        ui->textEdit->append("test");
        ui->conn_button->setText(QString("disconn"));
        ui->conn_button->isChecked();
       rd_rfcomm->start("cat /etc/hosts");
} else {
        rfcomm0->discon_rfcomm();
        ui->textEdit->append("killed");
        ui->conn_button->setText(QString("conn"));
        ui->conn_button->isCheckable();

    }
}


void DenMainWindow::on_pushButton_clicked()
{
    QByteArray buffer(rd_rfcomm->readLine());
    QString line = buffer;
    ui->textEdit->append(line);
}
