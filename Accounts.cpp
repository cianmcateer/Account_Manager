#include "Accounts.h"

Accounts::Accounts() {}

Accounts::~Accounts() {}

void Accounts::add_item(User& user, Item& item) {
    accounts[user] += item;
}


std::ostream& operator<<(std::ostream& os, Accounts& a) {
    for(const auto& accounts : a.accounts) {
        os << accounts.first << "\n\t"
            << accounts.second << std::endl;
    }
    return os;
}

void operator+=(Accounts& a, User& u) {
    a.accounts.insert(std::pair<User, Item_Store>(u, Item_Store()));
}
