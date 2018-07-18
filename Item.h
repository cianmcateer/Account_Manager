#pragma once

#include <iostream>
#include <string>

#include <nlohmann/json.hpp>

class Item {
private:
    std::string name;
    std::string description;
    float weight;
    int size;

public:
    ~Item();
    Item(std::string name, std::string description, float weight, int size);

    nlohmann::json to_json();
    friend std::ostream& operator<<(std::ostream& os, const Item i);

};
