#include "Accounts.h"

Accounts::Accounts() {}

Accounts::~Accounts() {}

void Accounts::add_item(User& user, Item& item) {
    accounts[user] += item;
}

std::ostream& operator<<(std::ostream& os, Accounts& a) {
    for(const auto& accounts : a.accounts) {
        os << accounts.first << std::endl;
        os << accounts.second << std::endl;
    }
    return os;
}

std::string Accounts::to_json() {
    nlohmann::json accounts_j;

    for(auto& account : accounts) {
        User u = account.first;
        nlohmann::json user_j(u.to_json());

        Item_Store is = account.second;
        user_j["items"] = is.to_json();

        accounts_j.push_back(user_j);
    }

    return accounts_j.dump();
}

void operator+=(Accounts& a, User& u) {
    a.accounts.insert(std::pair<User, Item_Store>(u, Item_Store()));
}
