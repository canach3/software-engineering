#ifndef RENTEDBIKEINFOUI_H
#define RENTEDBIKEINFOUI_H
#include "RentedBikeInfo.h"
#include <fstream>

class RentedBikeInfoUI {
private:
    RentedBikeInfo* rentedBikeInfo; // control class

public:
    RentedBikeInfoUI(RentedBikeInfo* rentedBikeInfo); // 생성자
    void selectRentBikeInfo(ifstream& in, ofstream& out); //input file의 자전거 대여정보 조회 관련 내용 읽고, 결과를 output file로 출력
};
#endif