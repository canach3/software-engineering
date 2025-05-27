#include "RentedBikeInfo.h"

RentedBikeInfo::RentedBikeInfo(Member* member) : member(member) {} // 생성자

/*
    함수 이름 : RentedBikeInfo::showMemberBikes()
    기능      : 회원의 대여 자전거 목록 반환
    전달 인자 : 없음
    반환값    : string* - 자전거 ID 배열
*/
vector<string> RentedBikeInfo::showMemberBikes() {
    vector<string> result;
    vector<Bike*> bikes = member->getRentedBikeCollection()->getRentedBikes();

    for (Bike* bike : bikes) {
        string line = bike->getId() + " " + bike->getName();
        result.push_back(line);
    }

    return result;
}
