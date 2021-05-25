#include "Pyramid.h"
#include <cmath>

Pyramid::Pyramid(double a, double b, double height)
{
	this->a = a;
	this->b = b;
	this->height = height;
}

double Pyramid::get_volume()
{
	return ((1.0 / 3.0) * height * a * a);
}

double Pyramid::get_surface_area()
{
	return a * a + 2 * a * sqrt(b * b - ((a * a) / (4)));
}
