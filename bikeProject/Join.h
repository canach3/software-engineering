#ifndef JOIN_H
#define JOIN_H
#include "UserList.h"

class Join {
private:
    UserList* userList; // ���Թ��� ȸ�����Ե� ����Ʈ

public:
    Join(UserList* userList); // ������
    void joinNewMember(string id, string password, string phoneNumber); // �ű� ȸ���� �����Ͽ� ����� ����Ʈ�� �߰�
};
#endif