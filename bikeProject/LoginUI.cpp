#include "LoginUI.h"

LoginUI::LoginUI(Login* login) : login(login) {} // ������

/*
    �Լ� �̸� : LoginUI::signIn()
    ���      : input file�� �α��� ���� ���� �а�, ����� output file�� ���
    ���� ���� : in  -> �Է� ���� ��Ʈ��, out -> ��� ���� ��Ʈ��
    ��ȯ��    : ����
*/
void LoginUI::signIn(ifstream& in, ofstream& out) {
    string id, password;
    in >> id >> password;

    login->loginUser(id, password);

    out << "2.1. �α��� \n" << "> " << id << " " << password << "\n";
    out << "\n";
}