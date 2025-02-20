#ifndef REMOVEPASSWORD_H
#define REMOVEPASSWORD_H

#include <QDialog>
#include "saveloaddata.h"
#include <iostream>
#include <string>
namespace Ui {
class removepassword;
}

class removepassword : public QDialog
{
    Q_OBJECT

public:
    explicit removepassword(QWidget *parent = nullptr);
    ~removepassword();

    std::string userName;

private slots:




    void on_ConfirmButton_clicked();

    void on_Cancel_clicked();

private:
    Ui::removepassword *ui;
    saveloaddata *deletedata = new saveloaddata();
};

#endif // REMOVEPASSWORD_H
