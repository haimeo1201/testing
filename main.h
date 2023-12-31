//check if a day is real or not

#ifndef MAIN_H
#define MAIN_H

#include <iostream>
using namespace std;

bool isLeapYear(int     year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0) return true;
            else return false;
        }
        else return true;
    }
    else return false;
}

bool isValidDate(int year, int month, int day)
{
    if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31 || year > 9999) return false;
    if (month == 2)
    {
        if (isLeapYear(year))
        {
            if (day > 29) return false;
        }
        else
        {
            if (day > 28) return false;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day > 30) return false;
    }
    return true;
}

#endif