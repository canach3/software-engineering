#include "UserList.h"

/*
    �Լ� �̸� : UserList::addUser()
    ���      : ȸ�����Ե� ����ڸ� ����Ʈ�� �߰���
    ���� ���� : user -> �߰��� �����
    ��ȯ��    : ����
*/
void UserList::addUser(User* user) {
    users.push_back(user);
}