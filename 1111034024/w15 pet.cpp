// Fig. 9.20: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include "Pet.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
Pet::Pet(const string& speci, const string& Name,
    const Date& dateOfBirth, const Date& dateOfadopt)
    : speci(speci), // initialize firstName
    Name(Name), // initialize lastName
    birthDate(dateOfBirth), // initialize birthDate
    adopt(dateOfadopt) // initialize hireDate
{
    // output Employee object to show when constructor is called
    cout << "Employee object constructor: "
        << speci << ' ' << Name << endl;
} // end Employee constructor

// print Employee object
void Pet::print() const
{
    cout << Name << ", " << speci << "  adopt: ";
    adopt.print();
    cout << "  Birthday: ";
    birthDate.print();
    cout << endl;

    if (this->adopt.year > this->birthDate.year)
        cout << "The birthday and doptday are OK!";
    else if ((this->adopt.year == this->birthDate.year) && (this->adopt.month == this->birthDate.month))
        cout << "the birthday and adoptday are on the same year!";
    else cout << "the birthday or adoptday is illigeal!";
} // end function print

// output Employee object to show when its destructor is called
Pet::~Pet()
{
    cout << "Employee object destructor: "
        << Name << ", " << speci << endl;
} // end ~Employee destructor
