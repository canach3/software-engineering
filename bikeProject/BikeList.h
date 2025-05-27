#ifndef BIKELIST_H
#define BIKELIST_H

#include <vector>
#include <string>
#include "Bike.h"

class BikeList {
private:
    vector<Bike*> bikes;

public:
    void addNewBike(string bikeId, string bikeName); // 자전거 객체를 리스트에 추가함
    string findBikeName(string bikeId); // 주어진 id의 자전거 이름을 반환함
};
#endif