#include "Login.h"

Login::Login(LoggedInUser* loggedInUser) : loggedinUser(loggedInUser) {} // ������

/*
    �Լ� �̸� : Login::loginUser()
    ���      : ���� �α����� ����� ���� ����
    ���� ���� : id -> ����� id, password  -> ����� ��й�ȣ
    ��ȯ��    : ����
*/
void Login::loginUser(string id, string password) {
    loggedinUser->setLoggedinUserId(id);
}
