#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class Pet
{
public:
    // function that sets the course name
    Pet(string name, int age);
    ~Pet();
    void setPetName_and_Age(string name, int age);
    string getPetName() const;
    int getPetAge() const;
    void displayMessage() const;
private:
    string PetName = "Unknown dog name";
    int PetAge = 0;// course name for this GradeBook
}; // end class GradeBook  #pragma once#pragma once
