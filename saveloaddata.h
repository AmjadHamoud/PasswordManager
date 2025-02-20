#ifndef SAVELOADDATA_H
#define SAVELOADDATA_H

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <QtSql/QtSql>

class saveloaddata
{
public:
    saveloaddata();
    void saveuserdata(std::string user, std::string password);
    void loaduserdata(std::string user, std::string password);
    void savepassword(std::string user,std::string name, std::string password);
    void loadpassword(std::string user);
    void deletepassword(std::string user,std::string name);
    void deleteuser(std::string user, std::string password);


    bool bEnter = false;
    bool bError = false;
    bool bAddPass = true;
    bool bdeletepass = false;
    bool baccountdeleted = false;

    QSqlDatabase UserDataBases;
    QSqlDatabase UsersDataBase;


    std::vector<std::string> passws;
    std::vector<std::string> namers;

    int rsize = 1;

};



#endif // SAVELOADDATA_H
