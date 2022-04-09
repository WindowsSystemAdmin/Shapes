#ifndef Shapes_trapezoid_HH
#define Shapes_trapezoid_HH

#include "shapes.hh"

using namespace std;

class Trapezoid : public Shapes {
public:
		double GetArea()override;
		double GetParameter() override;
		Trapezoid();
		Trapezoid(double _base1, double _base2, double _side1length, double _side2length, double _height);
private:
		double base1 = 0.00;
		double base2 = 0.00;
		double side1length = 0.00;
		double side2length = 0.00;
		double height = 0.00;
		double result = 0.00;
};
#endif
