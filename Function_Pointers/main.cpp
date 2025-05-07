#include <iostream>
#include <vector>

using namespace std;

// void printValue(int value)
// {
//     std::cout<<"Value: "<< value <<std::endl;
// }

void forEach(const std::vector<int>& values,void(*print)(int))
{
    for(int value : values)
    {
        print(value);
    }
}

int main()
{
    std::vector<int> v = {1,2,3,4,5};
    //forEach(v,printValue);
    forEach(v,[](int value)
    {
        std::cout<<"Value: "<< value <<std::endl;
    });

    cout << "Hello World!" << endl;
    return 0;
}
