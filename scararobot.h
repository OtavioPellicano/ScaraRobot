#ifndef SCARAROBOT_H
#define SCARAROBOT_H
#include "coord3d.h"

namespace opmm {

class ScaraRobot
{
public:     //Prototypes
    ScaraRobot();

    Coord3d p1() const;
    void setP1(const Coord3d &p1);

    Coord3d p2() const;
    void setP2(const Coord3d &p2);

    double angularCruiseSpeed() const;
    void setAngularCruiseSpeed(double angularCruiseSpeed);


public:     //Variables


private:    //Prototypes


private:    //Variables

    Coord3d mP1;
    Coord3d mP2;

    double mAngularCruiseSpeed;


};



}


#endif // SCARAROBOT_H
