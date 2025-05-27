#include "Join.h"
#include "Member.h"

Join::Join(UserList* userList) : userList(userList) {} // 생성자

/*
    함수 이름 : Join::joinNewMember()
    기능      : 신규 회원을 생성하여 사용자 리스트에 추가
    전달 인자 : id -> 사용자 id, password -> 사용자 비밀번호, phoneNumber -> 사용자 전화번호
    반환값    : 없음
*/
void Join::joinNewMember(string id, string password, string phoneNumber) {
    userList->addUser(new Member(id, password, phoneNumber));
}