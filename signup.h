#ifndef SIGNUP_H
#define SIGNUP_H

#include "ui_signup.h"
#include <QDialog>
#include <string>
namespace Ui {
class signup;
}

class signup : public QDialog
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);

    std::string username;
    std::string password;
    std::string repassword;

    ~signup();

private slots:
    void on_Confirm_Button_clicked();

private:
    Ui::signup *ui;
};

#endif // SIGNUP_H
