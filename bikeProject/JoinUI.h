#ifndef JOINUI_H
#define JOINUI_H
#include "Join.h"
#include <fstream>

class JoinUI {
private:
    Join* join; // control class

public:
    JoinUI(Join* join); // 생성자
    void signUp(ifstream& in, ofstream& out); //input file의 회원가입 관련 내용 읽고, 결과를 output file로 출력
};
#endif