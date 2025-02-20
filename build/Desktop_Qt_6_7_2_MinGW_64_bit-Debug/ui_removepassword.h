/********************************************************************************
** Form generated from reading UI file 'removepassword.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEPASSWORD_H
#define UI_REMOVEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_removepassword
{
public:
    QLabel *SureLabel;
    QPushButton *ConfirmButton;
    QPushButton *Cancel;
    QLineEdit *EnterName;
    QLabel *label;

    void setupUi(QDialog *removepassword)
    {
        if (removepassword->objectName().isEmpty())
            removepassword->setObjectName("removepassword");
        removepassword->resize(461, 216);
        removepassword->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"\n"
"	Background-color:#1B1464;\n"
"\n"
"}"));
        SureLabel = new QLabel(removepassword);
        SureLabel->setObjectName("SureLabel");
        SureLabel->setGeometry(QRect(30, 50, 261, 21));
        ConfirmButton = new QPushButton(removepassword);
        ConfirmButton->setObjectName("ConfirmButton");
        ConfirmButton->setGeometry(QRect(20, 160, 80, 24));
        ConfirmButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        Cancel = new QPushButton(removepassword);
        Cancel->setObjectName("Cancel");
        Cancel->setGeometry(QRect(150, 160, 80, 24));
        Cancel->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        EnterName = new QLineEdit(removepassword);
        EnterName->setObjectName("EnterName");
        EnterName->setGeometry(QRect(20, 100, 391, 24));
        EnterName->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        label = new QLabel(removepassword);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 80, 49, 16));

        retranslateUi(removepassword);

        QMetaObject::connectSlotsByName(removepassword);
    } // setupUi

    void retranslateUi(QDialog *removepassword)
    {
        removepassword->setWindowTitle(QCoreApplication::translate("removepassword", "Dialog", nullptr));
        SureLabel->setText(QCoreApplication::translate("removepassword", "Are you sure you want to delete this password", nullptr));
        ConfirmButton->setText(QCoreApplication::translate("removepassword", "Confirm", nullptr));
        Cancel->setText(QCoreApplication::translate("removepassword", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("removepassword", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class removepassword: public Ui_removepassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEPASSWORD_H
