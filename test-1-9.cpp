#include "Menu.h"

int main() {
    Menu mainMenu(2);

    Trip t1("Family Holiday");
    Trip t2("Cruise");
    Trip t3("Pilgrimage");

    // mainMenu.myTrips[0] = t1;
    // mainMenu.myTrips[1] = t2;
    // mainMenu.myTrips[2] = t3;


    if (mainMenu.add_trip(t1)) {
        cout << "Trip 1 added" << endl;
    } else {
        cout << "Could not add trip 1" << endl;
    }

    if (mainMenu.add_trip(t2)) {
        cout << "Trip 2 added" << endl;
    } else {
        cout << "Could not add trip 2" << endl;
    }

    if (mainMenu.add_trip(t3)) {
        cout << "Trip 3 added" << endl;
    } else {
        cout << "Could not add trip 3" << endl;
    }

    // mainMenu.add_trip(t1);
    // mainMenu.add_trip(t1);
    // mainMenu.add_trip(t1);

    mainMenu.display_trips();
}