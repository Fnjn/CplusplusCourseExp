#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include <iostream>
#include <cmath>

class Circle
{
public:
    Circle();
    Circle(double radius);
    double getRadius();
    void setRadius(double radius);
    double getArea();

    bool operator<(Circle &C2);
    bool operator<=(Circle &C2);
    bool operator==(Circle &C2);
    bool operator!=(Circle &C2);
    bool operator>(Circle &C2);
    bool operator>=(Circle &C2);


private:
    double radius;
};

#endif // CIRCLE_H_INCLUDED
