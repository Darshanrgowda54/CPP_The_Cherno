#include <iostream>

using namespace std;

class Entity
{
public:
    Entity()
    {

    }
    ~Entity()
    {

    }

    void print()const
    {
        cout << "Hello World!" << endl;
    }
};

int main()
{
    Entity e1;
    e1.print();


    Entity* e = new Entity;
    //p.print();  /// Dot Operator

    e->print();   /// Arrow Operator

    delete e;
    return 0;
}
