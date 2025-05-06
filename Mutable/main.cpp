#include "entity.h"
#include <iostream>

using namespace std;

int main()
{
    const std::string name = "Darshan";

    Entity e;
    e.setName(name);
    std::cout<<e.getName()<<std::endl;
    cout << "Hello World!" << endl;
    return 0;
}
