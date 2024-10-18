#ifndef BAG_H
#define BAG_H

#include <iostream>
#include <string>
#include <vector>
#include "Item.h"

using namespace std;

class Bag
{
private:
    string bag_name;
    int current_number_items;
    vector<Item> items;
public:
    Bag();
    Bag(string name); 
    ~Bag();

    // getters and setters

    void set_bag_name(string name) {this->bag_name = name;}
    string get_bag_name() {return bag_name;}
    int get_current_number_items() {return current_number_items;}

    // add item and remove item

    void add_item(Item item);
    void remove_item(string item_name);
    void display_contents();

};




#endif