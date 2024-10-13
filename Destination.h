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
    ~Destination();
};




#endif