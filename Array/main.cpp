#include <iostream>

using namespace std;

class Entity
{
public:
    int* example = new int [5];

    Entity()
    {
        for(int i =0;i<=5;i++)
        {
            std::cout<<i<<std::endl;
        }
    }

    ~Entity()
    {
        delete[] example;
    }
};

int  main()
{

    Entity e;
    return 0;
}


