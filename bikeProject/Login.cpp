#include "Login.h"

Login::Login(LoggedInUser* loggedInUser) : loggedinUser(loggedInUser) {} // 생성자

/*
    함수 이름 : Login::loginUser()
    기능      : 현재 로그인한 사용자 정보 저장
    전달 인자 : id -> 사용자 id, password  -> 사용자 비밀번호
    반환값    : 없음
*/
void Login::loginUser(string id, string password) {
    loggedinUser->setLoggedinUserId(id);
}
