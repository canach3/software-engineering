#include "RentedBikeInfo.h"

RentedBikeInfo::RentedBikeInfo(Member* member) : member(member) {} // ������

/*
    �Լ� �̸� : RentedBikeInfo::showMemberBikes()
    ���      : ȸ���� �뿩 ������ ��� ��ȯ
    ���� ���� : ����
    ��ȯ��    : string* - ������ ID �迭
*/
vector<string> RentedBikeInfo::showMemberBikes() {
    vector<string> result;
    vector<Bike*> bikes = member->getRentedBikeCollection()->getRentedBikes();

    for (Bike* bike : bikes) {
        string line = bike->getId() + " " + bike->getName();
        result.push_back(line);
    }

    return result;
}
