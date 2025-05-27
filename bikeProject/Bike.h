// Bike.h
#ifndef BIKE_H
#define BIKE_H
#include <string>
using namespace std;

class Bike {
private:
    string bikeId;
    string name;

public:
    Bike(string bikeId, string name); // »ý¼ºÀÚ
    string getId();
    string getName();
};

#endif
