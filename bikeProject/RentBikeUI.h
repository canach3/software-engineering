// RentBikeUI.h
#ifndef RENTBIKEUI_H
#define RENTBIKEUI_H
#include "RentBike.h"
#include <fstream>

class RentBikeUI {
private:
    RentBike* rentBike; // control class

public:
    RentBikeUI(RentBike* rentBike); // 생성자
    void chooseBike(ifstream& in, ofstream& out); //input file의 자전거 대여 관련 내용 읽고, 결과를 output file로 출력
};
#endif