#ifndef LOGGEDINUSER_H
#define LOGGEDINUSER_H

#include "User.h"

class LoggedInUser {
private:
    User* user; // 로그인한 사용자

public:
    LoggedInUser();
    void setLoggedinUserId(string id); // 현재 로그인한 사용자 id 초기화
    string getLoggedinUserId(); // 현재 로그인한 사용자 id 반환
};

#endif