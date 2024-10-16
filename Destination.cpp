#include "Destination.h"

Destination::Destination(): country(""), subdivision(""), city(""), residence(""), arrival_date(""), departure_date("")
{
}

Destination::Destination(string city, string country): country(country), subdivision(""), city(city), residence(""), arrival_date(""), departure_date("")
{
}

Destination::~Destination()
{
}