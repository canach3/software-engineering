#include "UserList.h"

/*
    함수 이름 : UserList::addUser()
    기능      : 회원가입된 사용자를 리스트에 추가함
    전달 인자 : user -> 추가할 사용자
    반환값    : 없음
*/
void UserList::addUser(User* user) {
    users.push_back(user);
}