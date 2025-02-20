#ifndef ADDPASSWORD_H
#define ADDPASSWORD_H

#include <QDialog>
#include <saveloaddata.h>

#include <iostream>
namespace Ui {
class addpassword;
}

class addpassword : public QDialog
{
    Q_OBJECT

public:
    explicit addpassword(QWidget *parent = nullptr);
    std::string password;
    std::string name;
    std::string userName;

    ~addpassword();

private slots:



    void on_addButton_clicked();

private:
    saveloaddata savefile;

    Ui::addpassword *ui;
};

#endif // ADDPASSWORD_H
