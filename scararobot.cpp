#include "scararobot.h"

namespace opmm {

ScaraRobot::ScaraRobot()
{

}

Coord3d ScaraRobot::p1() const
{
    return mP1;
}

void ScaraRobot::setP1(const Coord3d &p1)
{
    mP1 = p1;
}

Coord3d ScaraRobot::p2() const
{
    return mP2;
}

void ScaraRobot::setP2(const Coord3d &p2)
{
    mP2 = p2;
}

double ScaraRobot::angularCruiseSpeed() const
{
    return mAngularCruiseSpeed;
}

void ScaraRobot::setAngularCruiseSpeed(double angularCruiseSpeed)
{
    mAngularCruiseSpeed = angularCruiseSpeed;
}

}

