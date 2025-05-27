#ifndef LOGINUI_H
#define LOGINUI_H
#include "Login.h"
#include <fstream>

class LoginUI {
private:
    Login* login; // control class

public:
    LoginUI(Login* login); // 생성자
    void signIn(ifstream& in, ofstream& out); //input file의 로그인 관련 내용 읽고, 결과를 output file로 출력
};
#endif