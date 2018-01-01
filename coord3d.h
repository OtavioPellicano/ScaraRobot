#ifndef COORDXY_H
#define COORDXY_H

#include <math.h>

namespace opmm {

class Coord3d
{
public:
    Coord3d();

    Coord3d(float x);

    Coord3d(float x, float y);

    Coord3d(float x, float y, float z);

    //operators:
    Coord3d operator +(const Coord3d &b) const;
    Coord3d operator -(const Coord3d &b) const;

    Coord3d operator *(const double &scalar) const;



    double x() const;
    void setX(double x);

    double y() const;
    void setY(double y);

    double z() const;
    void setZ(double z);

private:

    double mX = 0;
    double mY = 0;
    double mZ = 0;


};

    //operators:
    Coord3d operator *(const double &scalar, const Coord3d &b);

    double operator ->*(const Coord3d &a, const Coord3d &b);    //distance between two points

}



#endif // COORDXY_H
