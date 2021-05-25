#pragma once
#include "Cone.h"
#include "Geometric_figure.h"

class Pyramid : public Geometric_figure
{
private:
	/**
*\brief сторона a (сторона основания)
*/
	double a;

	/**
*\brief сторона b (стороная треугольника)
*/
	double b;

	/**
*\brief высота
*/
	double height;
public:
	/**
*\brief конструктор с параметрами
* \param сторона a
* \param сторона b
* \param сторона c
* \param высота
*/
	explicit Pyramid(double a, double b, double height);


	/**
*\brief деструктор по умолчанию
*/
	~Pyramid() override = default;


	/**
*\brief метод, возвращающий объём пирамиды
* \param сторона a
* \param сторона b
* \param сторона c
* \param высота
*/
	double get_volume() override;

	/**
*\brief метод, возвращающий площадь поверхности пирамиды
* \param сторона a
* \param сторона b
* \param сторона c
* \param высота
*/
	double get_surface_area() override;


};