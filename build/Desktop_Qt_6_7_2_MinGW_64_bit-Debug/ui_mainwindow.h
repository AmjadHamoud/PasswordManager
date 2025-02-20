/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
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
    QPushButton *SignUp_Button;
    QPushButton *EnterButton;
    QLineEdit *EnterPassword;
    QLabel *SignUp_Label;
    QLineEdit *EnterUsername;
    QLabel *PassLabel;
    QLabel *UNameLabel;
    QLabel *WarningText;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(486, 209);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"\n"
"	Background-color:#1B1464;\n"
"\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        SignUp_Button = new QPushButton(centralwidget);
        SignUp_Button->setObjectName("SignUp_Button");
        SignUp_Button->setGeometry(QRect(210, 115, 51, 24));
        SignUp_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border: none;\n"
"	color: Blue\n"
"}\n"
"QPushButton::Hover\n"
"{\n"
"	\n"
"	color: Grey;\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	border: none;\n"
"	color: Blue\n"
"}"));
        EnterButton = new QPushButton(centralwidget);
        EnterButton->setObjectName("EnterButton");
        EnterButton->setGeometry(QRect(370, 115, 80, 24));
        EnterButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"	background-color: #575fcf;\n"
"	border-bottom: 2px solid #3c40c6;\n"
"	\n"
"	border-radius: 4px;\n"
"}\n"
"QPushButton::Hover\n"
"{\n"
"	background-color : #3c40c6;\n"
"	border-bottom: 2px solid #575fcf;\n"
"	\n"
"	border-radius: 4px;\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #575fcf;\n"
"	border-bottom: 2px solid #3c40c6;\n"
"	\n"
"	border-radius: 4px;\n"
"}\n"
""));
        EnterPassword = new QLineEdit(centralwidget);
        EnterPassword->setObjectName("EnterPassword");
        EnterPassword->setGeometry(QRect(60, 75, 391, 24));
        EnterPassword->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	\n"
"	background-color: #30336b;\n"
"	border-bottom: 4px solid #686de0;\n"
"	\n"
"	border-radius: 5px;\n"
"	\n"
"}\n"
"QLineEdit::Focus\n"
"{\n"
"	background-color: #130f40;\n"
"	border-bottom: 4px solid #4834d4;\n"
"	\n"
"	border-radius: 5px;\n"
"	color: #95afc0;\n"
"}\n"
"QLineEdit::Hover\n"
"{\n"
"	background-color: #130f40;\n"
"	border-bottom: 4px solid #4834d4;\n"
"	\n"
"	border-radius: 5px;\n"
"}"));
        SignUp_Label = new QLabel(centralwidget);
        SignUp_Label->setObjectName("SignUp_Label");
        SignUp_Label->setGeometry(QRect(90, 120, 121, 16));
        EnterUsername = new QLineEdit(centralwidget);
        EnterUsername->setObjectName("EnterUsername");
        EnterUsername->setGeometry(QRect(60, 30, 391, 24));
        EnterUsername->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	\n"
"	background-color: #30336b;\n"
"	border-bottom: 4px solid #686de0;\n"
"	\n"
"	border-radius: 5px;\n"
"	\n"
"}\n"
"QLineEdit::Focus\n"
"{\n"
"	background-color: #130f40;\n"
"	border-bottom: 4px solid #4834d4;\n"
"	\n"
"	border-radius: 5px;\n"
"	color: #95afc0;\n"
"}\n"
"QLineEdit::Hover\n"
"{\n"
"	background-color: #130f40;\n"
"	border-bottom: 4px solid #4834d4;\n"
"	\n"
"	border-radius: 5px;\n"
"}"));
        PassLabel = new QLabel(centralwidget);
        PassLabel->setObjectName("PassLabel");
        PassLabel->setGeometry(QRect(70, 60, 111, 16));
        UNameLabel = new QLabel(centralwidget);
        UNameLabel->setObjectName("UNameLabel");
        UNameLabel->setGeometry(QRect(70, 10, 111, 16));
        WarningText = new QLabel(centralwidget);
        WarningText->setObjectName("WarningText");
        WarningText->setGeometry(QRect(210, 0, 231, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 486, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        SignUp_Button->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        EnterButton->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        SignUp_Label->setText(QCoreApplication::translate("MainWindow", "I Don't have Password: ", nullptr));
        PassLabel->setText(QCoreApplication::translate("MainWindow", "Enter Your Password", nullptr));
        UNameLabel->setText(QCoreApplication::translate("MainWindow", "Enter Your Name", nullptr));
        WarningText->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
