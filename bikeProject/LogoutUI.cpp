#include "LogoutUI.h"

LogoutUI::LogoutUI(Logout* logout) : logout(logout) {} // ������

/*
    �Լ� �̸� : LogoutUI::selectLogout()
    ��� : input file�� �α׾ƿ� ���� ���� �а�, ����� output file�� ���
    ���� ���� : in  -> �Է� ���� ��Ʈ��, out -> ��� ���� ��Ʈ��
    ��ȯ�� : ����
*/
void LogoutUI::selectLogout(ifstream& in, ofstream& out) {
    string id = logout->logoutUser();

    out << "2.2. �α׾ƿ� \n" << "> " << id << "\n";
    out << "\n";
}