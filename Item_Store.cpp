#include "Item.h"
#include "Item_Store.h"

Item_Store::Item_Store() {}

Item_Store::~Item_Store() {}

std::string Item_Store::to_json() {
    return "";
}

std::ostream& operator<<(std::ostream& os, const Item_Store& is) {
    for(const auto& items : is.item_list) {
        os << items << std::endl;
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
