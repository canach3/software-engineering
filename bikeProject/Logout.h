#ifndef LOGOUT_H
#define LOGOUT_H

#include "LoggedInUser.h"

class Logout {
private:
    LoggedInUser* loggedinUser; // ���� �α����� �����

public:
    Logout(LoggedInUser* loggedinUser); // ������
    string logoutUser(); // ���� �α��ε� ����� �α׾ƿ� ó��
};
#endif