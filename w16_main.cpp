#include<iostream>
#include<stdexcept>
#include"Pie_2D.h"
#include"cylinder_3D.h"
using namespace std;

int main(void) {

	double radius;
	double height;

	//視窗輸出配置
	cout << "Enter the radius  for square：" << endl;

	cout << "  radius=";
	cin >> radius;


	Pie_2d userenter(radius);

	cout << "-------------------------------------------------" << endl;

	cout << "Enter the height for rect:" << endl;

	cout << "  Height=";
	cin >> height;

	cylinder_3d userenter2(radius, height);

	cout << "-------------------------------------------------" << endl;
	cout << "The result is:\n\n";
	cout << "  The result of square:\n";
	cout << "     radius：" << userenter.getradius() << " cm"  << "\n     The area is "
		<< userenter.compute_area() << " cm2\n" << endl;
	cout << "  The result of rect:\n";
	cout << "     radius：" << userenter2.getradius() << " cm"  << " | Height：" << userenter2.getheight()
		<< " cm" << "\n     The volume is " << userenter2.compute_volume() << " cm3 | The surface is " << userenter2.compute_surface() << " cm2\n" << endl;

	system("pause");
}
