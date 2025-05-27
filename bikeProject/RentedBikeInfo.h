#ifndef RENTEDBIKEINFO_H
#define RENTEDBIKEINFO_H

#include "Member.h"
#include <vector>
#include <string>

class RentedBikeInfo {
private:
    Member* member;

public:
    RentedBikeInfo(Member* member);
    vector<string> showMemberBikes();
};

#endif
