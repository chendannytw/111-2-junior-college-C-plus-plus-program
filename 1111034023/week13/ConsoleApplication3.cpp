#include <iostream>
#include <string>
#include "Pet.h"// program uses C++ standard string class
#include "Time.h"
#include "../../../../Downloads/Time.h"
using namespace std;

// GradeBook class definition


// function main begins program execution
int main()
{
    Date t(1990,1,1);
    string dogname;
    int dogage;// string of characters to store the course name
    Pet myPet("unknown", 0); // create a GradeBook object named myGradeBook

    // display initial value of courseName
    cout << "My dog name is : " << myPet.getPetName()
        << endl;
    cout << "My dog age is : " << myPet.getPetAge()
        << endl;
    // prompt for, input and set course name
    cout << "\nPlease enter the dog name:" << endl;
    getline(cin, dogname); // read a course name with blanks
    cout << "\nPlease enter the dog age:" << endl;
    cin >> dogage; // read a course name with blanks
    myPet.setPetName_and_Age(dogname, dogage); // set the course name
    t.printUniversal();
    puts("");
    t.printStandard();
    cout << endl; // outputs a blank line
    myPet.displayMessage(); // display message with new course name
} // end main
