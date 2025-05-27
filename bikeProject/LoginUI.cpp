#include "LoginUI.h"

LoginUI::LoginUI(Login* login) : login(login) {} // 생성자

/*
    함수 이름 : LoginUI::signIn()
    기능      : input file의 로그인 관련 내용 읽고, 결과를 output file로 출력
    전달 인자 : in  -> 입력 파일 스트림, out -> 출력 파일 스트림
    반환값    : 없음
*/
void LoginUI::signIn(ifstream& in, ofstream& out) {
    string id, password;
    in >> id >> password;

    login->loginUser(id, password);

    out << "2.1. 로그인 \n" << "> " << id << " " << password << "\n";
    out << "\n";
}