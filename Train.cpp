#include "Train.h"

Train::Train(): Transportation(), station(""), platform(0) {}

Train::Train(string station, int platform): Transportation(), station(station), platform(platform) {}

void Train::print() {

    cout << "Train Ride Details:" << endl;
    cout << "Departing from: " << "Platform " << get_platform() << ", " << get_station() << "Station, " << get_departure_location() << endl;
    cout << "Date of departure: " << get_departure_date() << endl;
    cout << "Arriving at: " << get_arrival_location() << endl;
    cout << "Date of arrival: " << get_arrival_date() << endl;
    cout << "Total travel time: " << get_duration() << " hours" << endl;

    // if there are stops included, print them. Otherwise display 'None'
    if (stops.size() > 0)
    {
        cout << "Stops:" << endl;
        for (int i = 0; i < stops.size(); i++)
        {
            cout << "- " << stops[i].get_city() << endl;
        }
    } else {
        cout << "Stops: None" << endl;
    }
    
    
    if (isBooked)
    {
        cout << "Train ticket has been booked." << endl;
    } else {
        cout << "Train ticket has NOT been booked." << endl;
    }

}

void Train::add_stop(Destination stop) {
    stops.push_back(stop);
}