#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_RecieveButton_clicked();
    void ReadData1();

    void on_RecieveClearButton_clicked();

    void on_SendButton_clicked();

    void on_SendClearButton_clicked();

    void on_OpenUsartButton_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort *CurrentPort;
};

#endif // MAINWINDOW_H
