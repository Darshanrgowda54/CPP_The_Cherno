#include "entity.h"
#include <iostream>

using namespace std;

int main()
{
    Entity entity;
    entity.printC(10);

    entity.setB(20);
    std::cout<<entity.getB()<<std::endl;

    entity.setA(30);
    std::cout<<entity.getA()<<std::endl;

    cout << "Hello World!" << endl;
    return 0;
}
