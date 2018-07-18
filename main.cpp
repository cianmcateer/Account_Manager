#include <iostream>
#include <string>

#include "Accounts.h"
#include "User.h"
#include "Item.h"

int main(void) {

    Accounts accounts;
    User u("Cian", 22, "cian@mail.com");
    accounts += u;

    Item i("Box", "A box", 10, 5);
    Item i2("Box1", "A box1", 15, 3);
    accounts.add_item(u, i);
    std::cout << accounts << std::endl;

    return 0;
}
