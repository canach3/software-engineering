#include "RentedBikeCollection.h"
#include <algorithm>

/*
    함수 이름 : RentedBikeCollection::addRentBike()
    기능      : 자전거 ID를 대여 목록에 추가함.
    전달 인자 : bikeId -> 대여된 자전거 ID
    반환값    : 없음
*/
void RentedBikeCollection::addRentedBike(string bikeId, string bikeName) {
    rentedBikes.push_back(new Bike(bikeId, bikeName));

    // bikeId 기준으로 오름차순 정렬
    sort(rentedBikes.begin(), rentedBikes.end(), [](Bike* a, Bike* b) {
        return a->getId() < b->getId();
        });
}

/*
    함수 이름 : RentBikeCollection::getRentedBikeIds()
    기능      : 대여된 자전거 ID 배열을 반환함.
    전달 인자 : size -> 대여된 자전거 수를 참조로 반환
    반환값    : 자전거 ID 배열 (string*)
*/
vector<Bike*> RentedBikeCollection::getRentedBikes() {
    return rentedBikes;
}