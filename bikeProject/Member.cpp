#include "Member.h"

Member::Member() : User("", ""), phoneNum("") {
    rentedBikeCollection = new RentedBikeCollection(); // �⺻ ������
}

Member::Member(string id, string password, string phoneNum) // ������
    : User(id, password), phoneNum(phoneNum) {
    rentedBikeCollection = new RentedBikeCollection();
}

RentedBikeCollection* Member::getRentedBikeCollection() {
    return rentedBikeCollection;
}