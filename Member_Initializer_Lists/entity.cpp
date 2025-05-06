#include "entity.h"
#include <iostream>

Entity::Entity():m_name("Unknown"),m_score(0)
{
    std::cout<<"Entity Constructor Called"<<std::endl;
}


Entity::~Entity()
{
    std::cout<<"Entity Destructor Called"<<std::endl;
}

