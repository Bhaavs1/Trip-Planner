#include "Flight.h"

Flight::Flight(): Transportation(), flight_number(0), airport(""), seat_number(""), gate(0) {}

Flight::Flight(string number):  Transportation(), flight_number(number), airport(""), seat_number(""), gate(0) {}

Flight::Flight(string flight_num, int gate, string airport, string seat): Transportation(), flight_number(flight_num), gate(gate), airport(airport), seat_number(seat) {}

void Flight::print() {
    cout << "Flight details:" << endl;
    cout << "Flight number: " << get_flight_number() << endl;
    cout << "Departing from: Gate " << get_gate() << ", " << get_airport() << " Airport, " << get_departure_location() << endl;
    cout << "Date of departure: " << get_departure_date() << endl;
    cout << "Arriving at: " << get_arrival_location() << endl;
    cout << "Date of arrival: " << get_arrival_date() << endl;
    cout << "Total travel time: " << get_duration() << " hours" << endl;

    if (isBooked)
    {
        cout << "Flight has been booked." << endl;
    } else {
        cout << "Flight has NOT been booked." << endl;
    }
}