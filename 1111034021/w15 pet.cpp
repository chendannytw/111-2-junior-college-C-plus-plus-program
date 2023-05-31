// Fig. 9.20: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include "Pet.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
Pet::Pet(const string& spec, const string& name,
    const Date& dateOfBirth, const Date& dateOfadopt)
    : speci(spec), // initialize firstName
    Name(name), // initialize lastName
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
    cout <<Name << ", " << speci << "  Hired: ";
    adopt.print();
    cout << "  Birthday: ";
    birthDate.print();
    cout << endl;

    if (this->adopt.year > this->birthDate.year)
        cout << "Birthday and adoptday are OK" << endl;
    else if ((this->adopt.year == this->birthDate.year) && (this->adopt.month == this->birthDate.month))
        cout << "Birthday and adoptday are OK" << endl;
    else cout << "Birthday and adoptday is illigreal" << endl;
} // end function print

// output Employee object to show when its destructor is called
Pet::~Pet()
{
    cout << "Employee object destructor: "
        << Name << ", " << speci << endl;
} // end ~Employee destructor
