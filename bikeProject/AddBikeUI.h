// AddBikeUI.h
#ifndef ADDBIKEUI_H
#define ADDBIKEUI_H
#include "AddBike.h"
#include <fstream>

class AddBikeUI {
private:
    AddBike* addBike; // control class

public:
    AddBikeUI(AddBike* addBike); // 생성자
    void registerBike(ifstream& in, ofstream& out); //input file의 자전거 등록 관련 내용 읽고, 결과를 output file로 출력
};
#endif