#ifndef LOGIN_H
#define LOGIN_H

#include "LoggedInUser.h"

class Login {
private:
    LoggedInUser* loggedinUser; // ���� �α����� �����

public:
    Login(LoggedInUser* loggedinUser); // ������
    void loginUser(string id, string password); // ���� �α����� ����� ���� ����
};
#endif