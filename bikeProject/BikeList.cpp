#include "BikeList.h"

/*
    함수 이름 : BikeList::addNewBike()
    기능      : 자전거 객체를 리스트에 추가함
    전달 인자 : bikeId -> 자전거 id, bikeName -> 자전거 이름
    반환값    : 없음
*/
void BikeList::addNewBike(string bikeId, string bikeName) {
    bikes.push_back(new Bike(bikeId, bikeName));
}

/*
    함수 이름 : BikeList::findBikeName()
    기능      : 주어진 id의 자전거 이름을 반환함
    전달 인자 : bikeId -> 자전거 id
    반환값    : bikeName -> 자전거 이름, 없으면 ""
*/
string BikeList::findBikeName(string bikeId) {
    for (auto bike : bikes) {
        if (bike->getId() == bikeId) {
            return bike->getName();
        }
    }
    return "";
}
