#include <iostream>
#include <string>
#include "Pet.h"// program uses C++ standard string class
using namespace std;

// GradeBook class definition


// function main begins program execution
int main()
{
	Date birth(6, 4, 1989);
	Date hire(3, 12, 1988);
	Pet pet("Dog", "BasayBasay", birth, hire);

	cout << endl;
	pet.print();
}
