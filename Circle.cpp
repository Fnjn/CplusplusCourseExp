#include "Circle.h"

using namespace std;

Circle::Circle()
{
    radius = 1;
}

Circle::Circle(double radius)
{
    this->radius = radius;
}

double Circle::getRadius()
{
    return radius;
}

void Circle::setRadius(double radius)
{
    this->radius = radius;
}

bool Circle::operator<(Circle &C2)
{
    if(radius < C2.radius)
        return true;
    return false;
}

bool Circle::operator<=(Circle &C2)
{
    if(radius <= C2.radius)
        return true;
    return false;
}

bool Circle::operator==(Circle &C2)
{
    if(radius == C2.radius)
        return true;
    return false;
}

bool Circle::operator!=(Circle &C2)
{
    if(radius != C2.radius)
        return true;
    return false;
}

bool Circle::operator>(Circle &C2)
{
    if(radius > C2.radius)
        return true;
    return false;
}

bool Circle::operator>=(Circle &C2)
{
    if(radius >= C2.radius)
        return true;
    return false;
}

double Circle::getArea()
{
    return M_PI * M_PI * radius;
}
