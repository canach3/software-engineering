#include "RentedBikeInfoUI.h"

RentedBikeInfoUI::RentedBikeInfoUI(RentedBikeInfo* info) : rentedBikeInfo(info) {} // 생성자

/*
    함수 이름 : RentedBikeInfoUI::selectRentBikeInfo()
    기능 : input file의 자전거 대여정보 조회 관련 내용 읽고, 결과를 output file로 출력
    전달 인자 : in  -> 입력 파일 스트림, out -> 출력 파일 스트림
    반환값 : 없음
*/
void RentedBikeInfoUI::selectRentBikeInfo(ifstream& in, ofstream& out) {
    vector<string> memberBikes = rentedBikeInfo->showMemberBikes();
    
    out << "5.1.자전거 대여 리스트 \n";
    for (const string& bikeInfo : memberBikes) {
        out << "> " << bikeInfo << "\n";
    }
    out << "\n";
}