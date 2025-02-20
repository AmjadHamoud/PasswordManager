#include "signup.h"
#include "ui_signup.h"
#include "saveloaddata.h"
signup::signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);
    setWindowTitle("Sign Up");
    setWindowIcon(QIcon(":/Icons/PassManagerIcon.png"));
}

signup::~signup()
{
    delete ui;
}

void signup::on_Confirm_Button_clicked()
{
    saveloaddata a;
    username = ui->UserNameEdit->text().toStdString();
    password= ui->PasswordEdit->text().toStdString();
    repassword = ui->RePasswordEdit->text().toStdString();
    if(!username.empty() && !password.empty())
    {
        if(username.find(' ') != std::string::npos || password.find(' ') != std::string::npos)
        {
            ui->Guideline->setStyleSheet("color: red");
            ui->Guideline->setText("Your name or password most not contain any spaces");
        }
        else
        {



                if(password == repassword)
                {

                    a.saveuserdata(username, password);
                    if(a.bError)
                    {
                        ui->Guideline->setStyleSheet("color: red");
                        ui->Guideline->setText("user name or password already used try again!");
                    }
                    else
                    {
                        this->close();
                    }

                }
                else
                {
                    ui->Guideline->setStyleSheet("color: red");
                    ui->Guideline->setText("Your password is incorrect");
                }


        }
    }
    else
    {
        ui->Guideline->setStyleSheet("color: red");
        ui->Guideline->setText("Your name or password is empty");
    }



}

