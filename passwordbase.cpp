#include "passwordbase.h"
#include "ui_passwordbase.h"
#include "addpassword.h"
#include "removepassword.h"
#include "deleteaccount.h"
passwordbase::passwordbase(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::passwordbase)
{
    ui->setupUi(this);

    setWindowIcon(QIcon(":/Icons/PassManagerIcon.png"));
    setWindowTitle("Password Base");

}

passwordbase::~passwordbase()
{
    delete ui;
}

void passwordbase::welcomeUser()
{
    ui->WelcomeLabel->setText("Welcome: " + QString::fromUtf8(userName));
}

void passwordbase::on_AddButton_clicked()
{
    addpassword *apass = new addpassword();

    apass->show();
    apass->userName = userName;

}


void passwordbase::on_RemoveButton_clicked()
{
    removepassword *rpass = new removepassword();
    rpass->show();
    rpass->userName = userName;

}


void passwordbase::on_ShowButton_clicked()
{
    saveloaddata *showdata = new saveloaddata();
    showdata->loadpassword(userName);
    ui->PassTable->clear();
    int size = showdata->rsize;
    ui->PassTable->setRowCount(size+1);
    for(int i = 0; i < size; i++)
    {
        ui->PassTable->setItem(i, 0, new QTableWidgetItem(QString::fromUtf8(showdata->namers[i])));
        ui->PassTable->setItem(i, 1, new QTableWidgetItem(QString::fromUtf8(showdata->passws[i])));

    }



}





void passwordbase::on_DeleteAc_clicked()
{
    deleteaccount *deleteacc = new deleteaccount();
    deleteacc->show();
    deleteacc->username = userName;
    deleteacc->userpass = password;
    this->close();

}

