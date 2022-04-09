#ifndef SHAPES_TRIANGLE_HH
#define SHAPES_TRIANGLE_HH
#include "shapes.hh"

using namespace std;

class Triangle : public Shapes{
public:
    double GetArea() override;
    double GetParameter() override;
    Triangle();
    Triangle(double _base, double _height, double _side_a, double _side_c);
private:
    double base = 0.00;
    double height = 0.00;
    double result = 0.00;
    double side_a = 0.00;;
    double side_c = 0.00;
};
#endif
