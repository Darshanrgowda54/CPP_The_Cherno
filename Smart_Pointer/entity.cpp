#include "entity.h"
#include <iostream>

Entity::Entity()
{
    std::cout<<"Entity Created"<<std::endl;
}

Entity::~Entity()
{
    std::cout<<"Entity Destroyed"<<std::endl;
}
