#ifndef BAG_H
#define BAG_H

#include <iostream>
#include <string>
#include "Item.h"

using namespace std;

class Bag
{
private:
    string bag_name;
    int current_number_items;
    Item* items;
public:
    Bag();
    Bag(string name); 
    ~Bag();

    // getters and setters

    void set_bag_name() {}
    string get_bag_name() {return bag_name;}

    // add item string

    
};




#endif