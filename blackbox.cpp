#include <iostream>
#include <cassert>
#include "main.h"

int main() {
    // Equivalence Class Testing

    // Invalid year
    assert(isValidDate(-1, 1, 1) == false);
    assert(isValidDate(0, 1, 1) == false);
    assert(isValidDate(10000, 1, 1) == false);

    // Invalid month
    assert(isValidDate(2022, 0, 1) == false);
    assert(isValidDate(2022, 13, 1) == false);
    assert(isValidDate(2022, -5, 1) == false);

    // Invalid day
    assert(isValidDate(2022, 1, 0) == false);
    assert(isValidDate(2022, 1, 32) == false);
    assert(isValidDate(2022, 1, -10) == false);

    // February in a leap year
    assert(isValidDate(2024, 2, 29) == true);

    // February in a non-leap year
    assert(isValidDate(2023, 2, 29) == false);

    // April, June, September, November
    assert(isValidDate(2021, 4, 31) == false);

    // All other valid dates
    assert(isValidDate(2022, 7, 15) == true);

    // Decision Table Testing

    // Invalid year
    assert(isValidDate(-1, 1, 1) == false);
    assert(isValidDate(2022, 1, 1) == true);

    // Invalid month
    assert(isValidDate(2022, 0, 1) == false);
    assert(isValidDate(2022, 13, 1) == false);
    assert(isValidDate(2022, 1, 1) == true);

    // Invalid day
    assert(isValidDate(2022, 1, 0) == false);
    assert(isValidDate(2022, 1, 32) == false);
    assert(isValidDate(2022, 1, 1) == true);

    // February in a leap year
    assert(isValidDate(2024, 2, 29) == true);
    assert(isValidDate(2023, 2, 29) == false);

    // April, June, September, November
    assert(isValidDate(2022, 4, 30) == true);
    assert(isValidDate(2022, 6, 30) == true);
    assert(isValidDate(2022, 9, 30) == true);
    assert(isValidDate(2022, 11, 30) == true);

    // All other valid dates
    assert(isValidDate(2022, 1, 31) == true);
    assert(isValidDate(2022, 2, 28) == true);
    assert(isValidDate(2022, 3, 31) == true);
    assert(isValidDate(2022, 5, 31) == true);
    assert(isValidDate(2022, 7, 31) == true);
    assert(isValidDate(2022, 8, 31) == true);
    assert(isValidDate(2022, 10, 31) == true);
    assert(isValidDate(2022, 12, 31) == true);

    std::cout << "All tests passed!\n";
    return 0;
}