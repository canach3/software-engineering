#include "RentBike.h"
#include "RentedBikeCollection.h"

RentBike::RentBike(Member* member, BikeList* bikeList) // 생성자
    : member(member), bikeList(bikeList) {
}

/*
    함수 이름 : RentBike::startRentBike()
    기능      : 자전거를 대여하고 대여자에 등록
    전달 인자 : bikeId -> 대여할 자전거 id
    반환값    : bikeName -> 자전거 이름
*/
string RentBike::startRentBike(string bikeId) {
    string bikeName = bikeList->findBikeName(bikeId);

    if (bikeName != "") {
        RentedBikeCollection* rentedBikeCollection = member->getRentedBikeCollection();
        rentedBikeCollection->addRentedBike(bikeId, bikeName);
    }
    return bikeName;
}