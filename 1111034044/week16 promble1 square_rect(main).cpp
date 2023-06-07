#include<iostream>
#include<stdexcept>
#include"square_2D.h"
#include"rect_3D.h"
using namespace std;

int main(void) {

	double length;
	double width;
	double height;

	//視窗輸出配置
	cout << "Enter the length and width for square：" << endl;

	cout << "  半徑=";
	cin >> length;

	cout << "  高 =";
	cin >> height;

	square_2d userenter(length, length);

	rect_3d userenter2(length, length,height);

	cout << "-------------------------------------------------" << endl;
	cout << "The result is:\n\n";
	cout << "  The result of square:\n";
	cout << "     Length：" << userenter.getlength() << " cm" << "\n     The area is "
		<< userenter.compute_area() << " cm2\n" << endl;
	cout << "  The result of rect:\n";
	cout << "     Length：" << userenter2.getlength() << " cm"<< " | Height：" << userenter2.getheight()
		<< " cm" << "\n     The volume is " << userenter2.compute_volume() << " cm3 | The surface is " << userenter2.compute_surface() << " cm2\n" << endl;

	system("pause");
}

