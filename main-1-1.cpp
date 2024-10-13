#include "Item.h"

int main() {
    Item i1("hat", 2);

    i1.set_isPacked(true);
    cout << i1.get_isPacked() << endl;
}