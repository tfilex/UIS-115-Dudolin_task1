#include <iostream>
#include"Cone.h"
#include"Pyramid.h"
#include"Sphere.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	Cone a(15, 10);
	Sphere b(1);
	Pyramid c(10, 10, 10);

	cout << "объём конуса равен: " << a.get_volume() << endl;
	cout << "площадь поверхности конуса равна:" << a.get_volume() << endl;

	cout << "объём шара равен: " << b.get_volume() << endl;
	cout << "площадь поверхности шара равна:" << b.get_surface_area() << endl;

	cout << "объём пирамиды равен: " << c.get_volume() << endl;
	cout << "площадь поверхности пипрамиды равна:" << c.get_surface_area() << endl;
}