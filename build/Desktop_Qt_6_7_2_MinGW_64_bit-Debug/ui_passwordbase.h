/********************************************************************************
** Form generated from reading UI file 'passwordbase.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDBASE_H
#define UI_PASSWORDBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_passwordbase
{
public:
    QPushButton *AddButton;
    QPushButton *ShowButton;
    QPushButton *RemoveButton;
    QTableWidget *PassTable;
    QPushButton *DeleteAc;
    QLabel *WelcomeLabel;

    void setupUi(QDialog *passwordbase)
    {
        if (passwordbase->objectName().isEmpty())
            passwordbase->setObjectName("passwordbase");
        passwordbase->resize(451, 261);
        passwordbase->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"\n"
"	Background-color:#1B1464;\n"
"\n"
"}"));
        AddButton = new QPushButton(passwordbase);
        AddButton->setObjectName("AddButton");
        AddButton->setGeometry(QRect(310, 50, 80, 24));
        AddButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        ShowButton = new QPushButton(passwordbase);
        ShowButton->setObjectName("ShowButton");
        ShowButton->setGeometry(QRect(310, 120, 80, 24));
        ShowButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        RemoveButton = new QPushButton(passwordbase);
        RemoveButton->setObjectName("RemoveButton");
        RemoveButton->setGeometry(QRect(310, 200, 80, 24));
        RemoveButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        PassTable = new QTableWidget(passwordbase);
        if (PassTable->columnCount() < 2)
            PassTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        PassTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        PassTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        PassTable->setObjectName("PassTable");
        PassTable->setGeometry(QRect(10, 40, 291, 192));
        DeleteAc = new QPushButton(passwordbase);
        DeleteAc->setObjectName("DeleteAc");
        DeleteAc->setGeometry(QRect(10, 10, 91, 24));
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
        WelcomeLabel = new QLabel(passwordbase);
        WelcomeLabel->setObjectName("WelcomeLabel");
        WelcomeLabel->setGeometry(QRect(170, 10, 171, 16));

        retranslateUi(passwordbase);

        QMetaObject::connectSlotsByName(passwordbase);
    } // setupUi

    void retranslateUi(QDialog *passwordbase)
    {
        passwordbase->setWindowTitle(QCoreApplication::translate("passwordbase", "Dialog", nullptr));
        AddButton->setText(QCoreApplication::translate("passwordbase", "Add", nullptr));
        ShowButton->setText(QCoreApplication::translate("passwordbase", "Show", nullptr));
        RemoveButton->setText(QCoreApplication::translate("passwordbase", "Remove", nullptr));
        QTableWidgetItem *___qtablewidgetitem = PassTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("passwordbase", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = PassTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("passwordbase", "Password", nullptr));
        DeleteAc->setText(QCoreApplication::translate("passwordbase", "Delete Acount", nullptr));
        WelcomeLabel->setText(QCoreApplication::translate("passwordbase", "Welcome: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class passwordbase: public Ui_passwordbase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDBASE_H
