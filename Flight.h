#ifndef FLIGHT_H
#define FLIGHT_H


#include "Transportation.h"

class Flight : public Transportation
{
private:
    string flight_number;
    string airport;
    string seat_number;
    int gate;

public:
    Flight();
    Flight(string number);
    Flight(string flight_num, int gate, string airport, string seat);
    ~Flight() {}

    // getters and setters

    void set_flight_number(string number) {this->flight_number = number;}
    string get_flight_number() {return flight_number;}
    void set_airport(string airport) {this->airport = airport;}
    string get_airport() {return airport;}
    void set_seat_number(string s_number) {this->seat_number = s_number;}
    string get_seat_number() {return seat_number;}
    void set_gate(int gate_num) {this->gate = gate_num;}
    int get_gate() {return gate;}
    
    // print function
    void print();
};


#endif