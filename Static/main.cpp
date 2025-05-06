#include "entity.h"
#include <iostream>

using namespace std;

int main()
{
    Entity e;
    e.print();

    Entity e1;
    Entity::x = 5 ;
    Entity::y = 6;
    e1.print();
    cout << "Hello World!" << endl;
    return 0;
}
