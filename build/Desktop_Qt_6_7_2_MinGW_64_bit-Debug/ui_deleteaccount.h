/********************************************************************************
** Form generated from reading UI file 'deleteaccount.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEACCOUNT_H
#define UI_DELETEACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deleteaccount
{
public:
    QLineEdit *Passedit;
    QLabel *passwordlabel;
    QPushButton *DeleteAc;
    QLabel *SureLabel;

    void setupUi(QDialog *deleteaccount)
    {
        if (deleteaccount->objectName().isEmpty())
            deleteaccount->setObjectName("deleteaccount");
        deleteaccount->resize(433, 179);
        deleteaccount->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"\n"
"	Background-color:#1B1464;\n"
"\n"
"}"));
        Passedit = new QLineEdit(deleteaccount);
        Passedit->setObjectName("Passedit");
        Passedit->setGeometry(QRect(50, 90, 321, 22));
        Passedit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        passwordlabel = new QLabel(deleteaccount);
        passwordlabel->setObjectName("passwordlabel");
        passwordlabel->setGeometry(QRect(50, 60, 61, 29));
        DeleteAc = new QPushButton(deleteaccount);
        DeleteAc->setObjectName("DeleteAc");
        DeleteAc->setGeometry(QRect(50, 120, 91, 24));
        DeleteAc->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        SureLabel = new QLabel(deleteaccount);
        SureLabel->setObjectName("SureLabel");
        SureLabel->setGeometry(QRect(60, 20, 301, 16));

        retranslateUi(deleteaccount);

        QMetaObject::connectSlotsByName(deleteaccount);
    } // setupUi

    void retranslateUi(QDialog *deleteaccount)
    {
        deleteaccount->setWindowTitle(QCoreApplication::translate("deleteaccount", "Dialog", nullptr));
        passwordlabel->setText(QCoreApplication::translate("deleteaccount", " Password", nullptr));
        DeleteAc->setText(QCoreApplication::translate("deleteaccount", "Delete Acount", nullptr));
        SureLabel->setText(QCoreApplication::translate("deleteaccount", "Are you Sure you want to delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteaccount: public Ui_deleteaccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEACCOUNT_H
