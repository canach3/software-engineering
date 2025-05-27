#include "RentedBikeInfoUI.h"

RentedBikeInfoUI::RentedBikeInfoUI(RentedBikeInfo* info) : rentedBikeInfo(info) {} // ������

/*
    �Լ� �̸� : RentedBikeInfoUI::selectRentBikeInfo()
    ��� : input file�� ������ �뿩���� ��ȸ ���� ���� �а�, ����� output file�� ���
    ���� ���� : in  -> �Է� ���� ��Ʈ��, out -> ��� ���� ��Ʈ��
    ��ȯ�� : ����
*/
void RentedBikeInfoUI::selectRentBikeInfo(ifstream& in, ofstream& out) {
    vector<string> memberBikes = rentedBikeInfo->showMemberBikes();
    
    out << "5.1.������ �뿩 ����Ʈ \n";
    for (const string& bikeInfo : memberBikes) {
        out << "> " << bikeInfo << "\n";
    }
    out << "\n";
}