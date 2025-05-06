#include <iostream>
#include <vector>

using namespace std;

class Entity
{

public:
    int m_x, m_y, m_z;
    Entity(int x, int y, int z):m_x(x),m_y(y),m_z(z){
        //std::cout<<"Created"<<std::endl;
    }

    ~Entity(){
        // std::cout<<"Deleted"<<std::endl;
    }

    Entity(const Entity& e):m_x(e.m_x),m_y(e.m_y),m_z(e.m_z){
        std::cout<<"Copied"<<std::endl;
    }
};

int main()
{
    std::vector<Entity> entity;
    // entity.push_back({1,2,3});
    // entity.push_back({4,5,6});
    // entity.push_back({7,8,9});
    // entity.reserve(3);

    entity.emplace_back(1,2,3);
    entity.emplace_back(4,5,6);
    entity.emplace_back(7,8,9);

    return 0;
}
