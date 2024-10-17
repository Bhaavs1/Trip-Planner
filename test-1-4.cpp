#include "Transportation.h"
#include <vector>

// Testing Transportation class

int main() {
    vector<Transportation> t;
    Transportation t1("Paris", "Jakarta");
    Transportation t2("Addis Abababa", "Baku");
    Transportation t3("Here", "There");

    t.push_back(t1);
    t.push_back(t2);
    t.push_back(t3);

    for (int i = 0; i < 3; i++)
    {
        cout << t[i].get_departure_location() << endl;
    }

    cout << endl;

    t1.set_arrival_date("20/10/2010");
    t1.set_isBooked(true);
    t1.set_departure_date("10/10/2010");
    t1.set_duration(48.5);
    t1.print();

}