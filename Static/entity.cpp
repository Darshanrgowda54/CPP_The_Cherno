#include "entity.h"
#include <iostream>

int Entity:: x = 20;
int Entity :: y = 30;

Entity::Entity() {}

void Entity::print()
{
    std::cout<<x<<","<<y<<std::endl;
}
