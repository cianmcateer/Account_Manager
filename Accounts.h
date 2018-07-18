#pragma once

#include <iostream>
#include <string>
#include <map>

#include <nlohmann/json.hpp>

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
    std::string to_json();
    friend void operator+=(Accounts& a, User& u);
};
