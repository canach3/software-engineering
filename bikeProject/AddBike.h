#ifndef ADDBIKE_H
#define ADDBIKE_H

#include "BikeList.h"

class AddBike {
private:
    BikeList* bikeList;

public:
    AddBike(BikeList* bikeList); // ������
    void addNewBike(string bikeId, string bikeName); // ������ ����Ʈ�� �� ������ ���
};
#endif
