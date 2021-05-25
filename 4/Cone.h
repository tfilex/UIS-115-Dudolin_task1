#pragma once
#include <cmath>
#include "Geometric_figure.h"

class Cone : public Geometric_figure
{
private:


	/**
*\brief высота
*/
	double height;

	/**
*\brief радиус
*/
	double radius;

	/**
*\brief сеттер для проверки параметров
*/
public:
	/**
*\brief конструктор с параметрами
* \param высота
* \param радиус
*/
	Cone(double height, double radius);


	/**
*\brief деструктор по умолчанию
*/
	~Cone() override = default;


	/**
*\brief метод, вычисляющий объём конуса
* \param высота
* \param радиус
*/
	double get_volume() override;

	/**
*\brief метод, вычисляющий площадь поверхности
* \param высота
* \param радиус
*/
	double get_surface_area() override;

};