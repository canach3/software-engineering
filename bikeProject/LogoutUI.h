// LogoutUI.h
#ifndef LOGOUTUI_H
#define LOGOUTUI_H
#include "Logout.h"
#include <fstream>

class LogoutUI {
private:
    Logout* logout; // control class

public:
    LogoutUI(Logout* logout); // ������
    void selectLogout(ifstream& in, ofstream& out); //input file�� �α׾ƿ� ���� ���� �а�, ����� output file�� ���
};
#endif