#include "coord3d.h"

namespace opmm {

Coord3d::Coord3d()
{

}

Coord3d::Coord3d(float x)
    :mX(x)
{

}

Coord3d::Coord3d(float x, float y)
    :mX(x), mY(y)
{

}

Coord3d::Coord3d(float x, float y, float z)
    :mX(x), mY(y), mZ(z)
{

}

Coord3d Coord3d::operator+(const Coord3d &b) const
{
    return Coord3d(mX + b.mX, mY + b.mY, mZ + b.mZ);
}

Coord3d Coord3d::operator-(const Coord3d &b) const
{
    return Coord3d(mX - b.mX, mY - b.mY, mZ - b.mZ);
}

Coord3d Coord3d::operator*(const double &scalar) const
{
    return Coord3d(mX*scalar, mY*scalar, mZ*scalar);
}



double Coord3d::x() const
{
    return mX;
}

void Coord3d::setX(double x)
{
    mX = x;
}

double Coord3d::y() const
{
    return mY;
}

void Coord3d::setY(double y)
{
    mY = y;
}

double Coord3d::z() const
{
    return mZ;
}

void Coord3d::setZ(double z)
{
    mZ = z;
}

Coord3d operator *(const double &scalar, const Coord3d &b)
{
    return(b*scalar);
}

double operator ->*(const Coord3d &a, const Coord3d &b)
{
    return sqrt(pow(a.x() - b.x(),2) + pow(a.y() - b.y(),2) + pow(a.z() - b.z(),2));
}


}
