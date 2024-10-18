#include "LayoverFlight.h"

LayoverFlight::LayoverFlight(): Flight(), layover_location(""), layover_duration(0.0) {}

LayoverFlight::LayoverFlight(string flight_num, int gate, string airport, string seat): Flight(flight_num, gate, airport, seat) {}

LayoverFlight::LayoverFlight(string flight_num, int gate, string airport, string seat, string layover_loc, float layover_dur): Flight(flight_num, gate, airport, seat), layover_location(layover_loc), layover_duration(layover_dur) {}


void LayoverFlight::print() {
    cout << "Layover Flight details:" << endl;
    cout << "Flight number: " << get_flight_number() << endl;
    cout << "Departing from: Gate " << get_gate() << ", " << get_airport() << " Airport, " << get_departure_location() << endl;
    cout << "Date of departure: " << get_departure_date() << endl;
    cout << "Layover at: " << get_layover_location() << endl;
    cout << "Layover duration: " << get_layover_duration() << endl;
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