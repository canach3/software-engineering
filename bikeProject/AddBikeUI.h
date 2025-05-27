// AddBikeUI.h
#ifndef ADDBIKEUI_H
#define ADDBIKEUI_H
#include "AddBike.h"
#include <fstream>

class AddBikeUI {
private:
    AddBike* addBike; // control class

public:
    AddBikeUI(AddBike* addBike); // ������
    void registerBike(ifstream& in, ofstream& out); //input file�� ������ ��� ���� ���� �а�, ����� output file�� ���
};
#endif