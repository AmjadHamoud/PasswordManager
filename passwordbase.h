#ifndef PASSWORDBASE_H
#define PASSWORDBASE_H
#define MAX_LINE  100

#include <QDialog>
#include <saveloaddata.h>
#include <string>
#include <iostream>
#include <algorithm>
namespace Ui {
class passwordbase;
}

class passwordbase : public QDialog
{
    Q_OBJECT

public:
    explicit passwordbase(QWidget *parent = nullptr);
    ~passwordbase();
    std::string userName;
    std::string password;
    std::string namearr[MAX_LINE];
    std::string passarr[MAX_LINE];
    bool bShowed = false;
    void welcomeUser();
private slots:
    void on_AddButton_clicked();

    void on_RemoveButton_clicked();

    void on_ShowButton_clicked();


    void on_DeleteAc_clicked();

private:

    saveloaddata data;

    Ui::passwordbase *ui;
};

#endif // PASSWORDBASE_H
