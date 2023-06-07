#include<iostream>
#include<stdexcept>
#include"Pie_2D.h"
using namespace std;

Pie_2d::Pie_2d(const double r)
{
	setradius(r);
}

void Pie_2d::setradius(const double r) {
	radius = r;
}

double Pie_2d::getradius() {
	return radius;
}

//面積計算：長*寬
double Pie_2d::compute_area() const {
	return radius * radius *3.14;
}
