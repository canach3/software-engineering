#include "Logout.h"

Logout::Logout(LoggedInUser* loggedinUser) : loggedinUser(loggedinUser) {} // ������

/*
    �Լ� �̸� : Logout::logoutUser()
    ���      : ���� �α��ε� ����� �α׾ƿ� ó��
    ���� ���� : ����
    ��ȯ��    : id -> �α׾ƿ��� ����� id
*/
string Logout::logoutUser() {
    string id = loggedinUser->getLoggedinUserId();
    return id;
}