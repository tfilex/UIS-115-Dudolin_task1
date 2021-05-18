#pragma once
#include "Cone.h"

class Pyramid : public Cone
{
private:
	double a;
	double b;
	double c;
	double height;
public:
	explicit Pyramid(double a, double b, double c, double height);

	~Pyramid() = default;

	double get_volume(double a, double b, double c, double height);


	double get_surface_area(double a, double b, double c, double height);


};