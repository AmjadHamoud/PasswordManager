#include "addpassword.h"
#include "ui_addpassword.h"

addpassword::addpassword(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addpassword)
{
    ui->setupUi(this);
    setWindowTitle("Add Password");
    setWindowIcon(QIcon(":/Icons/PassManagerIcon.png"));
}

addpassword::~addpassword()
{
    delete ui;
}



void addpassword::on_addButton_clicked()
{


    password = ui->passwordedit->text().toStdString();
    name = ui->nameedit->text().toStdString();
    savefile.savepassword(userName,name,password);
    if(savefile.bAddPass)
    {
        ui->DebugLabel->setText("Password is Added");
        ui->DebugLabel->setStyleSheet("Color: Green");
    }
    else
    {
        ui->DebugLabel->setText("This Is Already Available");
        ui->DebugLabel->setStyleSheet("Color: Red");
    }
    this->close();
}

