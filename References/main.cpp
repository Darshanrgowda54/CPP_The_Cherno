#include <iostream>

using namespace std;

string printme(string& student)
{
    student = "Girish";
    return student;
}

int main()
{
    string name = "Darshan";
    std::cout<<name<<std::endl;
    string studentname = printme(name);
    std::cout<<studentname<<std::endl;

    string& name1 = name;
    name1 = "Manoj";
    std::cout<<name1<<std::endl;
    return 0;
}
