#include "entity.h"
#include <iostream>

Entity::Entity()
{}

void Entity::function()
{
    static int number = 0;  /// Local Static
    number++;

    std::cout<<number<<std::endl;

}
