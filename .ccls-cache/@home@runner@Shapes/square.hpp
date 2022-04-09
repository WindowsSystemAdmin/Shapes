#include <iostream>
#include "rectangle.hpp"

using namespace std;


class Square : public Rectangle{
	public:
		double GetArea();
		double GetParameter();
		Square();
		Square(double _side1length);
		~Square();
	private:
		double sidelength;

};