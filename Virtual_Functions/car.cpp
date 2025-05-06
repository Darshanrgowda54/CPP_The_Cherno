#include "car.h"
#include <iostream>

Car::Car(std::string brand) : m_brand(brand)
{
    std::cout << "Car Parameter Constructor Called" << std::endl;
}

Car::~Car()
{
    std::cout << "Car Destructor Called" << std::endl;
}

std::string Car::getBrand()
{
    return m_brand;
}

void Car::printName()
{
    std::cout <<m_brand<< std::endl;
}
