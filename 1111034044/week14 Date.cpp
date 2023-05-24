// Fig. 9.2: Time.cpp
// Time class member-function definitions.
#include <iostream>
#include <iomanip>
#include <stdexcept> // for illegal_argument exception class
#include "Date.h" // include definition of class Time from Time.h

using namespace std;

// Time constructor initializes each data member to zero.
Date::Date(int,int,int)
    : year(0), month(0), day(0)
{
} // end Time constructor

// set new Time value using universal time
void Date::setDate(int y, int m, int d)
{
    // validate hour, minute and second
    if ((y >= 1 && y < 10000) && (m >= 1 && m < 13) &&
        (d >= 1 && d < 32))
    {
        year = y;
        month = m;
        day = d;
    } // end if
    else
        throw invalid_argument(
            "year, month and/or day was out of range");
} // end function setTime

// print Time in universal-time format (HH:MM:SS)
void Date::printUniversal() const
{
    cout << setfill('0') << setw(2) << year << "/"
        << setw(2) << month << "/" << setw(2) << day;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Date::printStandard() const
{
    cout << (year < 1911 ? " 民國" : " 民國前")<< ((year > 1911)?year-1911:1911-year )<< "/"
        << setfill('0') << setw(2) << month << "/" << setw(2)
        << day ;
} // end function printStandard
