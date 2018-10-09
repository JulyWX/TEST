/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QComboBox *CBox_Com;
    QLabel *label;
    QLabel *label_2;
    QPushButton *RecieveButton;
    QPushButton *RecieveClearButton;
    QPushButton *SendButton;
    QPushButton *SendClearButton;
    QPushButton *OpenUsartButton;
    QFrame *line;
    QTextBrowser *RecieveText;
    QTextEdit *SendText;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(699, 416);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 181, 351));
        CBox_Com = new QComboBox(groupBox);
        CBox_Com->setObjectName(QStringLiteral("CBox_Com"));
        CBox_Com->setGeometry(QRect(10, 320, 69, 22));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 81, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 200, 81, 21));
        RecieveButton = new QPushButton(groupBox);
        RecieveButton->setObjectName(QStringLiteral("RecieveButton"));
        RecieveButton->setGeometry(QRect(40, 50, 75, 23));
        RecieveClearButton = new QPushButton(groupBox);
        RecieveClearButton->setObjectName(QStringLiteral("RecieveClearButton"));
        RecieveClearButton->setGeometry(QRect(40, 90, 75, 23));
        SendButton = new QPushButton(groupBox);
        SendButton->setObjectName(QStringLiteral("SendButton"));
        SendButton->setGeometry(QRect(40, 230, 75, 23));
        SendClearButton = new QPushButton(groupBox);
        SendClearButton->setObjectName(QStringLiteral("SendClearButton"));
        SendClearButton->setGeometry(QRect(40, 270, 75, 23));
        OpenUsartButton = new QPushButton(groupBox);
        OpenUsartButton->setObjectName(QStringLiteral("OpenUsartButton"));
        OpenUsartButton->setGeometry(QRect(90, 320, 75, 23));
        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 170, 181, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        RecieveText = new QTextBrowser(centralWidget);
        RecieveText->setObjectName(QStringLiteral("RecieveText"));
        RecieveText->setGeometry(QRect(220, 10, 401, 161));
        SendText = new QTextEdit(centralWidget);
        SendText->setObjectName(QStringLiteral("SendText"));
        SendText->setGeometry(QRect(220, 190, 401, 151));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 699, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "USART", 0));
        label->setText(QApplication::translate("MainWindow", "RecieveData", 0));
        label_2->setText(QApplication::translate("MainWindow", "SendData", 0));
        RecieveButton->setText(QApplication::translate("MainWindow", "Recieve", 0));
        RecieveClearButton->setText(QApplication::translate("MainWindow", "Clear", 0));
        SendButton->setText(QApplication::translate("MainWindow", "Send", 0));
        SendClearButton->setText(QApplication::translate("MainWindow", "Clear", 0));
        OpenUsartButton->setText(QApplication::translate("MainWindow", "Open", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\260\203\350\257\225\345\212\251\346\211\213", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
