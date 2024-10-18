#include "Train.h"
#include "Destination.h"

int main() {
    Train t("King's Cross", 9);

    t.set_departure_date("1/10/22");
    t.set_arrival_date("2/10/22");
    t.set_departure_location("Moscow");
    t.set_arrival_location("Paris");
    t.set_duration(13.1);
    t.set_isBooked(true);
    
    Destination d1("Belgrade", "Serbia");
    Destination d2("Prague", "Czechia");
    Destination d3("Warsaw", "Poland");

    t.add_stop(d1);
    t.add_stop(d2);
    t.add_stop(d3);

    t.print();
}