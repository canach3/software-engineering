#include "User.h"
using namespace std;

User::User(string id, string password) : id(id), password(password) {} // 생성자

/*
    함수 이름 : User::setId()
    기능      : 사용자 id 초기화
    전달 인자 : id -> 사용자 id
    반환값    : 없음
*/
void User::setId(string id) { this->id = id; }

/*
    함수 이름 : User::getId()
    기능      : 사용자 id 반환
    전달 인자 : 없음
    반환값    : 없음
*/
string User::getId() { return id; }

/*
    함수 이름 : User::getPassword()
    기능      : 사용자 비밀번호 반환
    전달 인자 : 없음
    반환값    : 없음
*/
string User::getPassword() { return password; }