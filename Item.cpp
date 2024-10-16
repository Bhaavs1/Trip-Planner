#include "Item.h"
Item::Item(): item_name(""), isPacked(false), isPurchased(false), price(0), category(""), num_needed(1) {}


Item::Item(string name): item_name(name), isPacked(false), isPurchased(false), price(0), category(""), num_needed(1) {}

Item::Item(string name, int number): item_name(name), isPacked(false), isPurchased(false), category(""), num_needed(number) {}

Item::~Item() {}