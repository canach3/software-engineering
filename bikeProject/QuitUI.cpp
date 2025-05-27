#include "QuitUI.h"

QuitUI::QuitUI(Quit* quit) : quit(quit) {} // ������

/*
    �Լ� �̸� :  QuitUI::selectQuit()
    ��� : input file�� �ý��� ���� ���� ���� �а�, ����� output file�� ���
    ���� ���� : in  -> �Է� ���� ��Ʈ��, out -> ��� ���� ��Ʈ��
    ��ȯ�� : ����
*/
void QuitUI::selectQuit(ifstream& in, ofstream& out) {
    quit->quitSystem();

    out << "6.1. ����";
    out << "\n";
}