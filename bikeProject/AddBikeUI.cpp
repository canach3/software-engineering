#include "AddBikeUI.h"

AddBikeUI::AddBikeUI(AddBike* addBike) : addBike(addBike) {} // ������

/*
    �Լ� �̸� : AddBikeUI::registerBike()
    ��� : input file�� ������ ��� ���� ���� �а�, ����� output file�� ���
    ���� ���� : in  -> �Է� ���� ��Ʈ��, out -> ��� ���� ��Ʈ��
    ��ȯ�� : ����
*/
void AddBikeUI::registerBike(ifstream& in, ofstream& out) {
    string bikeId, bikeName;
    in >> bikeId >> bikeName;
    
    addBike->addNewBike(bikeId, bikeName);

    out << "3.1. ������ ��� \n" << "> " << bikeId << " " << bikeName << "\n";
    out << "\n";
}