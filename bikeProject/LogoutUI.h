// LogoutUI.h
#ifndef LOGOUTUI_H
#define LOGOUTUI_H
#include "Logout.h"
#include <fstream>

class LogoutUI {
private:
    Logout* logout; // control class

public:
    LogoutUI(Logout* logout); // 생성자
    void selectLogout(ifstream& in, ofstream& out); //input file의 로그아웃 관련 내용 읽고, 결과를 output file로 출력
};
#endif