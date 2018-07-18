#pragma once

#include <nlohmann/json.hpp>

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

    nlohmann::json to_json();
    friend std::ostream& operator<<(std::ostream& os, const User& u);
    friend bool operator<(const User& u1, const User& u2);
};
