/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *throw_2;
    QLineEdit *sides_sum;
    QLineEdit *bet_sum;
    QLabel *balance;
    QLabel *dice;
    QLabel *dice_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(459, 339);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        throw_2 = new QPushButton(centralwidget);
        throw_2->setObjectName(QString::fromUtf8("throw_2"));
        throw_2->setGeometry(QRect(170, 270, 111, 24));
        sides_sum = new QLineEdit(centralwidget);
        sides_sum->setObjectName(QString::fromUtf8("sides_sum"));
        sides_sum->setGeometry(QRect(100, 230, 113, 24));
        bet_sum = new QLineEdit(centralwidget);
        bet_sum->setObjectName(QString::fromUtf8("bet_sum"));
        bet_sum->setGeometry(QRect(240, 230, 113, 24));
        balance = new QLabel(centralwidget);
        balance->setObjectName(QString::fromUtf8("balance"));
        balance->setGeometry(QRect(10, 10, 161, 31));
        QFont font;
        font.setPointSize(16);
        balance->setFont(font);
        balance->setTextFormat(Qt::AutoText);
        balance->setScaledContents(true);
        dice = new QLabel(centralwidget);
        dice->setObjectName(QString::fromUtf8("dice"));
        dice->setGeometry(QRect(50, 60, 141, 141));
        dice->setPixmap(QPixmap(QString::fromUtf8("cube.png")));
        dice->setScaledContents(true);
        dice->setWordWrap(false);
        dice->setMargin(0);
        dice->setOpenExternalLinks(false);
        dice_2 = new QLabel(centralwidget);
        dice_2->setObjectName(QString::fromUtf8("dice_2"));
        dice_2->setGeometry(QRect(260, 60, 141, 141));
        dice_2->setText(QString::fromUtf8(""));
        dice_2->setTextFormat(Qt::AutoText);
        dice_2->setPixmap(QPixmap(QString::fromUtf8("cube.png")));
        dice_2->setScaledContents(true);
        dice_2->setWordWrap(false);
        dice_2->setMargin(0);
        dice_2->setOpenExternalLinks(false);
        dice_2->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 459, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        throw_2->setText(QApplication::translate("MainWindow", "\320\237\321\226\320\264\320\272\320\270\320\275\321\203\321\202\320\270", nullptr));
        sides_sum->setInputMask(QString());
        sides_sum->setText(QString());
        sides_sum->setPlaceholderText(QApplication::translate("MainWindow", "\320\241\321\203\320\274\320\260 \320\263\321\200\320\260\320\275\320\265\320\271", nullptr));
        bet_sum->setInputMask(QString());
        bet_sum->setText(QString());
        bet_sum->setPlaceholderText(QApplication::translate("MainWindow", "\320\241\321\203\320\274\320\260 \321\201\321\202\320\260\320\262\320\272\320\270", nullptr));
        balance->setText(QApplication::translate("MainWindow", "\320\221\320\260\320\273\320\260\320\275\321\201: 0", nullptr));
        dice->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
