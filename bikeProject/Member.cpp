#include "Member.h"

Member::Member() : User("", ""), phoneNum("") {
    rentedBikeCollection = new RentedBikeCollection(); // 奄沙 持失切
}

Member::Member(string id, string password, string phoneNum) // 持失切
    : User(id, password), phoneNum(phoneNum) {
    rentedBikeCollection = new RentedBikeCollection();
}

RentedBikeCollection* Member::getRentedBikeCollection() {
    return rentedBikeCollection;
}