#include<iostream>
#include<stdexcept>
#include"pie_2D.h"
#include"cylinder_3D.h"

using namespace std;

int main(void) {
    double radius;
    double height;
    //視窗輸出配置

    cout << "Enter the radius for pie：" << endl;
    cout << "  radius=";
    cin >> radius;
    pie_2D userenter(radius);

    cout << "-------------------------------------------------" << endl;

    cout << "Enter the height for pie:" << endl;
    cout << "  Height=";
    cin >> height;
    cylinder_3D userenter2(radius, height);

    cout << "-------------------------------------------------" << endl;
    cout << "The result is:\n\n";
    cout << "  The result of square:\n";
    cout << "     radius：" << userenter.getradius() << " cm" "\n     The area is "
        << userenter.compute_area() << " cm2\n" << endl;
    cout << "  The result of rect:\n";
    cout << "     radius：" << userenter2.getradius() << " cm" << " | Height：" << userenter2.getheight()
        << " cm" << "\n     The volume is " << userenter2.compute_volume() << " cm3 | The surface is " << userenter2.compute_surface() << " cm2\n" << endl;

    system("pause");

}


#include<iostream>
#include<stdexcept>
#include"cylinder_3D.h"

using namespace std;

cylinder_3D::cylinder_3D(double r, double h)

{
    setradius(r);
    setheight(h);
}

void cylinder_3D::setheight(const double h) {
    height = h;
}

double cylinder_3D::getheight() {
    return height;
}

//體積計算：長*寬*高
double cylinder_3D::compute_volume() const {
    return radius * radius * 3.14 * height;
}

//表面積計算：(長*寬+寬*高+長*高)*2
double cylinder_3D::compute_surface() const {
    return (radius * radius * 3.14 * 2) + height * radius * 2 * 3.14;
}
