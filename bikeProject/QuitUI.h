#ifndef QUITUI_H
#define QUITUI_H
#include "Quit.h"
#include <fstream>

class QuitUI {
private:
    Quit* quit; // control class

public:
    QuitUI(Quit* quit); // 생성자
    void selectQuit(ifstream& in, ofstream& out); //input file의 시스템 종료 관련 내용 읽고, 결과를 output file로 출력
};
#endif