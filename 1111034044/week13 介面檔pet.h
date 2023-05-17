#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class Pet
{
public:
    Pet(string name, int age);
    ~Pet();
    // function that sets the course name
    void setPetName(string name, int age);

    // function that gets the course name
    string getPetName() const;

    int getPetAge() const;

    // function that displays a welcome message


    void setPetAge(int age);


    void displayMessage() const;
private:
    string PetName = "unknown"; // course name for this GradeBook
    int PetAge = 0;
}; // end class GradeBook  

// function main begins program execution
