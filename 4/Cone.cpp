#include<cmath>
#include "Cone.h"
using namespace std;

Cone::Cone()
{
	this->height = 1;
	this->radius = 1;
}

void Cone::set_cone(double height, double radius)
{
	if (height > 0 && radius > 0)
	{
		this->height = height;
		this->radius = radius;
	}
	else
	{
		this->height = 1;
		this->radius = 1;
	}
}

Cone::Cone(double height, double radius)
{
	void set_cone(double height, double radius);
}

double Cone::get_volume(double height, double radius)
{
	{
		double v = (1 / 3) * M_PI * radius * radius * height;
		return v;
	}
}

double Cone::get_surface_area(double height, double radius)
{
	double l = sqrt(radius * radius + height * height);
	double s = M_PI * radius * (radius + l);
	return s;
}


