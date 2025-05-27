#include "AddBike.h"

AddBike::AddBike(BikeList* bikeList) : bikeList(bikeList) {} // ������

/*
    �Լ� �̸� : AddBike::addNewBike()
    ���      : ������ ����Ʈ�� �� ������ ���
    ���� ���� : bikeId   -> ������ id, bikeName -> ������ �̸�
    ��ȯ��    : ����
*/
void AddBike::addNewBike(string bikeId, string bikeName) {
    bikeList->addNewBike(bikeId, bikeName);
}