#ifndef LOGGEDINUSER_H
#define LOGGEDINUSER_H

#include "User.h"

class LoggedInUser {
private:
    User* user; // �α����� �����

public:
    LoggedInUser();
    void setLoggedinUserId(string id); // ���� �α����� ����� id �ʱ�ȭ
    string getLoggedinUserId(); // ���� �α����� ����� id ��ȯ
};

#endif