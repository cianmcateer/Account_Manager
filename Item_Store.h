#pragma once

#include <iostream>
#include <string>
#include <vector>

#include <nlohmann/json.hpp>

#include "Item.h"

class Item_Store {
private:
    std::vector<Item> item_list;

public:
    Item_Store();
    ~Item_Store();


    nlohmann::json to_json();

    friend std::ostream& operator<<(std::ostream& os, const Item_Store& is);
    friend void operator+=(Item_Store& items, Item& i);
    Item_Store& operator=(Item_Store& is);
};
