#ifndef ADDBIKE_H
#define ADDBIKE_H

#include "BikeList.h"

class AddBike {
private:
    BikeList* bikeList;

public:
    AddBike(BikeList* bikeList); // 생성자
    void addNewBike(string bikeId, string bikeName); // 자전거 리스트에 새 자전거 등록
};
#endif
