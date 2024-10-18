#include "Trip.h"

int Trip::count = 1;

Trip::Trip(): name(""), start_date(""), end_date(""), duration(0), current_cost(0), budget(0) {
    ID = Trip::count++;
}

Trip::Trip(string name): name(name), start_date(""), end_date(""), duration(0), current_cost(0), budget(0) {
    ID = Trip::count++;
}

float Trip::get_current_cost() {
    float total_cost = 0;
    for (int i = 0; i < packing_list.size(); i++)
    {
        total_cost += packing_list[i].get_price();
    }
    return total_cost;
}