#include "Menu.h"

Menu::Menu(): max_size(5), current_size(0) {
    myTrips = new Trip[5];
}

Menu::Menu(int size): max_size(size), current_size(0) {
    myTrips = new Trip[size];
}

void Menu::display_trips() {
    cout << "Your Trips:" << endl;

    for (int i = 0; i < max_size; i++)
    {
        cout << i + 1 << ". " << myTrips[i].get_name() << endl;
    }
    
}

bool Menu::add_trip(Trip trip) {

    if (current_size < max_size)
    {
        myTrips[current_size] = trip;
        current_size++;
        return true;
    }
    
    return false;
}