#include "Pyramid.h"

Pyramid::Pyramid(double a, double b, double c, double height)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->height = height;
}

double Pyramid::get_volume(double a, double b, double c, double height)
{
	double p = (a + b + c) / 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	double v = (1 / 3) * s * height;
	return v;
}

double Pyramid::get_surface_area(double a, double b, double c, double height)
{
	double apofem = sqrt(height * height + ((a) / (2 * tan(180 / 3))));
	double p = (a + b + c) / 2;
	double s = p * apofem;
	return s;
}
