#pragma once
class Geometric_figure
{
protected:
	const double M_PI = 3.14159265359;
public:

	/**
	*\brief виртуальный метод для вычисления объёма
	*/
	virtual double get_volume() = 0;

	/**
	*\brief виртуальный метод для вычисления площади поверхности
	*/
	virtual double get_surface_area() = 0;

	/**
	*\brief виртуальный деструктор
	*/
	virtual ~Geometric_figure() = 0;
};
