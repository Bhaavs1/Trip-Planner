#ifndef TRIP_H
#define TRIP_H

#include <iostream>
#include <string>

using namespace std;

class Trip
{
private:
    string name;
    string start_date;
    string end_date;
    int duration;
    float current_cost;
    float budget;
    Item* packing_list;
    Transport* transport_plan;
    Destination* destinations;
public:
    Trip();
    Trip(string name);

    // getters and setters

    // name
    void set_name(string name) {this->name = name};
    string get_name() {return name;}

    // start and end dates
    void set_start_date(string date) {this->start_date = date};
    string get_start_date() {return start_date;}
    void set_end_date(string date) {this->end_date = date};
    string get_end_date() {return end_date;}

    // duration
    void set_duration(int duration) {this->duration = duration};
    int get_duration() {return duration;}

    // current cost
    void set_current_cost(int cost) {this->current_cost = cost};
    int get_current_cost() {return current_cost;}

    // budget
    void set_budget(int budget) {this->budget = budget};
    int get_budget() {return budget;}

};






#endif