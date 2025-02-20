/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QLineEdit *PasswordEdit;
    QPushButton *Confirm_Button;
    QLabel *Password_Label;
    QLineEdit *RePasswordEdit;
    QLabel *CheckPassword_Label;
    QLabel *UserNamelabel;
    QLineEdit *UserNameEdit;
    QLabel *Guideline;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(468, 212);
        signup->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"\n"
"	Background-color:#1B1464;\n"
"\n"
"}"));
        PasswordEdit = new QLineEdit(signup);
        PasswordEdit->setObjectName("PasswordEdit");
        PasswordEdit->setGeometry(QRect(50, 90, 381, 24));
        PasswordEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        Confirm_Button = new QPushButton(signup);
        Confirm_Button->setObjectName("Confirm_Button");
        Confirm_Button->setGeometry(QRect(350, 170, 80, 24));
        Confirm_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        Password_Label = new QLabel(signup);
        Password_Label->setObjectName("Password_Label");
        Password_Label->setGeometry(QRect(50, 70, 91, 16));
        RePasswordEdit = new QLineEdit(signup);
        RePasswordEdit->setObjectName("RePasswordEdit");
        RePasswordEdit->setGeometry(QRect(50, 140, 381, 24));
        RePasswordEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        CheckPassword_Label = new QLabel(signup);
        CheckPassword_Label->setObjectName("CheckPassword_Label");
        CheckPassword_Label->setGeometry(QRect(50, 120, 101, 16));
        UserNamelabel = new QLabel(signup);
        UserNamelabel->setObjectName("UserNamelabel");
        UserNamelabel->setGeometry(QRect(50, 20, 91, 16));
        UserNameEdit = new QLineEdit(signup);
        UserNameEdit->setObjectName("UserNameEdit");
        UserNameEdit->setGeometry(QRect(50, 40, 381, 24));
        UserNameEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        Guideline = new QLabel(signup);
        Guideline->setObjectName("Guideline");
        Guideline->setGeometry(QRect(50, 170, 291, 20));

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Dialog", nullptr));
        Confirm_Button->setText(QCoreApplication::translate("signup", "Confirm", nullptr));
        Password_Label->setText(QCoreApplication::translate("signup", "Enter Password", nullptr));
        CheckPassword_Label->setText(QCoreApplication::translate("signup", "Rewrite Password", nullptr));
        UserNamelabel->setText(QCoreApplication::translate("signup", "Enter Your Name", nullptr));
        Guideline->setText(QCoreApplication::translate("signup", "Enter Your Name and Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
