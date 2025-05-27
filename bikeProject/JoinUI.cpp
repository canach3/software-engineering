#include "JoinUI.h"

JoinUI::JoinUI(Join* join) : join(join) {} // 생성자

/*
    함수 이름 : JoinUI::signUp()    
    기능 : input file의 회원가입 관련 내용 읽고, 결과를 output file로 출력
    전달 인자 : in  -> 입력 파일 스트림, out -> 출력 파일 스트림
    반환값 : 없음
*/
void JoinUI::signUp(ifstream& in, ofstream& out) {
    string id, password, phoneNumber; 
    in >> id >> password >> phoneNumber; 

    join->joinNewMember(id, password, phoneNumber);

    out << "1.1. 회원가입 \n" << "> " << id << " " << password << " " << phoneNumber << "\n";
    out << "\n";
}