#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

class User {
private:
    string id; // ����� id
    string password; // ����� ��й�ȣ

public:
    User(string id, string password); // ������
    void setId(string id); // ����� id �ʱ�ȭ
    string getId(); // ����� id ��ȯ
    string getPassword(); // ����� ��й�ȣ ��ȯ
};
#endif