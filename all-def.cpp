#include <cassert>
#include "main.h"

int main() {
    // Test invalid year
    assert(isValidDate(-1, 1, 1) == false);
    assert(isValidDate(0, 1, 1) == false);
    assert(isValidDate(10000, 1, 1) == false);

    // Test invalid month
    assert(isValidDate(2022, 0, 1) == false);
    assert(isValidDate(2022, 13, 1) == false);

    // Test invalid day
    assert(isValidDate(2022, 1, 0) == false);
    assert(isValidDate(2022, 1, 32) == false);

    // Test February in a leap year
    assert(isValidDate(2024, 2, 29) == true);

    // Test February in a non-leap year
    assert(isValidDate(2023, 2, 29) == false);

    // Test April, June, September, November
    assert(isValidDate(2021, 4, 31) == false);

    // Test all other valid dates
    assert(isValidDate(2022, 1, 1) == true);
    assert(isValidDate(2022, 2, 28) == true);
    assert(isValidDate(2022, 3, 1) == true);
    assert(isValidDate(2022, 4, 30) == true);
    assert(isValidDate(2022, 5, 1) == true);
    assert(isValidDate(2022, 6, 30) == true);
    assert(isValidDate(2022, 7, 1) == true);
    assert(isValidDate(2022, 8, 31) == true);
    assert(isValidDate(2022, 9, 1) == true);
    assert(isValidDate(2022, 10, 31) == true);
    assert(isValidDate(2022, 11, 1) == true);
    assert(isValidDate(2022, 12, 31) == true);

    return 0;
}