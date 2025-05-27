#include "RentedBikeCollection.h"
#include <algorithm>

/*
    �Լ� �̸� : RentedBikeCollection::addRentBike()
    ���      : ������ ID�� �뿩 ��Ͽ� �߰���.
    ���� ���� : bikeId -> �뿩�� ������ ID
    ��ȯ��    : ����
*/
void RentedBikeCollection::addRentedBike(string bikeId, string bikeName) {
    rentedBikes.push_back(new Bike(bikeId, bikeName));

    // bikeId �������� �������� ����
    sort(rentedBikes.begin(), rentedBikes.end(), [](Bike* a, Bike* b) {
        return a->getId() < b->getId();
        });
}

/*
    �Լ� �̸� : RentBikeCollection::getRentedBikeIds()
    ���      : �뿩�� ������ ID �迭�� ��ȯ��.
    ���� ���� : size -> �뿩�� ������ ���� ������ ��ȯ
    ��ȯ��    : ������ ID �迭 (string*)
*/
vector<Bike*> RentedBikeCollection::getRentedBikes() {
    return rentedBikes;
}