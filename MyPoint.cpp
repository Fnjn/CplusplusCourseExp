#include "MyPoint.h"

using namespace std;

MyPoint::MyPoint()
{
    x = 0;
    y = 0;
}

MyPoint::MyPoint(double x, double y)
{
    this->x = x;
    this->y = y;
}

void MyPoint::setX(double x)
{
    this->x = x;
}
void MyPoint::setY(double y)
{
    this->y = y;
}

double MyPoint::getX()
{
    return x;
}

double MyPoint::getY()
{
    return y;
}

double MyPoint::distance(MyPoint P2)
{
    return sqrt(pow((getX() - P2.getX()),2) + pow((getY() - P2.getY()),2));
}


_3DPoint::_3DPoint():MyPoint()
{
    z = 0;
}

_3DPoint::_3DPoint(double x, double y, double z):MyPoint(x, y)
{
    this->z = z;
}

void _3DPoint::setZ(double z)
{
    this->z = z;
}

double _3DPoint::getZ()
{
    return z;
}

double _3DPoint::distance(_3DPoint P2)
{
    return sqrt(pow((getX() - P2.getX()),2) + pow((getY() - P2.getY()),2) + pow((getZ() - P2.getZ()),2));
}
