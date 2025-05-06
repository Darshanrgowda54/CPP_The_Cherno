#include "car.h"
#include <iostream>
#include <ostream>

Car::Car()
{
    std::cout<<"Car Constructor"<<std::endl;
}

Car::Car(std::string name, std::string brand)
{
    std::cout<<"Parameter Car Constructor"<<std::endl;
    this->m_name = name;
    this->m_brand = brand;
    std::cout<<m_name<<"   "<<m_brand<<std::endl;
}

Car::~Car()
{
    std::cout<<"Car Destructor Called"<<std::endl;
}
