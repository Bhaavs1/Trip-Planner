// This file is for testing the Bag class'item add and remove funcitons

#include "Item.h"
#include "Bag.h"

int main() {
    Bag b1("Red handbag");

    Item i1("Hat");
    Item i2("Shoes");
    Item i3("Socks");

    b1.add_item(i1);
    b1.add_item(i2);
    b1.add_item(i3);

    cout << b1.get_current_number_items() << endl;

    b1.display_contents();

    b1.remove_item("Hat");

    cout << b1.get_current_number_items() << endl;

    b1.display_contents();

    // for (int i = 0; i < count; i++)
    // {
    //     /* code */
    // }
    

    // for (int i = 0; i < bags.size(); i++)
    // {
    //     cout << bags[i].get_bag_ID() << endl;
    // }
    

}