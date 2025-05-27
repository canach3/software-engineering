#ifndef LOGOUT_H
#define LOGOUT_H

#include "LoggedInUser.h"

class Logout {
private:
    LoggedInUser* loggedinUser; // 현재 로그인한 사용자

public:
    Logout(LoggedInUser* loggedinUser); // 생성자
    string logoutUser(); // 현재 로그인된 사용자 로그아웃 처리
};
#endif