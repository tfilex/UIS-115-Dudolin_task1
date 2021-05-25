#include "Sphere.h"

Sphere::Sphere(double radius)
{
	this->radius = radius;
}

double Sphere::get_volume()
{
	return (4 / 3) * M_PI * radius * radius * radius;
}

double Sphere::get_surface_area()
{
	double s = 4 * M_PI * radius * radius;
	return s;
}
