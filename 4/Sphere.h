#pragma once
#include "Cone.h"
#include "Geometric_figure.h"

class Sphere : public Geometric_figure
{
private:
	/**
*\brief радиус
*/
	double radius;
public:
	/**
*\brief конструктор с параметрами
* \param радиус
*/
	explicit Sphere(double radius);

	/**
*\brief деструктор по умолчанию
*/
	~Sphere() override = default;


	/**
	*\brief метод, возвращающий объём шара
	* \param радиус
	*/
	double get_volume() override;

	/** метод, возвращающий площадь поверхности шара
*\brief
* \param радиус
*/
	double get_surface_area() override;
};