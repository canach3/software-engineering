#ifndef LOGINUI_H
#define LOGINUI_H
#include "Login.h"
#include <fstream>

class LoginUI {
private:
    Login* login; // control class

public:
    LoginUI(Login* login); // ������
    void signIn(ifstream& in, ofstream& out); //input file�� �α��� ���� ���� �а�, ����� output file�� ���
};
#endif