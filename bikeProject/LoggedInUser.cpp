#include "LoggedInUser.h"
using namespace std;

LoggedInUser::LoggedInUser() {  // 기본 생성자
    user = new User("", "");
}

/*
    함수 이름 : LoggedInUser::setLoggedinUserId()
    기능      : 현재 로그인한 사용자 id 초기화
    전달 인자 : id -> 로그인한 사용자 id
    반환값    : 없음
*/
void LoggedInUser::setLoggedinUserId(string id) {
    this->user->setId(id);
}

/*
    함수 이름 : LoggedInUser::getLoggedinUserId()
    기능      : 현재 로그인한 사용자 id 반환
    전달 인자 : 없음
    반환값    : id -> 현재 로그인한 사용자 id
*/
string LoggedInUser::getLoggedinUserId() {
    string id = this->user->getId();
    return id;
}