#pragma once

#include <iostream>
#include <string>

class User {
private:
    std::string name;
    int age;
    std::string email;

public:
    ~User();
    User(std::string name, int age, std::string email);

    std::string to_json();
    friend std::ostream& operator<<(std::ostream& os, const User& u);
    friend bool operator<(const User& u1, const User& u2);
};
