#ifndef Included_shapes_HH
#define Included_shapes_HH

#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
using namespace std;

class Shapes{
public:
    virtual double GetArea() = 0;
    virtual double GetParameter() = 0;
};
#endif
