#ifndef USERLIST_H
#define USERLIST_H
#include "User.h"
#include <vector>

class UserList {
private:
    vector<User*> users; // ȸ�����Ե� ����� ����Ʈ

public:
    void addUser(User* user); // ȸ�����Ե� ����ڸ� ����Ʈ�� �߰���
};
#endif