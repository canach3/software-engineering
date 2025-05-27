#include "BikeList.h"

/*
    �Լ� �̸� : BikeList::addNewBike()
    ���      : ������ ��ü�� ����Ʈ�� �߰���
    ���� ���� : bikeId -> ������ id, bikeName -> ������ �̸�
    ��ȯ��    : ����
*/
void BikeList::addNewBike(string bikeId, string bikeName) {
    bikes.push_back(new Bike(bikeId, bikeName));
}

/*
    �Լ� �̸� : BikeList::findBikeName()
    ���      : �־��� id�� ������ �̸��� ��ȯ��
    ���� ���� : bikeId -> ������ id
    ��ȯ��    : bikeName -> ������ �̸�, ������ ""
*/
string BikeList::findBikeName(string bikeId) {
    for (auto bike : bikes) {
        if (bike->getId() == bikeId) {
            return bike->getName();
        }
    }
    return "";
}
