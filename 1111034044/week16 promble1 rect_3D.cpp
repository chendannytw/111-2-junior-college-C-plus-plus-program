#include<iostream>
#include<stdexcept>

#include"rect_3D.h"
using namespace std;

rect_3d::rect_3d(double l, double w, double h)
{
	setlength(l);
	setheight(h);
}

void rect_3d::setheight(const double h) {
	height = h;
}

double rect_3d::getheight() {
	return height;
}

//體積計算：長*寬*高
double rect_3d::compute_volume() const {
	return length * length * 3.14*height;
}

//表面積計算：(長*寬+寬*高+長*高)*2
double rect_3d::compute_surface() const {
	return (length* length*3.14*2+ length*2*3.14* height);
}
