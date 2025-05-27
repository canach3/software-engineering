#include "JoinUI.h"

JoinUI::JoinUI(Join* join) : join(join) {} // ������

/*
    �Լ� �̸� : JoinUI::signUp()    
    ��� : input file�� ȸ������ ���� ���� �а�, ����� output file�� ���
    ���� ���� : in  -> �Է� ���� ��Ʈ��, out -> ��� ���� ��Ʈ��
    ��ȯ�� : ����
*/
void JoinUI::signUp(ifstream& in, ofstream& out) {
    string id, password, phoneNumber; 
    in >> id >> password >> phoneNumber; 

    join->joinNewMember(id, password, phoneNumber);

    out << "1.1. ȸ������ \n" << "> " << id << " " << password << " " << phoneNumber << "\n";
    out << "\n";
}