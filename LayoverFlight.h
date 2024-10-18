#include "Flight.h"

class LayoverFlight : public Flight
{
private:
    string layover_location;
    float layover_duration;
public:
    LayoverFlight();
    LayoverFlight(string flight_num, int gate, string airport, string seat);
    LayoverFlight(string flight_num, int gate, string airport, string seat, string layover_loc, float layover_dur);
    ~LayoverFlight() {}

    string get_layover_location() {return layover_location;}
    void set_layover_location(string location) {this->layover_location = location;}
    float get_layover_duration() {return layover_duration;}
    void set_layover_duration(float duration) {this->layover_duration = duration;}


    void print();
};


