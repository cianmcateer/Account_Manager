#include <iostream>
#include <string>
#include <fstream>

#include "Accounts.h"
#include "User.h"
#include "Item.h"

using namespace std;

void save(std::string json) {
    ofstream f("data.json");
    f << json;
    f.close();
}
int main(void) {

    Accounts accounts;
    User u("Cian", 22, "cian@mail.com");
    accounts += u;

    Item i("Box", "A box", 10, 5);
    Item i2("Box1", "A box1", 15, 3);
    accounts.add_item(u, i);
    accounts.add_item(u, i2);

    User u2("John", 54, "John@email");
    Item i3("x", "box", 13, 55);
    Item i4("moo", "circle", 5, 11);

    accounts += u2;
    accounts.add_item(u2, i3);
    accounts.add_item(u2, i4);

    User u3("Bing", 44, "Bingaling@email.com");
    Item i5("xi hong shi", "Sa", 22 ,6);
    Item i6("ping guo", "zo", 866 ,1);

    accounts += u3;
    accounts.add_item(u3, i5);
    accounts.add_item(u3, i6);

    save(accounts.to_json());


    return 0;
}
