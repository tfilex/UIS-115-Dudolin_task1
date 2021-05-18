#pragma once
#include <cmath>

const double M_PI = 3.14159265359;
class Cone
{
protected:
	const double M_PI = 3.14159265359;
	double height;
	double radius;
	void set_cone(double height, double radius);
public:
	Cone();
	Cone(double height, double radius);

	~Cone() = default;

	double get_volume(double height, double radius);

	double get_surface_area(double height, double radius);

};