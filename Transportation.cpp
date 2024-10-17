#include "Transportation.h"

Transportation::Transportation(): departure_location(""), arrival_location(""), departure_date(""), arrival_date(""), duration(0.0), isBooked(false) {}

Transportation::Transportation(string dep_loc, string arr_loc): departure_location(dep_loc), arrival_location(arr_loc), departure_date(""), arrival_date(""), duration(0.0), isBooked(false) {}

Transportation::~Transportation()
{
}
