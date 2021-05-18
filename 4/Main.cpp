#include <iostream>
#include"Cone.h"
#include"Pyramid.h"
#include"Sphere.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	double r = 100;
	double h = 100;

	Cone a(r, h);
	Sphere b(r);
	Pyramid c(1, 2, 3, h);

	cout << "объём конуса равен: " << a.get_volume(h, r) << endl;
	cout << "площадь поверхности конуса равна:" << a.get_volume(h, r) << endl;

	cout << "объём шара равен: " << b.get_volume(r) << endl;
	cout << "площадь поверхности шара равна:" << b.get_surface_area(r) << endl;

	cout << "объём пирамиды равен: " << c.get_volume(1, 2, 3, h) << endl;
	cout << "площадь поверхности пипрамиды равна:" << c.get_surface_area(1, 2, 3, h) << endl;


}