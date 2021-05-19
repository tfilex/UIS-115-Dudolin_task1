#pragma once
#include "Cone.h"

class Pyramid : public Cone
{
private:
        /**
	*\brief сторона a
	*/
	double a;

        /**
	*\brief сторона b
	*/
	double b;

        /**
	*\brief сторона c
	*/
	double c;

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
	explicit Pyramid(double a, double b, double c, double height);


        /**
	*\brief деструктор по умолчанию
	*/
	~Pyramid() = default;


        /**
	*\brief метод, возвращающий объём пирамиды
	* \param сторона a
	* \param сторона b
	* \param сторона c
	* \param высота
	*/
	double get_volume(double a, double b, double c, double height);

        /**
	*\brief метод, возвращающий площадь поверхности пирамиды
	* \param сторона a
	* \param сторона b
	* \param сторона c
	* \param высота
	*/
	double get_surface_area(double a, double b, double c, double height);


};
