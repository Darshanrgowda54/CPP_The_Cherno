#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle()
{
    std::cout<<"Vehicle Constructor Called"<<std::endl;
}

Vehicle::Vehicle(std::string name, std::string brand)
{
    std::cout<<"Vehicle Parameter Constructor Called"<<std::endl;
    this->m_brand = brand;
    this->m_name = name;
}

Vehicle::~Vehicle()
{
    std::cout<<"Vehicle Destructor Called"<<std::endl;
}
