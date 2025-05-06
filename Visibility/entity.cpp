#include "entity.h"
#include <iostream>

Entity::Entity()
{
    std::cout<<"Entity Constructor Called"<<std::endl;
}

Entity::~Entity()
{
    std::cout<<"Entity Destructor Called"<<std::endl;
}

void Entity::printC(int newC)
{
    this->m_c = newC;
    std::cout<<"Print public"<<"  "<<m_c<<std::endl;
}

int Entity::getB()
{
    return m_b;
};

void Entity::setB(int newB)
{
    m_b = newB;
}

int Entity::getA()
{
    return m_a;
}

void Entity::setA(int newA)
{
    this->m_a = newA;
}
