#include "circle.hh"

using namespace std;

Circle::Circle(){
    radius = 8;
}
Circle::Circle(double _radius) {
    radius = _radius;
}

double Circle::GetArea() {
    radius_squared = pow(radius,2);
    result = M_PI * radius_squared;
    return result;
}
double Circle::GetParameter() {
    result = 2* M_PI *radius;
    return result;
}
