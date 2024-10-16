#ifndef DESTINATION_H
#define DESTINATION_H

#include <iostream>
#include <string>

using namespace std;

class Destination
{
private:
    string country;
    string subdivision;
    string city;
    string residence;
    string arrival_date;
    string departure_date;
public:
    Destination();
    Destination(string city, string country);
    ~Destination();

    // getters

    string get_country() {return country;}
    string get_subdivision() {return subdivision;}
    string get_city() {return city;}
    string get_residence() {return residence;}
    string get_arrival_date() {return arrival_date;}
    string get_departure_date() {return departure_date;}

    // setters

    void set_country(string country) {this->country = country;}
    void set_subdivision(string subdiv) {this->subdivision = subdiv;}
    void set_city(string city) {this->city = city;}
    void set_residence(string residence) {this->residence = residence;}
    void set_arrival_date(string arr_date) {this->arrival_date = arr_date;}
    void set_departure_date(string dep_date) {this->departure_date = dep_date;}
};




#endif