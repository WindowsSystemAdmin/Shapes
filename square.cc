#include "square.hh"

using namespace std;

Square::Square(){
    side1length = 2;
}

Square::Square(double _side1length){
    side1length = _side1length;
}

double Square::GetParameter() {
    return 4*side1length;
}

double Square::GetArea() {
    result = pow(side1length,2);
    return result;
}
