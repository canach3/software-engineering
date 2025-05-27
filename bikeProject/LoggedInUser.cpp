#include "LoggedInUser.h"
using namespace std;

LoggedInUser::LoggedInUser() {  // �⺻ ������
    user = new User("", "");
}

/*
    �Լ� �̸� : LoggedInUser::setLoggedinUserId()
    ���      : ���� �α����� ����� id �ʱ�ȭ
    ���� ���� : id -> �α����� ����� id
    ��ȯ��    : ����
*/
void LoggedInUser::setLoggedinUserId(string id) {
    this->user->setId(id);
}

/*
    �Լ� �̸� : LoggedInUser::getLoggedinUserId()
    ���      : ���� �α����� ����� id ��ȯ
    ���� ���� : ����
    ��ȯ��    : id -> ���� �α����� ����� id
*/
string LoggedInUser::getLoggedinUserId() {
    string id = this->user->getId();
    return id;
}