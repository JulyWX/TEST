#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>


const char data1[50]={0x01,0x01,0x01};
const char data2[50]={0x02,0x02,0x02};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    CurrentPort = new QSerialPort(this);
    CurrentPort->setBaudRate(QSerialPort::Baud9600);
    CurrentPort->setDataBits(QSerialPort::Data8);
    CurrentPort->setParity(QSerialPort::NoParity);
    CurrentPort->setFlowControl(QSerialPort::NoFlowControl);
    CurrentPort->setStopBits(QSerialPort::OneStop);

    foreach(const QSerialPortInfo &SerialPortInfo,QSerialPortInfo ::availablePorts())
    {
        ui->CBox_Com->addItem(SerialPortInfo.portName());
    }

    CurrentPort->setPortName(ui->CBox_Com->currentText());
    if(CurrentPort->open(QIODevice ::ReadWrite))
        ui->statusBar->showMessage("Successful open port");
    else
        ui->statusBar->showMessage("can't open port");

    connect(CurrentPort,SIGNAL(readyRead()),this,SLOT(ReadData1()));
}

MainWindow::~MainWindow()
{
    CurrentPort->setPortName(ui->CBox_Com->currentText());
    CurrentPort->close();
    delete ui;
}

void MainWindow::on_RecieveButton_clicked()
{

}

void MainWindow::on_RecieveClearButton_clicked()
{
    ui->RecieveText->clear();
}

void MainWindow::on_SendButton_clicked()
{
//    QString text = ui->SendText->toPlainText();//读取SendText控件里面的数据存到text中
//    ui->RecieveText->setText(text);         //将字符串text中的数据发送到RecieveText中显示出来
//    ui->RecieveText->append(text);            //将字符串text中的数据发送到RecieveText中显示出来（追加）

//    sprintf(data1, "%s", text);
//    CurrentPort->write(&data1[0]);
    CurrentPort->write(ui->SendText->toPlainText().toLatin1());
}

void MainWindow::on_SendClearButton_clicked()
{
    ui->SendText->clear();
}

void MainWindow::on_OpenUsartButton_clicked()
{

}

void MainWindow::ReadData1()
{
    QByteArray dat = CurrentPort->readAll();
    ui->RecieveText->insertPlainText(dat.toHex());
//    ui->textEdit->insertPlainText(dat.toHex());
}
