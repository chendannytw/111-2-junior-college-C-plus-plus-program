// Fig. 9.19: Employee.h
// Employee class definition showing composition.
// Member functions defined in Employee.cpp.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h" // include Date class definition

class Pet
{
public:
    Pet(const std::string&, const std::string&,
        const Date&, const Date&);
    void print() const;
    ~Pet(); // provided to confirm destruction order

    std::string speci; // composition: member object
    std::string Name; // composition: member object
    const Date birthDate; // composition: member object
    const Date adopt; // composition: member object
}; // end class Employee

#endif

