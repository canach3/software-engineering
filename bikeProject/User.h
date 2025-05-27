#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

class User {
private:
    string id; // 사용자 id
    string password; // 사용자 비밀번호

public:
    User(string id, string password); // 생성자
    void setId(string id); // 사용자 id 초기화
    string getId(); // 사용자 id 반환
    string getPassword(); // 사용자 비밀번호 반환
};
#endif