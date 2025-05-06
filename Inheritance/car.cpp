#include "car.h"
#include <iostream>

Car::Car(std::string name, std::string brand, int wheels)
{
    std::cout<<"Car Parameter Constructor Called"<<std::endl;
    this->m_name = name;
    this->m_brand = brand;
    this->m_wheel = wheels;

    std::cout<<m_name<<"  "<<m_brand<<"  "<<m_wheel<<std::endl;
}

Car::~Car()
{
    std::cout<<"Car Destructor Called"<<std::endl;
}

