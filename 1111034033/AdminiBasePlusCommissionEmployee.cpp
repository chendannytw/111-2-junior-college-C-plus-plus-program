#include <iostream>
#include <stdexcept>
#include "AdminiBasePlusCommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"

using namespace std;


administrative_pay::administrative_pay(double py)
{
	setpay(py);
} 

void administrative_pay::setpay(double py)
{	
	pay = py;
} 

double administrative_pay::getpay() const
{
	return pay;
}

double administrative_pay::earnings() const
{
	return pay;
} // end function earnings

void administrative_pay::print() const
{
	cout << "administrativePay" << pay;
}
