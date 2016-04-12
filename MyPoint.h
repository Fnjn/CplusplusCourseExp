#include <iostream>
#include <cmath>

#ifndef MYPOINT_H_INCLUDED
#define MYPOINT_H_INCLUDED

class MyPoint
{
public:
    MyPoint();
    MyPoint(double x, double y);

    void setX(double x);
    void setY(double y);
    double getX();
    double getY();

    double distance(MyPoint P2);


private:
    double x;
    double y;
};

class _3DPoint::MyPoint
{
public:
    _3DPoint();
    _3DPoint(double x, double y);

    void setZ(double z);
    double getZ();

    double distance(MyPoint P2);


private:
    double z;
};
#endif // MYPOINT_H_INCLUDED
