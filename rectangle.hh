#ifndef SHAPES_rectangle_HH
#define SHAPES_rectangle_HH
#include "shapes.hh"

using namespace std;

class Rectangle : public Shapes{
public:
    Rectangle();
    Rectangle(double _side1length, double _side2length);
    double GetArea();
    double GetParameter();
    double side1length;
    double side2length;
private:
    double result;
};
#endif
