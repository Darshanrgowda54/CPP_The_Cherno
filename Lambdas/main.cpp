#include <iostream>
#include <vector>

using namespace std;

///Basic Syntax
///[ capture ] ( parameters ) -> return_type {
///
///}

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
    // forEach(v,[](int value)
    //         {
    //             std::cout<<"Value: "<< value <<std::endl;
    //         });

    auto lambda = [](int value){std::cout<<"Value: "<< value <<std::endl;};

    forEach(v,lambda);

    cout << "Hello World!" << endl;
    return 0;
}
