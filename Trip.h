#ifndef TRIP_H
#define TRIP_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "Item.h"
#include "Transportation.h"
#include "Destination.h"
#include "Bag.h"

using namespace std;

class Trip
{
private:
    int ID;
    string name;
    string start_date;
    string end_date;
    int duration;
    float current_cost;
    float budget;
    vector<Item> packing_list;
    vector<Bag> bag_list;
    vector<Transportation> transport_plan;
    vector<Destination> destinations;

    static int count; // used to set trip ID
public:
    Trip();
    Trip(string name);

    // getters and setters

    // ID

    void set_ID(int ID) {this->ID = ID;}
    int get_ID() {return ID;}

    // name
    void set_name(string name) {this->name = name;}
    string get_name() {return name;}

    // start and end dates
    void set_start_date(string date) {this->start_date = date;}
    string get_start_date() {return start_date;}
    void set_end_date(string date) {this->end_date = date;}
    string get_end_date() {return end_date;}

    // duration
    void set_duration(int duration) {this->duration = duration;}
    int get_duration() {return duration;}

    // current cost
    void set_current_cost(float cost) {this->current_cost = cost;}
    float get_current_cost();

    // budget
    void set_budget(int budget) {this->budget = budget;}
    int get_budget() {return budget;}

    // count
    void set_count(int count) {this->count = count;}
    int get_count() {return count;}

    // other functions

    void add_item_to_list(Item item);
    void display_packing_list();
    void export_packing_list(string name);
    void read_packing_list(string file_name);

};






#endif