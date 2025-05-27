#include "Logout.h"

Logout::Logout(LoggedInUser* loggedinUser) : loggedinUser(loggedinUser) {} // 생성자

/*
    함수 이름 : Logout::logoutUser()
    기능      : 현재 로그인된 사용자 로그아웃 처리
    전달 인자 : 없음
    반환값    : id -> 로그아웃한 사용자 id
*/
string Logout::logoutUser() {
    string id = loggedinUser->getLoggedinUserId();
    return id;
}