#include "Item.h"
#include "Item_Store.h"

Item_Store::Item_Store() {}

Item_Store::~Item_Store() {}

nlohmann::json Item_Store::to_json() {
    nlohmann::json json_array = nlohmann::json::array();

    for(auto& item : item_list) {
        json_array.push_back(item.to_json());
    }

    return json_array;
}

std::ostream& operator<<(std::ostream& os, const Item_Store& is) {
    for(const auto& items : is.item_list) {
        os << '\t' << items << std::endl;
    }
    return os;
}

void operator+=(Item_Store& items, Item& i) {
    items.item_list.push_back(i);
}

Item_Store& Item_Store::operator=(Item_Store& is) {
    item_list = is.item_list;
    return *this;
}
