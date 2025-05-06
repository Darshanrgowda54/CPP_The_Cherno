#include "vehicle.h"
#include <iostream>


Vehicle::Vehicle()
{
    std::cout << "Vehicle Constructor Called" << std::endl;
}

Vehicle::~Vehicle()
{
    std::cout << "Vehicle Destructor Called" << std::endl;
}

void Vehicle::printName()
{
    std::cout << "Hello Vehicle" << std::endl;
}
