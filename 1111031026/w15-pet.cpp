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
    cout << "pet object constructor: "
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
    if(this->birthDate.year>20)
        cout << "you are a fxxking genious" << endl;
    else if (this->adopt.year>this->birthDate.year)
        cout << "adopttion date is ok" << endl;
    else if((this->adopt.year==this->birthDate.year)&& (this->adopt.month > this->birthDate.month))
        cout << "it is adopted on its birth month" << endl;
    else cout << "adopttion date is illeage" << endl;
} // end function print

// output Employee object to show when its destructor is called
Pet::~Pet()
{
    cout << "pet object destructor: "
        << Name << ", " << speci << endl;
} // end ~Employee destructor
