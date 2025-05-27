#ifndef USERLIST_H
#define USERLIST_H
#include "User.h"
#include <vector>

class UserList {
private:
    vector<User*> users; // 회원가입된 사용자 리스트

public:
    void addUser(User* user); // 회원가입된 사용자를 리스트에 추가함
};
#endif