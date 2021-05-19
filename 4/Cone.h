#pragma once
#include <cmath>

class Cone
{
protected:
        /**
	*\brief константа π
	*/
	const double M_PI = 3.14159265359;

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
	void set_cone(double height, double radius);
public:
        /**
	*\brief конструктор по умолчанию
	*/
	Cone();
        /**
	*\brief конструктор с параметрами
	* \param высота
	* \param радиус
	*/
	Cone(double height, double radius);


        /**
	*\brief деструктор по умолчанию
	*/
	~Cone() = default;


        /**
	*\brief метод, вычисляющий объём конуса
	* \param высота
	* \param радиус
	*/
	double get_volume(double height, double radius);

        /**
	*\brief метод, вычисляющий площадь поверхности
	* \param высота
	* \param радиус
	*/
	double get_surface_area(double height, double radius);

};
