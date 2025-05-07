#include "entity.h"
#include <iostream>

using namespace std;

int main()
{
    Entity e;

    for(int i = 0;i<5;i++)
    {
        e.function();
    }
    cout << "Hello World!" << endl;
    return 0;
}
