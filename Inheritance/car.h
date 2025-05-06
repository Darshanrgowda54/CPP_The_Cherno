#ifndef CAR_H
#define CAR_H

#include "vehicle.h"
class Car:public Vehicle
{
public:
    Car(std::string name,std::string brand, int wheels);
    ~Car();

    int m_wheel;
};

#endif // CAR_H
