#include<iostream>
#include<stdexcept>
#include"square_2D.h"
using namespace std;

square_2d::square_2d(const double l, const double w)
{
	setlength(l);
	
}

void square_2d::setlength(const double l) {
	length = l;
}



double square_2d::getlength() {
	return length;
}



//面積計算：長*寬
double square_2d::compute_area() const {
	return length * length*3.14;
}
