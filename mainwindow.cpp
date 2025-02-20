#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signup.h"
#include "passwordbase.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Login");
    setWindowIcon(QIcon(":/Icons/PassManagerIcon.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_SignUp_Button_clicked()
{
    signup *sign = new signup();
    sign->show();
}


void MainWindow::on_EnterButton_clicked()
{
    passwordbase *passbase = new passwordbase();
    user = ui->EnterUsername->text().toStdString();
    password = ui->EnterPassword->text().toStdString();
    database.loaduserdata(user,password);
    if(!user.empty() || !password.empty())
    {
        if(database.bEnter == true)
        {
           passbase->userName = user;
            passbase->password = password;
           passbase->welcomeUser();
           passbase->show();
            ui->WarningText->setText("Account is available");
           ui->WarningText->setStyleSheet("Color: Green");
        }
        else
        {
            ui->WarningText->setText("Username or Password is Unavailable");
            ui->WarningText->setStyleSheet("Color: Red");
        }
    }
    else
    {
        ui->WarningText->setText("Please Enter your name and your password");
        ui->WarningText->setStyleSheet("Color: Red");
    }


}

