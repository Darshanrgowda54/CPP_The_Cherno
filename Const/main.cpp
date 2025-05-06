#include <iostream>

using namespace std;

class Entity
{
private:
    int m_x = 20;
    mutable int m_var; /// if the variable is mutable we can modify are we can't.
public:
    int getX() const
    {
        this->m_var = 50; // we can modify the mutable variable in a const function.
         // we can't modify the non-mutable variable in a const function.
        return m_x;
    }

    void setX(int x)
    {
        this->m_x = x;
    }

    void print(const Entity& e)     // we can pass the object as a const reference to avoid copying the object.

    {
        std::cout<<e.getX()<<std::endl;
    }
};

int main()
{
    Entity entity;
    entity.print(entity);
    const int MAX_AGE = 90;

    const int* a =  new int;      
    //int* a const = new int;

    //*a = 20;   // we can modify the value of the pointer but we can't modify the value of the variable.
    a = (int*)&MAX_AGE; // we can modify the pointer but we can't modify the value of the variable.

    std::cout<<*a<<std::endl;

    return 0;
}
