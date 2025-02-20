#ifndef DELETEACCOUNT_H
#define DELETEACCOUNT_H

#include <QDialog>
#include "saveloaddata.h"
#include <iostream>
#include <string>
namespace Ui {
class deleteaccount;
}

class deleteaccount : public QDialog
{
    Q_OBJECT

public:
    explicit deleteaccount(QWidget *parent = nullptr);
    ~deleteaccount();

    std::string username;
    std::string userpass;

private slots:
    void on_DeleteAc_clicked();

private:
    Ui::deleteaccount *ui;
};

#endif // DELETEACCOUNT_H
