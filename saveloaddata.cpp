#include "saveloaddata.h"


std::string userfile;

saveloaddata::saveloaddata()
{
    std::filesystem::create_directory("userdata");


}

void saveloaddata::saveuserdata(std::string user, std::string password)
{
    bError = false;

    UsersDataBase = QSqlDatabase::addDatabase("QSQLITE");
    UsersDataBase.setDatabaseName(QCoreApplication::applicationDirPath()+"/UsersBase.db");
    UsersDataBase.open();
    QSqlQuery SetDataTable(UsersDataBase);
    SetDataTable.prepare("CREATE TABLE IF NOT EXISTS Users(Names text not null primary key, Passwords text not null);");
    SetDataTable.exec();

    QSqlDatabase::database().commit();
    UsersDataBase.close();

    UsersDataBase.open();
    QSqlDatabase::database().transaction();
    QSqlQuery QueryInsData(UsersDataBase);

    QueryInsData.prepare("INSERT INTO Users(Names,Passwords) VALUES(:Names,:Passwords)");
    QueryInsData.bindValue(":Names", QString::fromUtf8(user));
    QueryInsData.bindValue(":Passwords", QString::fromUtf8(password));

    if(QueryInsData.exec())
    {
        bError = false;
    }
    else
    {
        bError = true;
    }


    QSqlDatabase::database().commit();
    UsersDataBase.close();



}

void saveloaddata::loaduserdata(std::string user, std::string password)
{
    bEnter = false;

    UsersDataBase = QSqlDatabase::addDatabase("QSQLITE");
    UsersDataBase.setDatabaseName(QCoreApplication::applicationDirPath()+"/UsersBase.db");
    UsersDataBase.open();
    QSqlDatabase::database().transaction();
    QSqlQuery SetDataTable(UsersDataBase);
    SetDataTable.prepare("CREATE TABLE IF NOT EXISTS Users(Names text not null primary key, Passwords text not null);");
    SetDataTable.exec();


    std::string checkpassword;
    std::string checkname;
    QSqlQuery TableValue(UsersDataBase);
    TableValue.prepare("SELECT Names, Passwords FROM Users WHERE Names = :Names");
    TableValue.bindValue(":Names", QString::fromUtf8(user));
    if(TableValue.exec())
    {

        while(TableValue.next())
        {

            checkname = TableValue.value(0).toString().toStdString();
            checkpassword = TableValue.value(1).toString().toStdString();

        }
    }



    if(password == checkpassword)
    {
        bEnter = true;
    }
    else
    {
        bEnter = false;
    }

    QSqlDatabase::database().commit();
    UsersDataBase.close();

}

void saveloaddata::savepassword(std::string user,std::string name, std::string password)
{


    UserDataBases = QSqlDatabase::addDatabase("QSQLITE");
    UserDataBases.setDatabaseName(QCoreApplication::applicationDirPath()+"/UserBases.db");
    UserDataBases.open();
    QSqlDatabase::database().transaction();
    QSqlQuery SetDataTable(UserDataBases);
    QString auser = QString::fromUtf8(user);
    SetDataTable.prepare("CREATE TABLE IF NOT EXISTS "+auser+"(Name text not null primary key, Passwords text not null);");
    SetDataTable.exec();

    QSqlDatabase::database().commit();
    UserDataBases.close();

    UserDataBases.open();
    QSqlDatabase::database().transaction();
    QSqlQuery QueryInsData(UserDataBases);

    QueryInsData.prepare("INSERT INTO "+auser+"(Name,Passwords) VALUES(:Name,:Passwords)");
    QueryInsData.bindValue(":Name", QString::fromUtf8(name));
    QueryInsData.bindValue(":Passwords", QString::fromUtf8(password));

    if(QueryInsData.exec())
    {
        bAddPass = true;
    }
    else
    {
        bAddPass = false;
    }

    QSqlDatabase::database().commit();
    UserDataBases.close();



}

void saveloaddata::loadpassword(std::string user)
{

    UserDataBases = QSqlDatabase::addDatabase("QSQLITE");
    UserDataBases.setDatabaseName(QCoreApplication::applicationDirPath()+"/UserBases.db");
    UserDataBases.open();
    QSqlDatabase::database().transaction();
    QSqlQuery SetDataTable(UserDataBases);
    QString auser = QString::fromUtf8(user);
    SetDataTable.prepare("CREATE TABLE IF NOT EXISTS "+auser+"(Name text not null primary key, Passwords text not null);");
    SetDataTable.exec();

    QSqlDatabase::database().commit();
    UserDataBases.close();


    UserDataBases.open();
    QSqlQuery TableSize(UserDataBases);
    TableSize.prepare("SELECT COUNT(*) FROM "+auser);
    if(TableSize.exec())
    {
        if(TableSize.next())
        {
            rsize = TableSize.value(0).toInt();
        }
    }

    QSqlQuery TableValue(UserDataBases);
    TableValue.prepare("SELECT * FROM "+auser);
    if(TableValue.exec())
    {

        while(TableValue.next())
        {

            namers.push_back(TableValue.value("Name").toString().toStdString());
            passws.push_back( TableValue.value("Passwords").toString().toStdString());

        }
    }

    QSqlDatabase::database().commit();
    UserDataBases.close();


}

void saveloaddata::deletepassword(std::string user, std::string name)
{
    bdeletepass = false;
    UserDataBases = QSqlDatabase::addDatabase("QSQLITE");
    UserDataBases.setDatabaseName(QCoreApplication::applicationDirPath()+"/UserBases.db");
    UserDataBases.open();
    QSqlDatabase::database().transaction();
    QSqlQuery SetDataTable(UserDataBases);
    QString auser = QString::fromUtf8(user);
    SetDataTable.prepare("CREATE TABLE IF NOT EXISTS "+auser+"(Name text not null primary key, Passwords text not null);");
    SetDataTable.exec();

    QSqlDatabase::database().commit();
    UserDataBases.close();

    UserDataBases.open();
    QSqlDatabase::database().transaction();
    QSqlQuery DeleteValue(UserDataBases);
    DeleteValue.prepare("DELETE FROM "+auser+" WHERE Name=:Name");
    DeleteValue.bindValue(":Name", QString::fromUtf8(name));
    //DeleteValue.bindValue(":Passwords", QString::fromUtf8(password));
    if(DeleteValue.exec())
    {
        bdeletepass = true;
    }
    else
    {
        bdeletepass = false;
    }


    QSqlDatabase::database().commit();
    UserDataBases.close();
}

void saveloaddata::deleteuser(std::string user, std::string password)
{
    baccountdeleted = false;
    loaduserdata(user,password);
    if(bEnter == true)
    {
        bdeletepass = false;

        UsersDataBase = QSqlDatabase::addDatabase("QSQLITE");
        UsersDataBase.setDatabaseName(QCoreApplication::applicationDirPath()+"/UsersBase.db");
        UsersDataBase.open();
        QSqlDatabase::database().transaction();
        QSqlQuery SetDataTable(UsersDataBase);
        SetDataTable.prepare("CREATE TABLE IF NOT EXISTS Users(Names text not null primary key, Passwords text not null);");
        SetDataTable.exec();

        QSqlDatabase::database().commit();
        UsersDataBase.close();

        UsersDataBase.open();
        QSqlDatabase::database().transaction();
        QSqlQuery DeleteValue(UsersDataBase);
        DeleteValue.prepare("DELETE FROM Users WHERE Names=:Names");
        DeleteValue.bindValue(":Names", QString::fromUtf8(user));
        //DeleteValue.bindValue(":Passwords", QString::fromUtf8(password));


        if(DeleteValue.exec())
        {
            bdeletepass = true;
        }
        else
        {
            bdeletepass = false;
        }


        QSqlDatabase::database().commit();
        UsersDataBase.close();
    }
    else
    {

    }
    if(bEnter == true && bdeletepass == true)
    {
        UserDataBases = QSqlDatabase::addDatabase("QSQLITE");
        UserDataBases.setDatabaseName(QCoreApplication::applicationDirPath()+"/UserBases.db");
        UserDataBases.open();
        QSqlDatabase::database().transaction();
        QSqlQuery DropDataTable(UserDataBases);
        DropDataTable.prepare("DROP TABLE " + QString::fromUtf8(user));
        if(DropDataTable.exec())
        {
            baccountdeleted = true;
        }
        else
        {
            baccountdeleted = false;
        }
        QSqlDatabase::database().commit();
        UserDataBases.close();
    }
    bEnter = false;
    bdeletepass = false;


}
