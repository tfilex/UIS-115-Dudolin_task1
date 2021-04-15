#pragma once

class Square
{
private:
	double x1;
	double y1;
	double length;

public:


	/**
	*\brief Конструктор с параметрами
		* \param x1 координата x1
		* \param y1 координата y1
		* \param length длина 
	*/
	explicit Square(double x1, double y1, double length);


	/**
	*\brief Конструктор копирования по умолчанию
	*/
	Square(const  Square&) = default;

	/**
	*\brief Конструктор присвоения
	*/
	Square& operator=(const  Square&) = default;


	/**
	*\brief метод, выводящий координату x1
	*  \return координата x1
	*/
	double get_vortex_x1();
	/**
	*\brief метод, выводящий координату x2
	*  \return координата x1
	*/
	double get_vortex_x2();
	/**
	*\brief метод, выводящий координату x3
	*  \return координата x3
	*/
	double get_vortex_x3();
	/**
	*\brief метод, выводящий координату x4
	*  \return координата x4
	*/
	double get_vortex_x4();

	/**
	*\brief метод, выводящий координату y1
	*  \return координата y1
	*/
	double get_vortex_y1();
	/**
	*\brief метод, выводящий координату y2
	* 	* \return координата y2
	*/
	double get_vortex_y2();
	/**
	*\brief метод, выводящий координату y3
	* 	* \return координата y3
	*/
	double get_vortex_y3();
	/**
	*\brief метод, выводящий координату y4
	* 	* \return координата y4
	*/
	double get_vortex_y4();


	/**
	*\brief метод, выводящий изменённую длину
	* 
		* \param изменение длины
		* \return изменённая длина
	*/
	double get_length_change(double Change_of_length);


	/**
	*\brief метод, выводящий координату x1 с учётом изменённой длины
	*
	* \param изменение длины
	* \return изменённая координата x1
	*/
	double get_changed_length_x1(double Change_of_length);
	/**
	*\brief метод, выводящий координату x2 с учётом изменённой длины
	*
	* \param изменение длины
	* \return изменённая координата x2
	*/
	double get_changed_length_x2(double Change_of_length);
	/**
	*\brief метод, выводящий координату x3 с учётом изменённой длины
	*
	* \param изменение длины
	* \return изменённая координата x3
	*/
	double get_changed_length_x3(double Change_of_length);
	/**
	*\brief метод, выводящий координату x4 с учётом изменённой длины
	*
	* \param изменение длины
	* \return изменённая координата x4
	*/
	double get_changed_length_x4(double Change_of_length);


	/**
	*\brief метод, выводящий координату y1 с учётом изменённой длины
	*
	* \param изменение длины
	* \return изменённая координата y1
	*/
	double get_changed_length_y1(double Change_of_length);
	/**
	*\brief метод, выводящий координату y2 с учётом изменённой длины
	*
	* \param изменение длины
	* \return изменённая координата y2
	*/
	double get_changed_length_y2(double Change_of_length);
	/**
	*\brief метод, выводящий координату y3 с учётом изменённой длины
	*
	* \param изменение длины
	* \return изменённая координата y3
	*/
	double get_changed_length_y3(double Change_of_length);
	/**
	*\brief метод, выводящий координату y4 с учётом изменённой длины
	*
	* \param изменение длины
	* \return изменённая координата y4
	*/
	double get_changed_length_y4(double Change_of_length);



	/**
	*\brief метод, выводящий координату x1 с учётом изменёния координат
	*
	* \param изменение координат
	* \return изменённая координата x1
	*/
	double get_changed_coordinates_x1(double change_of_coordinate);
	/**
	*\brief метод, выводящий координату x2 с учётом изменёния координат
	*
	* \param изменение координат
	* \return изменённая координата x2
	*/
	double get_changed_coordinates_x2(double change_of_coordinate);
	/**
	*\brief метод, выводящий координату x3 с учётом изменёния координат
	*	
	* \param изменение координат
	* \return изменённая координата x3
	*/
	double get_changed_coordinates_x3(double change_of_coordinate);
	/**
	*\brief метод, выводящий координату x4 с учётом изменёния координат
	*
	* \param изменение координат
	* \return изменённая координата x4
	*/
	double get_changed_coordinates_x4(double change_of_coordinate);


	/**
	*\brief метод, выводящий координату y1 с учётом изменёния координат
	*
	* \param изменение координат
	* \return изменённая координата y1
	*/
	double get_changed_coordinates_y1(double change_of_coordinate);
	/**
	*\brief метод, выводящий координату y2 с учётом изменёния координат
	*
	* \param изменение координат
	* \return изменённая координата y2
	*/
	double get_changed_coordinates_y2(double change_of_coordinate);
	/**
	*\brief метод, выводящий координату y3 с учётом изменёния координат
	*
	* \param изменение координат
	* \return изменённая координата y3
	*/
	double get_changed_coordinates_y3(double change_of_coordinate);
	/**
	*\brief метод, выводящий координату y4 с учётом изменёния координат
	*
	* \param изменение координат
	* \return изменённая координата y4
	*/
	double get_changed_coordinates_y4(double change_of_coordinate);


	/**
	*\brief метод, выводящий периметр квадрата
	*
	* \return периметр
	*/
	double get_perimeter();

	/**
	*\brief метод, выводящий площадь квадрата
	*
	* \return площадь
	*/
	double get_square();


	/**
	*\brief метод, выводящий координату x1, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата x1
	*/
	double get_rotated_x1();
	/**
	*\brief метод, выводящий координату x2, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата x2
	*/
	double get_rotated_x2();
	/**
	*\brief метод, выводящий координату x3, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата x3
	*/
	double get_rotated_x3();
	/**
	*\brief метод, выводящий координату x4, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата x4
	*/
	double get_rotated_x4();

	/**
	*\brief метод, выводящий координату y1, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата y1
	*/
	double get_rotated_y1();
	/**
	*\brief метод, выводящий координату y2, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата y2
	*/
	double get_rotated_y2();
	/**
	*\brief метод, выводящий координату y3, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата y3
	*/
	double get_rotated_y3();
	/**
	*\brief метод, выводящий координату y4, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата y4
	*/
	double get_rotated_y4();

	/**
	*\brief деструктор по умолчанию
	*/
	~Square() = default;
};