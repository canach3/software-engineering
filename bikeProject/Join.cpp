#include "Join.h"
#include "Member.h"

Join::Join(UserList* userList) : userList(userList) {} // ������

/*
    �Լ� �̸� : Join::joinNewMember()
    ���      : �ű� ȸ���� �����Ͽ� ����� ����Ʈ�� �߰�
    ���� ���� : id -> ����� id, password -> ����� ��й�ȣ, phoneNumber -> ����� ��ȭ��ȣ
    ��ȯ��    : ����
*/
void Join::joinNewMember(string id, string password, string phoneNumber) {
    userList->addUser(new Member(id, password, phoneNumber));
}