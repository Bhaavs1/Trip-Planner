#ifndef TRAIN_H
#define TRAIN_H

#include "Transportation.h"
#include "Destination.h"

#include <vector>

class Train : public Transportation
{
private:
    string station;
    int platform;
    vector<Destination> stops;
public:
    Train();
    Train(string station, int platform);
    ~Train() {}

    string get_station() {return station;}
    void set_station(string station) {this->station = station;}
    int get_platform() {return platform;}
    void set_station(int platform) {this->platform = platform;}

    void add_stop(Destination stop);
    void print();

};




#endif