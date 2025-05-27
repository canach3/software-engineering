#ifndef RENTBIKECOLLECTION_H
#define RENTBIKECOLLECTION_H

#include <string>
#include <vector>
#include "Bike.h"

using namespace std;

class RentedBikeCollection {
private:
    vector<Bike*> rentedBikes;

public:
    void addRentedBike(string bikeId, string bikeName);
    vector<Bike*> getRentedBikes();
};
#endif