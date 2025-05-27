#ifndef MANAGER_H
#define MANAGER_H
#include "User.h"

class Manager : public User {
public:
    Manager(string id, string password);
};

#endif