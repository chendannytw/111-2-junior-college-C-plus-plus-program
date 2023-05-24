#include <iostream>
#include <string> 
#include "Pet.h"// program uses C++ standard string class
using namespace std;

// GradeBook class definition

    // function that sets the course name
    Pet::Pet(string name, int age)
    {
        PetName = name;
        PetAge = age;
    }
    Pet::~Pet()
    {
        cout << "\nBye Bye" << endl;
    }
    void Pet::setPetName_and_Age(string name, int age)
    {
        PetName = name;
        if ((age > 20) || (age < 0))
            cout << "wrong age";
        else
            PetAge = age;// store the course name in the object
    } // end function setCourseName

    // function that gets the course name
    string Pet::getPetName() const
    {
        return PetName; // return the object's courseName
    } // end function getCourseName

    int Pet::getPetAge() const
    {
        return PetAge; // return the object's courseName
    } // end function getCourseName
    // function that displays a welcome message
    void Pet::displayMessage() const
    {
        // this statement calls getCourseName to get the 
        // name of the course this GradeBook represents
        cout << "My dog name is\n" << getPetName() << "!"
            << endl;
        cout << "My dog age is\n" << getPetAge() << "!"
            << endl;
    } // end function displayMessage
    string PetName = "Unknown dog name";
    int PetAge = 0;// course name for this GradeBook
 // end class GradeBook  #pragma once
