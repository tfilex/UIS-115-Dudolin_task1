#include "Sphere.h"

Sphere::Sphere(double radius)
{
	this->radius = radius;
}

double Sphere::get_volume(double radius)
{
	double v = (4 / 3) * M_PI * radius * radius * radius;
	return v;
}

double Sphere::get_surface_area(double radius)
{
	double s = 4 * M_PI * radius * radius;
	return s;
}
