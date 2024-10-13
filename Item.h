#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

using namespace std;

class Item
{
private:
    string item_name;
    bool isPacked;
    bool isPurchased;
    float price;
    string category;
    int num_needed;
public:
    Item();
    Item(string name);
    Item(string name, int num_needed);
    ~Item();

    // getters and setters

    void set_item_name(string name) {this-> item_name = name;}
    string get_item_name() {return item_name;}
    void set_isPacked(bool isPacked) {this-> isPacked = isPacked;}
    bool get_isPacked() {return isPacked;}
    void set_isPurchased(bool isPurchased) {this-> isPurchased = isPurchased;}
    bool get_isPurchased() {return isPurchased;}
    void set_price(float price) {this-> price = price;}
    float get_price() {return price;}
    void set_category(string category) {this-> category = category;}
    string get_category() {return category;}
    void set_num_needed(int number) {this-> num_needed = number;}
    int get_num_needed() {return num_needed;}

};


#endif