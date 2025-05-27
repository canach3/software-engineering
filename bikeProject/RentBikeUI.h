// RentBikeUI.h
#ifndef RENTBIKEUI_H
#define RENTBIKEUI_H
#include "RentBike.h"
#include <fstream>

class RentBikeUI {
private:
    RentBike* rentBike; // control class

public:
    RentBikeUI(RentBike* rentBike); // ������
    void chooseBike(ifstream& in, ofstream& out); //input file�� ������ �뿩 ���� ���� �а�, ����� output file�� ���
};
#endif