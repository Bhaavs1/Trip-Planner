#ifndef TRANSPORTATION_H
#define TRANSPORTATION_H

#include <iostream>
#include <string>

using namespace std;

class Transportation
{
private:
    string departure_location;
    string arrival_location;
    string departure_date;
    string arrival_date;
    float duration;
    bool isBooked;

public:
    Transportation();
    ~Transportation();

    // getters and setters

    void set_departure_location(string location) {this->departure_location = location;}
    string get_departure_location() {return departure_location;}
    void set_arrival_location(string location) {this->arrival_location = location;}
    string get_arrival_location() {return arrival_location;}
    void set_departure_location(string date) {this->departure_date = date;}
    string get_departure_location() {return departure_date;}
    

};



#endif