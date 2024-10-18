#ifndef TRANSPORTATION_H
#define TRANSPORTATION_H

#include <iostream>
#include <string>

using namespace std;

class Transportation
{
protected:
    string departure_location;
    string arrival_location;
    string departure_date;
    string arrival_date;
    float duration;
    bool isBooked;

public:
    Transportation();
    Transportation(string dep_loc, string arr_loc);
    ~Transportation();

    // getters and setters

    // departure and arrival location
    void set_departure_location(string location) {this->departure_location = location;}
    string get_departure_location() {return departure_location;}
    void set_arrival_location(string location) {this->arrival_location = location;}
    string get_arrival_location() {return arrival_location;}

    // departure and arrival dates
    void set_departure_date(string date) {this->departure_date = date;}
    string get_departure_date() {return departure_date;}
    void set_arrival_date(string date) {this->arrival_date = date;}
    string get_arrival_date() {return arrival_date;}

    // other
    void set_duration(float duration) {this->duration = duration;}
    float get_duration() {return duration;}
    void set_isBooked(bool isBooked) {this->isBooked = isBooked;}
    bool get_isBooked() {return isBooked;}

    // virtual print function

    virtual void print();
};



#endif