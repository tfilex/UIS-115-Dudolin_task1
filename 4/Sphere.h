#pragma once
#include "Cone.h"

class Sphere : public Cone
{
private:
	double radius;
public:

	Sphere(double radius);

	~Sphere() = default;

	double get_volume(double radius);

	double get_surface_area(double radius);
};
