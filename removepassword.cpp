#include "removepassword.h"
#include "ui_removepassword.h"

removepassword::removepassword(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::removepassword)
{
    ui->setupUi(this);
    ui->SureLabel->setText("enter password to delete");
    setWindowTitle("Remove Password");
    setWindowIcon(QIcon(":/Icons/PassManagerIcon.png"));
}

removepassword::~removepassword()
{
    delete ui;

}





void removepassword::on_ConfirmButton_clicked()
{

    std::string name = ui->EnterName->text().toStdString();

    deletedata->deletepassword(userName,name);
    if(deletedata->bdeletepass == false)
    {
        ui->SureLabel->setText("Wrong name or password");
        ui->SureLabel->setStyleSheet("Color: Red");
    }
    else
    {
        ui->SureLabel->setStyleSheet("Color: White");
        ui->SureLabel->setText("enter password to delete");
        this->close();
    }

}


void removepassword::on_Cancel_clicked()
{
    this->close();
}

