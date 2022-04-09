#include "trapezoid.hh"

using namespace std;

Trapezoid::Trapezoid(){
	base1 = 7.656;
	base2 = 88.323;
	height = 9.12;
	side1length = 1.3;
	side2length = .8844;
}
Trapezoid::Trapezoid(double _base1, double _base2, double _side1length, double _side2length, double _height){
	_base1 = base1;
	_base2 = base2;
	_side1length = side1length;
	_side2length = side2length;
	_height = height;
}
double Trapezoid::GetArea(){
	result = ((base1 + base2)/2)*height;
	return result;
}
double Trapezoid::GetParameter(){
	result = base1 + base2 + side1length + side2length;
	return result;
}
