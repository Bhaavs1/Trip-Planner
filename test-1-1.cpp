#include "Item.h"
#include <iostream>
#include <vector>

// Testing Item class

using namespace std;

int main() {
    Item i1("hat", 2);

    i1.set_isPacked(true);
    cout << i1.get_isPacked() << endl;

    Item i2("shirt", 5);
    Item i3("pie", 2);

    vector<Item> packing_list;
    packing_list.push_back(i1);
    packing_list.push_back(i2);
    packing_list.push_back(i3);
    packing_list.pop_back();

    for (int i = 0; i < packing_list.size(); i++)
    {
        cout << packing_list[i].get_item_name() << endl;
    }
    
}