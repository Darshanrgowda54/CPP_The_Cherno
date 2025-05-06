#include <iostream>
#include <vector>

using namespace std;

class Entity
{
public:
    int x, y, z;

    Entity() : x(0), y(0), z(0)
    {
        cout << "Entity Created " << endl;
    }

    Entity(int x, int y, int z) : x(x), y(y), z(z)
    {
        cout << "Entity Created with values" << endl;
    }

    ~Entity()
    {
        cout << "Entity Deleted" << endl;
    }
};

ostream& operator<<(ostream& stream, const Entity& e)
{
    stream << e.x << " , " << e.y << " , " << e.z;
    return stream;
}

int main()
{
    vector<Entity> entity;
    entity.push_back(Entity(1, 2, 3));

    for (const Entity& e : entity)
    {
        cout << e << endl;
    }

    entity.erase(entity.begin());

    cout << "Hello World!" << endl;
    return 0;
}
