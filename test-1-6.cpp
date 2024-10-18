#include "LayoverFlight.h"

// Testing LayoverFlight class

int main() {
    LayoverFlight f1("SQ721", 37, "Changi", "36D");
    f1.set_departure_date("1/10/22");
    f1.set_arrival_date("2/10/22");
    f1.set_departure_location("Singapore");
    f1.set_arrival_location("Paris");
    f1.set_duration(13.1);
    f1.set_isBooked(true);
    f1.set_layover_duration(1.5);
    f1.set_layover_location("Hamad International Airport, Qatar");

    f1.print();
    cout << endl;
    f1.set_isBooked(false);
    f1.Transportation::print();
    cout << endl;
    f1.Flight::print();


}