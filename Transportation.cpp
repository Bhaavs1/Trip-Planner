#include "Transportation.h"

Transportation::Transportation(): departure_location(""), arrival_location(""), departure_date(""), arrival_date(""), duration(0.0), isBooked(false) {}

Transportation::Transportation(string dep_loc, string arr_loc): departure_location(dep_loc), arrival_location(arr_loc), departure_date(""), arrival_date(""), duration(0.0), isBooked(false) {}

Transportation::~Transportation()
{
}

void Transportation::print() {
        
        cout << "Details:" << endl;
        cout << "Departing from: " << get_departure_location() << endl;
        cout << "Date of departure: " << get_departure_date() << endl;
        cout << "Arriving at: " << get_arrival_location() << endl;
        cout << "Date of arrival: " << get_arrival_date() << endl;
        cout << "Total travel time: " << get_duration() << " hours" << endl;
        if (isBooked)
        {
            cout << "Transportation has been booked." << endl;
        } else {
            cout << "Transportation has NOT been booked." << endl;
        }
}