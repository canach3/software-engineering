#ifndef BIKELIST_H
#define BIKELIST_H

#include <vector>
#include <string>
#include "Bike.h"

class BikeList {
private:
    vector<Bike*> bikes;

public:
    void addNewBike(string bikeId, string bikeName); // ������ ��ü�� ����Ʈ�� �߰���
    string findBikeName(string bikeId); // �־��� id�� ������ �̸��� ��ȯ��
};
#endif