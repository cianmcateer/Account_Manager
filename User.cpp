#include "User.h"

User::User(std::string name, int age, std::string email)
    : name(name), age(age), email(email) {}

User::~User() {}

std::ostream& operator<<(std::ostream& os, const User& u) {
    os << "NAME: " << u.name << " AGE: " << u.age
        << " EMAIL: " << u.email;
    return os;
}

bool operator<(const User& u1, const User& u2) {
    return u1.age < u2.age;
}
