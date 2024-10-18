#include "Transportation.h"
#include "Flight.h"
#include "LayoverFlight.h"
#include "Train.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    Transportation* transport[3];
    

    Flight f("SQ123");
    LayoverFlight l("Q772", 5, "Hamad International", "12A");
    Train t("Marylebone", 8);

    transport[0] = &f;
    transport[1] = &l;
    transport[2] = &t;

    for (int i = 0; i < 3; i++)
    {
        transport[i]->print();
        cout << endl;
    }
    
    for (int i = 0; i < 3; i++)
    {
        transport[i]->get_isBooked();
        cout << endl;
    }
    
}