#ifndef MEMBER_H
#define MEMBER_H
#include "User.h"
#include "RentedBikeCollection.h"

class Member : public User {
private:
    string phoneNum;
    RentedBikeCollection* rentedBikeCollection;

public:
    Member();
    Member(string id, string password, string phoneNum);
    RentedBikeCollection* getRentedBikeCollection();
};
#endif