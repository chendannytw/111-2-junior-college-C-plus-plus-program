#include <iostream>
#include <string> // program uses C++ standard string class
#include "pet.h"
using namespace std;

Pet::Pet(string name, int age) 
{
    PetName = name;
    PetAge = age;
}

Pet::~Pet()
{
    cout << "\n Bye" << endl;
}

void Pet::setPetName(string name, int age)
{
    PetName = name; // store the course name in the object
    PetAge = age;
} // end function setCourseName

// function that gets the course name
string Pet::getPetName() const
{
    return PetName; // return the object's courseName  //私有資料成員courseName可以透過自家的函數存取
} // end function getCourseName

int Pet::getPetAge() const
{
    return PetAge; // return the object's courseName  //私有資料成員courseName可以透過自家的函數存取
} // end function getCourseName

void Pet::setPetAge(int age)
{
    if (age >= 0 && age <= 20)
    {
        PetAge = age;
    }
    else
    {
        cout << "寵物年齡不符\n" << endl;
    }
}



// function that displays a welcome message
void Pet::displayMessage() const
{
    // this statement calls getCourseName to get the 
    // name of the course this GradeBook represents
    cout << "My pet name is:" << getPetName() << "!";
    cout << "My pet age is:" << getPetAge() << "!"
        << endl;
} // end function displayMessage
