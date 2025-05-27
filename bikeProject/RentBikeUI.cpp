#include "RentBikeUI.h"

RentBikeUI::RentBikeUI(RentBike* rentBike) : rentBike(rentBike) {} // ������

/*
    �Լ� �̸� : RentBikeUI::chooseBike()
    ��� : input file�� ������ �뿩 ���� ���� �а�, ����� output file�� ���
    ���� ���� : in  -> �Է� ���� ��Ʈ��, out -> ��� ���� ��Ʈ��
    ��ȯ�� : ����
*/
void RentBikeUI::chooseBike(ifstream& in, ofstream& out) {
    string bikeId;
    in >> bikeId;

    string bikeName = rentBike->startRentBike(bikeId);

    out << "4.1. ������ �뿩 \n" << "> " << bikeId << " " << bikeName << "\n";
    out << "\n";
}