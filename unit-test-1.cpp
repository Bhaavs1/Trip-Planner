#ifndef UNITTEST_H
#define UNITTEST_H

#include <iostream>
#include "Item.h"

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Item item;

        if (item.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }
};

#endif