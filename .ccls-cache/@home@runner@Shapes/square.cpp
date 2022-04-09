#include <iostream>
#include "square.hpp"

using namespace std;

Square::Square(){
	side1length = 2;
	side2length = 2;
}
Square::Square(double _side1length){
	side1length = _side1length;
}