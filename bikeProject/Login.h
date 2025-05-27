#ifndef LOGIN_H
#define LOGIN_H

#include "LoggedInUser.h"

class Login {
private:
    LoggedInUser* loggedinUser; // 현재 로그인한 사용자

public:
    Login(LoggedInUser* loggedinUser); // 생성자
    void loginUser(string id, string password); // 현재 로그인한 사용자 정보 저장
};
#endif