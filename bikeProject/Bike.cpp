#include "Bike.h"

Bike::Bike(string bikeId, string name) : bikeId(bikeId), name(name) {} // ������

/*
    �Լ� �̸� : Bike::getId()
    ���      : ������ id�� ��ȯ��.
    ���� ���� : ����
    ��ȯ��    : bikeId -> ������ id
*/
string Bike::getId() { return bikeId; }

/*
    �Լ� �̸� : Bike::getName()
    ���      : ������ �̸��� ��ȯ��.
    ���� ���� : ����
    ��ȯ��    : name -> ������ �̸�
*/
string Bike::getName() { return name; }
