#include <iostream>
#include <iomanip>
#include "BasePlusCommissionEmployee.h" // class definition
#include "AdminiBasePlusCommissionEmployee.h"
using namespace std;

int main()
{
    // instantiate BasePlusCommissionEmployee object
    BasePlusCommissionEmployee
        employee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);
    administrative_pay
        eeee(6000);


    // set floating-point output formatting
    cout << fixed << setprecision(2);

    // get commission employee data
    cout << "Employee information obtained by get functions: \n"
        << "\nFirst name is " << employee.getFirstName()
        << "\nLast name is " << employee.getLastName()
        << "\nSocial security number is "
        << employee.getSocialSecurityNumber()
        << "\nGross sales is " << employee.getGrossSales()
        << "\nCommission rate is " << employee.getCommissionRate()
        << "\nBase salary is " << employee.getBaseSalary() << endl;

    employee.setBaseSalary(1000); // set base salary

    cout << "\nUpdated employee information output by print function: \n"
        << endl;
    employee.print(); // display the new employee information

    // display the employee's earnings
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
    cout << "\n\nadministrativepay : $" << eeee.earnings() <<endl;
    cout << "\n\ntotal : $" << eeee.earnings() + employee.earnings() << endl;
}
