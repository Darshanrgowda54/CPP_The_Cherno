#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
public:
    Vehicle();
    virtual ~Vehicle();

    virtual void printName() = 0;
};

#endif // VEHICLE_H
