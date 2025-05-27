#ifndef RENTBIKE_H
#define RENTBIKE_H

#include "Member.h"
#include "BikeList.h"

class RentBike {
private:
    Member* member;
    BikeList* bikeList;

public:
    RentBike(Member* member, BikeList* bikeList);
    string startRentBike(string bikeId);
};
#endif