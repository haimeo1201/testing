#include <iostream>
#include <cassert>
#include "main.h"

int main() {
    assert(isValidDate(-1, -1, -1) == false);
    assert(isValidDate(2010, 5, 13) == true);
    assert(isValidDate(2010, 4, 31) == false);
    assert(isValidDate(2010, 4, 30) == true);
    assert(isValidDate(2010, 2, 28) == true);
    assert(isValidDate(2010, 2, 29) == false);
    assert(isValidDate(2024, 2, 30) == false);
    assert(isValidDate(2024, 2, 29) == true);
    std::cout << "All tests passed!\n";
    return 0;
}