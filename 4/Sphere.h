#pragma once
#include "Cone.h"

class Sphere : public Cone
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
	~Sphere() = default;


        /**
	*\brief метод, возвращающий объём шара
	* \param радиус
	*/
	double get_volume(double radius);

        /** метод, возвращающий площадь поверхности шара
	*\brief 
	* \param радиус
	*/
	double get_surface_area(double radius);
};
