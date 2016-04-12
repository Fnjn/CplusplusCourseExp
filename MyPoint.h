#ifndef MYPOINT_H_INCLUDED
#define MYPOINT_H_INCLUDED

#include <iostream>
#include <cmath>

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

class _3DPoint:public MyPoint
{
public:
    _3DPoint();
    _3DPoint(double x, double y, double z);

    void setZ(double z);
    double getZ();

    double distance(_3DPoint P2);


private:
    double z;
};
#endif // MYPOINT_H_INCLUDED
