#ifndef SHAPES_square_HH
#define SHAPES_square_HH
#include "rectangle.hh"

using namespace std;

class Square : public Rectangle{
public:
    double GetArea() override;
    double GetParameter() override;
    Square();
    Square(double _side1length);
private:
    double result = 0;
};
#endif
