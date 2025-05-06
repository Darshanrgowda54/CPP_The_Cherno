#ifndef CAR_H
#define CAR_H

#include "vehicle.h"
#include <string>

class Car : public Vehicle
{
public:
    Car(std::string brand);
    ~Car();

    std::string getBrand();
    void printName();
private:
    std::string m_brand;
};

#endif // CAR_H
