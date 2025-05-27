#include "RentBike.h"
#include "RentedBikeCollection.h"

RentBike::RentBike(Member* member, BikeList* bikeList) // ������
    : member(member), bikeList(bikeList) {
}

/*
    �Լ� �̸� : RentBike::startRentBike()
    ���      : �����Ÿ� �뿩�ϰ� �뿩�ڿ� ���
    ���� ���� : bikeId -> �뿩�� ������ id
    ��ȯ��    : bikeName -> ������ �̸�
*/
string RentBike::startRentBike(string bikeId) {
    string bikeName = bikeList->findBikeName(bikeId);

    if (bikeName != "") {
        RentedBikeCollection* rentedBikeCollection = member->getRentedBikeCollection();
        rentedBikeCollection->addRentedBike(bikeId, bikeName);
    }
    return bikeName;
}