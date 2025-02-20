/********************************************************************************
** Form generated from reading UI file 'addpassword.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPASSWORD_H
#define UI_ADDPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addpassword
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *nameedit;
    QLineEdit *passwordedit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *namelabel;
    QLabel *passwordlabel;
    QPushButton *addButton;
    QLabel *DebugLabel;

    void setupUi(QDialog *addpassword)
    {
        if (addpassword->objectName().isEmpty())
            addpassword->setObjectName("addpassword");
        addpassword->resize(533, 137);
        addpassword->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"\n"
"	Background-color:#1B1464;\n"
"\n"
"}"));
        horizontalLayoutWidget = new QWidget(addpassword);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(50, 59, 421, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        nameedit = new QLineEdit(horizontalLayoutWidget);
        nameedit->setObjectName("nameedit");
        nameedit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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

        horizontalLayout->addWidget(nameedit);

        passwordedit = new QLineEdit(horizontalLayoutWidget);
        passwordedit->setObjectName("passwordedit");
        passwordedit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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

        horizontalLayout->addWidget(passwordedit);

        horizontalLayoutWidget_2 = new QWidget(addpassword);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(50, 30, 421, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        namelabel = new QLabel(horizontalLayoutWidget_2);
        namelabel->setObjectName("namelabel");

        horizontalLayout_2->addWidget(namelabel);

        passwordlabel = new QLabel(horizontalLayoutWidget_2);
        passwordlabel->setObjectName("passwordlabel");

        horizontalLayout_2->addWidget(passwordlabel);

        addButton = new QPushButton(addpassword);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(390, 90, 80, 24));
        addButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        DebugLabel = new QLabel(addpassword);
        DebugLabel->setObjectName("DebugLabel");
        DebugLabel->setGeometry(QRect(50, 100, 221, 16));

        retranslateUi(addpassword);

        QMetaObject::connectSlotsByName(addpassword);
    } // setupUi

    void retranslateUi(QDialog *addpassword)
    {
        addpassword->setWindowTitle(QCoreApplication::translate("addpassword", "Dialog", nullptr));
        namelabel->setText(QCoreApplication::translate("addpassword", "Name", nullptr));
        passwordlabel->setText(QCoreApplication::translate("addpassword", "                                                 Password", nullptr));
        addButton->setText(QCoreApplication::translate("addpassword", "Add", nullptr));
        DebugLabel->setText(QCoreApplication::translate("addpassword", "Enter Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addpassword: public Ui_addpassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPASSWORD_H
