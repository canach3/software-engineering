#ifndef JOINUI_H
#define JOINUI_H
#include "Join.h"
#include <fstream>

class JoinUI {
private:
    Join* join; // control class

public:
    JoinUI(Join* join); // ������
    void signUp(ifstream& in, ofstream& out); //input file�� ȸ������ ���� ���� �а�, ����� output file�� ���
};
#endif