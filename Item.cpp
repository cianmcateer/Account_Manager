#include "Item.h"

Item::~Item() {}

Item::Item(std::string name, std::string description, float weight, int size)
    : name(name), description(description), weight(weight), size(size) {}

std::string Item::to_json() {
    return "";
}

std::ostream& operator<<(std::ostream& os, const Item i) {
    os << "ITEM NAME: " << i.name << " DESCRIPTION: " << i.description
    << " WEIGHT: " << i.weight << " SIZE: " << i.size;

    return os;
}
