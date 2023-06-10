#ifndef AdminiBasePlusCommissionEmployee_H
#define AdminiBasePlusCommissionEmployee_H
#include <string>




class administrative_pay 
{
public:
    administrative_pay(double = 0.0);

    void setpay(double) ;
    double getpay() const;

    double earnings() const;
    void print() const;

        double pay;
    //std::string lastName;
    //std::string socialSecurityNumber;
    //double grossSales; // gross weekly sales
    //double commissionRate; // commission percentage
    //double baseSalary; // base salary
}; // end class BasePlusCommissionEmployee

#endif
