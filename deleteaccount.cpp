#include "deleteaccount.h"
#include "ui_deleteaccount.h"

deleteaccount::deleteaccount(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::deleteaccount)
{
    ui->setupUi(this);
    setWindowTitle("Delete Acount");
    setWindowIcon(QIcon(":/Icons/PassManagerIcon.png"));
}

deleteaccount::~deleteaccount()
{
    delete ui;
}

void deleteaccount::on_DeleteAc_clicked()
{
    ui->SureLabel->setText("Are You Sure To Delete " + QString::fromUtf8(username)+" Account");
    saveloaddata *delacc = new saveloaddata();
    std::string pass = ui->Passedit->text().toStdString();
    delacc->deleteuser(username,pass);
    if(delacc->baccountdeleted)
    {
        this->close();
    }
    else
    {
        ui->SureLabel->setText("Failed to Delete " + QString::fromUtf8(username)+" Account");
        ui->SureLabel->setStyleSheet("Color: Red");
    }
}

