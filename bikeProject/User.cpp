#include "User.h"
using namespace std;

User::User(string id, string password) : id(id), password(password) {} // ������

/*
    �Լ� �̸� : User::setId()
    ���      : ����� id �ʱ�ȭ
    ���� ���� : id -> ����� id
    ��ȯ��    : ����
*/
void User::setId(string id) { this->id = id; }

/*
    �Լ� �̸� : User::getId()
    ���      : ����� id ��ȯ
    ���� ���� : ����
    ��ȯ��    : ����
*/
string User::getId() { return id; }

/*
    �Լ� �̸� : User::getPassword()
    ���      : ����� ��й�ȣ ��ȯ
    ���� ���� : ����
    ��ȯ��    : ����
*/
string User::getPassword() { return password; }