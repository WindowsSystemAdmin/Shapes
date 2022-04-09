#include <iostream>
#include "shapes.hpp"

using namespace std;

class Rectangle : public Shapes{
	protected:
		double side1length;
		double side2length;
	public:
		Rectangle();
		Rectangle(double _side1length, double _side2length);
		~Rectangle();
		double GetArea();
		double GetParameter();
};