#include "Bag.h"

// testing Bag.h and Bag.cpp

int main() {
    Bag b1("Red handbag");
    Bag b2("Duffle");
    Bag b3("Black suitcase");
    Bag b4("Pie bag");

    vector<Bag> bags;
    bags.push_back(b1);
    bags.push_back(b2);
    bags.push_back(b3);
    bags.pop_back();
    bags.push_back(b4);
    

    for (int i = 0; i < bags.size(); i++)
    {
        cout << bags[i].get_bag_ID() << endl;
    }
    

}