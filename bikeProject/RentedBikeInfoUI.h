#ifndef RENTEDBIKEINFOUI_H
#define RENTEDBIKEINFOUI_H
#include "RentedBikeInfo.h"
#include <fstream>

class RentedBikeInfoUI {
private:
    RentedBikeInfo* rentedBikeInfo; // control class

public:
    RentedBikeInfoUI(RentedBikeInfo* rentedBikeInfo); // ������
    void selectRentBikeInfo(ifstream& in, ofstream& out); //input file�� ������ �뿩���� ��ȸ ���� ���� �а�, ����� output file�� ���
};
#endif