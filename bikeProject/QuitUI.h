#ifndef QUITUI_H
#define QUITUI_H
#include "Quit.h"
#include <fstream>

class QuitUI {
private:
    Quit* quit; // control class

public:
    QuitUI(Quit* quit); // ������
    void selectQuit(ifstream& in, ofstream& out); //input file�� �ý��� ���� ���� ���� �а�, ����� output file�� ���
};
#endif