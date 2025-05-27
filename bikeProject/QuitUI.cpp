#include "QuitUI.h"

QuitUI::QuitUI(Quit* quit) : quit(quit) {} // 생성자

/*
    함수 이름 :  QuitUI::selectQuit()
    기능 : input file의 시스템 종료 관련 내용 읽고, 결과를 output file로 출력
    전달 인자 : in  -> 입력 파일 스트림, out -> 출력 파일 스트림
    반환값 : 없음
*/
void QuitUI::selectQuit(ifstream& in, ofstream& out) {
    quit->quitSystem();

    out << "6.1. 종료";
    out << "\n";
}