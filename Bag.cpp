#include "Bag.h"

int Bag::count = 1;

Bag::Bag()
{
    bag_name = "";
    bag_ID = count++;
    current_number_items = 0;
}

Bag::Bag(string name) {
    bag_name = name;
    bag_ID = count++;
    current_number_items = 0;
}

Bag::~Bag() {}