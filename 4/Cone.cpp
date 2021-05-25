#include<cmath>
#include "Cone.h"
#include <stdexcept>
using namespace std;


Cone::Cone(double height, double radius)
{
	this->height = height;
	this->radius = radius;
}

double Cone::get_volume()
{
	return ((1.0 / 3.0) * M_PI * radius * radius * height);
}

double Cone::get_surface_area()
{
	double l = sqrt(radius * radius + height * height);
	double s = M_PI * radius * (radius + l);
	return s;
}


