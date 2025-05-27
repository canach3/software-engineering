#include "AddBikeUI.h"

AddBikeUI::AddBikeUI(AddBike* addBike) : addBike(addBike) {} // 생성자

/*
    함수 이름 : AddBikeUI::registerBike()
    기능 : input file의 자전거 등록 관련 내용 읽고, 결과를 output file로 출력
    전달 인자 : in  -> 입력 파일 스트림, out -> 출력 파일 스트림
    반환값 : 없음
*/
void AddBikeUI::registerBike(ifstream& in, ofstream& out) {
    string bikeId, bikeName;
    in >> bikeId >> bikeName;
    
    addBike->addNewBike(bikeId, bikeName);

    out << "3.1. 자전거 등록 \n" << "> " << bikeId << " " << bikeName << "\n";
    out << "\n";
}