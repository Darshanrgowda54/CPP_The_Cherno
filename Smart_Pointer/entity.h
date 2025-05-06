#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
class Entity
{
public:
    Entity();
    ~Entity();

    void print()
    {
        std::cout<<"Print function Called"<<std::endl;
    }
};

#endif // ENTITY_H
