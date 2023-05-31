#include <iostream>
#include "Pet.h"
#include "Date.h"
using namespace std;
Pet::Pet(const string& speci, const string& name,
    const Date& dateOfBirth, const Date& dateOfAdopt)//類別/物件的介面
    : spec(speci),
    Name(name),
    birthDate(dateOfBirth),
    adoptDate(dateOfAdopt)
{// 類別實作的內容
    cout << "Pet object constructor:"
        << speci << ' ' << name << endl;
}

void Pet::print() const
{
    cout << Name << ", " << spec << "  Adopted: ";
    adoptDate.print();
    cout << "  Birthday: ";
    birthDate.print();
    cout << endl;
    if ((this->adoptDate.year == this->birthDate.year) && (this->adoptDate.month > this->birthDate.month))
        cout << "adoption date is OK!" << endl;
    else if ((this->adoptDate.year == this->birthDate.year) && (this->adoptDate.month > this->birthDate.month))
        cout << "It is adopted on its birth month!" << endl;
    else cout << "adoption date is illeagel!" << endl;
} // end function print

// output Employee object to show when its destructor is called
Pet::~Pet()
{
    cout << "Pet object destructor: "
        << Name << ", " << spec << endl;
