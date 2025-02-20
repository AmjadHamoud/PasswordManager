#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "saveloaddata.h"
#include <string>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
     saveloaddata database;

     std::string user;
     std::string password;

private slots:

    void on_SignUp_Button_clicked();

    void on_EnterButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
