#include <iostream>
#include <string> // program uses C++ standard string class
#include "pet.h"
using namespace std;


int main()
{
    string nameOfPet; // string of characters to store the course name
    Pet myPet("name", 10); // create a GradeBook object named myGradeBook
    int ageOfPet;
    // display initial value of courseName
    cout << "Initial Pat name is: " << myPet.getPetName()
        << endl;
    cout << "Initial Pat age is: " << myPet.getPetAge()
        << endl;
    // prompt for, input and set course name
    cout << "\nPlease enter the pet name:" << endl;
    getline(cin, nameOfPet); // read a course name with blanks
    cout << "\nPlease enter the pet age:" << endl;
    cin >> ageOfPet ;




    myPet.setPetName(nameOfPet, ageOfPet); // set the course name

    cout << endl; // outputs a blank line
    myPet.displayMessage(); // display message with new course name
} // end main
