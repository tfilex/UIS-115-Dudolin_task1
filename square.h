#pragma once

class Square 
{
private:
	double x1;
	double y1;
	double length;

public:

	Square()
	{
		x1 = 0.0;
		y1 = 0.0;
		length = 0.0;
	}

	Square(double x1, double y1, double length)
	{
		this-> x1 = x1;
		this-> y1 = y1;
		this->length = length;
	}

	double get_vortex_x1()
	{
		return x1;
	}
	double get_vortex_x2()
	{
		return x1 + length;
	}
	double get_vortex_x3()
	{
		return x1 + length;
	}
	double get_vortex_x4()
	{
		return x1;
	}
	double get_vortex_y1()
	{
		return y1;
	}
	double get_vortex_y2()
	{
		return y1;
	}
	double get_vortex_y3()
	{
		return y1 - length;
	}
	double get_vortex_y4()
	{
		return y1 - length;
	}




	double get_length_change(double Change_of_length)
	{
		return length + Change_of_length;
	}


	double get_changed_length_x1(double Change_of_length)
	{
		return x1;
	}
	double get_changed_length_y1(double Change_of_length)
	{
		return y1;
	}
	double get_changed_length_x2(double Change_of_length)
	{
		return x1 + length + Change_of_length;
	}
	double get_changed_length_y2(double Change_of_length)
	{
		return y1;
	}
	double get_changed_length_x3(double Change_of_length)
	{
		return x1 + length + Change_of_length;
	}
	double get_changed_length_y3(double Change_of_length)
	{
		return y1 - length - Change_of_length;
	}
	double get_changed_length_x4(double Change_of_length)
	{
		return x1;
	}
	double get_changed_length_y4(double Change_of_length)
	{
		return y1 - length - Change_of_length;
	}



	double get_changed_coordinates_x1(double change_of_coordinate)
	{
		return x1 + change_of_coordinate;
	}
	double get_changed_coordinates_y1(double change_of_coordinate)
	{
		return y1 + change_of_coordinate;
	}
	double get_changed_coordinates_x2(double change_of_coordinate)
	{
		return x1 + change_of_coordinate + length;
	}
	double get_changed_coordinates_y2(double change_of_coordinate)
	{
		return y1 + change_of_coordinate;
	}
	double get_changed_coordinates_x3(double change_of_coordinate)
	{
		return x1 + change_of_coordinate + length;
	}
	double get_changed_coordinates_y3(double change_of_coordinate)
	{
		return y1 + change_of_coordinate - length;
	}
	double get_changed_coordinates_x4(double change_of_coordinate)
	{
		return x1 + change_of_coordinate;
	}
	double get_changed_coordinates_y4(double change_of_coordinate)
	{
		return y1 + change_of_coordinate - length;
	}




	double get_perimeter()
	{
		return length * 4;
	}




	double get_square()
	{
		return length * length;
	}




	double get_rotated_x1()
	{
		return x1 + length;
	}
	double get_rotated_y1()
	{
		return y1;
	}
	double get_rotated_x2()
	{
		return x1 + length;
	}
	double get_rotated_y2()
	{
		return y1 - length;
	}
	double get_rotated_x3()
	{
		return x1;
	}
	double get_rotated_y3()
	{
		return y1 - length;
	}
	double get_rotated_x4()
	{
		return x1;
	}
	double get_rotated_y4()
	{
		return y1;
	}
};