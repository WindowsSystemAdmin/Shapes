#include <iostream>
#include "rectangle.hpp"

using namespace std;

Rectangle::Rectangle(){
	side1length = 3;
	side2length = 5;
}
Rectangle::Rectangle(double _side1length, double _side2length){
	side1length = _side1length;
	side2length = _side2length;
}
double Rectangle::GetArea(){
return side1length*side2length;
	}