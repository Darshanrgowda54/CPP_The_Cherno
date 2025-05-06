#ifndef ENTITY_H
#define ENTITY_H

#include <string>
class Entity
{
public:
    Entity();
    ~Entity();

private:
    std::string m_name;
    int m_score;
};

#endif // ENTITY_H
