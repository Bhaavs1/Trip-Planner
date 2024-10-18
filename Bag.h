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
    int bag_ID;
    int current_number_items;
    vector<Item> items;
    static int count; // used to assign every bag a new ID
public:
    Bag();
    Bag(string name); 
    ~Bag();

    // getters and setters

    void set_bag_name(string name) {this->bag_name = name;}
    string get_bag_name() {return bag_name;}
    int get_bag_ID() {return bag_ID;}
    static int get_count() {return count;}

    int get_current_number_items() {return current_number_items;}
    

    // add item and remove item

    void add_item(Item item);
    void remove_item(string item_name);
    void display_contents();

};




#endif