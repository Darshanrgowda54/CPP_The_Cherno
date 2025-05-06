#include <iostream>
using namespace std;


class Entity
{
private:
    std::string m_name;
    int m_age;
public:
    /*explicit*/ Entity(const std::string& name) : m_name(name), m_age(22)
    {
        std::cout << "Implicit: " << m_name << "  " << m_age << std::endl;
    }

    /*explicit*/ Entity(int age) : m_name("Unknown"), m_age(age)
    {
        std::cout << "Explicit: " << m_name << "  " << m_age << std::endl;
    }

};

void EntityFunction(Entity e)
{
    ///
}

int main()
{
    EntityFunction(20);    /// Implicit
    EntityFunction(std::string("Darshan"));  /// Implicit

    Entity e2("Darshan");   /// this is Implicit conversion.
    //Entity e = std::string("Darshan");  /// this is Explicit conversion.

    Entity e1(22);
    //Entity e3 = 25;
    cout << "Hello World!" << endl;
    return 0;
}
