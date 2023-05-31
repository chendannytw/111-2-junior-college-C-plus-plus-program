#pragma once
#ifndef PET_H
#define PET_H

#include <string> // program uses C++ standard string class
#include "Date.h"
using namespace std;

// GradeBook class definition
class Pet
{
public:
    Pet(const std::string&, const std::string&,
        const Date&, const Date&);//類別/物件的介面
    void print() const;
    ~Pet();//類別/物件的介面

private:
    std::string spec;
    std::string Name;
    const Date birthDate;
    const Date adoptDate;
}; // end class GradeBook
#endif
