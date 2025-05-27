#ifndef JOIN_H
#define JOIN_H
#include "UserList.h"

class Join {
private:
    UserList* userList; // 주입받은 회원가입된 리스트

public:
    Join(UserList* userList); // 생성자
    void joinNewMember(string id, string password, string phoneNumber); // 신규 회원을 생성하여 사용자 리스트에 추가
};
#endif