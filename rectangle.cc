#include "rectangle.hh"

using namespace std;

Rectangle::Rectangle(){
    side1length = 14.95;
    side2length = 52.001;
}
Rectangle::Rectangle(double _side1length, double _side2length){
    side1length = _side1length;
    side2length = _side2length;
}
double Rectangle::GetArea(){
    return side1length * side2length;
}
double Rectangle::GetParameter() {
    result = (2*side1length)+(2*side2length);
    return result;
}
