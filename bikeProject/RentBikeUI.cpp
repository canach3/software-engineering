#include "RentBikeUI.h"

RentBikeUI::RentBikeUI(RentBike* rentBike) : rentBike(rentBike) {} // 생성자

/*
    함수 이름 : RentBikeUI::chooseBike()
    기능 : input file의 자전거 대여 관련 내용 읽고, 결과를 output file로 출력
    전달 인자 : in  -> 입력 파일 스트림, out -> 출력 파일 스트림
    반환값 : 없음
*/
void RentBikeUI::chooseBike(ifstream& in, ofstream& out) {
    string bikeId;
    in >> bikeId;

    string bikeName = rentBike->startRentBike(bikeId);

    out << "4.1. 자전거 대여 \n" << "> " << bikeId << " " << bikeName << "\n";
    out << "\n";
}