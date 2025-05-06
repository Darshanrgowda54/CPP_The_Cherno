#include <iostream>

using namespace std;

int main()
{
    char* name = "Darshan";
    //name[2] = 'B';
    std::cout<<name<<std::endl;

    std::string name1 = "Hello"/* + "World"*/;
    name1 += "World";
    std::cout<<name1<<std::endl;

    std::string name2 = std::string("Hello") + "World";
    std::cout<<name2<<std::endl;
    return 0;
}
