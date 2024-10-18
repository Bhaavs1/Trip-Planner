#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>

#include "Trip.h"


using namespace std;

class Menu
{
private:
    int max_size;
    int current_size;
public:
    Trip* myTrips;
    Menu();
    Menu(int size);
    ~Menu() {}

    int get_max_size() {return max_size;}
    void set_max_size(int size) {this->max_size = size;}
    int get_current_size() {return current_size;}
    void set_current_size(int size) {this->current_size = size;}

    void display_trips();
    bool add_trip(Trip trip);
};




#endif