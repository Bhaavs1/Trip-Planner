#include "Trip.h"

int main() {

    Trip t1("Family holiday");
    Trip t2("Antarctica trip");

    vector<Trip> myTrips;
    myTrips.push_back(t1);
    myTrips.push_back(t2);

    for (int i = 0; i < myTrips.size(); i++)
    {
        cout << myTrips[i].get_ID() << endl;
    }
    
}