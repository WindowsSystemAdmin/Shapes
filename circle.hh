#ifndef SHAPES_circle_HH
#define SHAPES_circle_HH

#include "shapes.hh"

using namespace std;

class Circle : public Shapes{
public:
    double GetArea() override;
    double GetParameter() override;
    Circle();
    Circle(double _radius);
private:
    double radius = 0.00;
    double result = 0.00;
    double radius_squared = 0.00;
};
#endif
