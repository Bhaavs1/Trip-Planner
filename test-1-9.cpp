#include "Menu.h"
#include "Item.h"
#include "Trip.h"

// Testing Menu class and Trip reading and writing funcitons

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

    mainMenu.display_trips();

    Item i1("Hat");
    Item i2("Cat");
    Item i3("Matt");

    i3.set_isPacked(true);

    t1.add_item_to_list(i1);
    t1.add_item_to_list(i2);
    t1.add_item_to_list(i3);

    // t1.display_packing_list();

    cout << "Enter file name:" << endl;
    string filename;
    cin >> filename;
    filename = filename + ".txt";
    t1.export_packing_list(filename);
    t1.read_packing_list(filename);


}