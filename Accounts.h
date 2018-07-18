#pragma once

#include <iostream>
#include <string>
#include <map>
#include "User.h"
#include "Item_Store.h"

class Accounts {
private:
    std::map<User, Item_Store> accounts;

public:
    Accounts();
    ~Accounts();

    friend std::ostream& operator<<(std::ostream& os, Accounts& a);

    void add_item(User& user, Item& item);

    friend void operator+=(Accounts& a, User& u);
};
