#include "Destination.h"
#include <vector>

// Testing Destination files

int main() {
    Destination d1("Helsinki", "Finland");
    Destination d2("Kinshasa", "DRC");
    Destination d3("Montevideo", "Uruguay");

    vector<Destination> destinations;
    destinations.push_back(d1);
    destinations.push_back(d2);
    destinations.push_back(d3);

    for (int i = 0; i < destinations.size(); i++)
    {
        cout << destinations[i].get_city() << endl;
    }
    
    destinations[0].set_arrival_date("20/10/24");
    destinations[0].set_departure_date("5/12/24");
    destinations[0].set_residence("123 Happy Way, Pieburg");
    destinations[0].set_subdivision("Uusimaa");

    cout << destinations[0].get_arrival_date() << endl;
    cout << destinations[0].get_departure_date() << endl;
    cout << destinations[0].get_residence() << endl;
    cout << destinations[0].get_subdivision() << endl;
}