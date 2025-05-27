#include "AddBike.h"

AddBike::AddBike(BikeList* bikeList) : bikeList(bikeList) {} // 생성자

/*
    함수 이름 : AddBike::addNewBike()
    기능      : 자전거 리스트에 새 자전거 등록
    전달 인자 : bikeId   -> 자전거 id, bikeName -> 자전거 이름
    반환값    : 없음
*/
void AddBike::addNewBike(string bikeId, string bikeName) {
    bikeList->addNewBike(bikeId, bikeName);
}