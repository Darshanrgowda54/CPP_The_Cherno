#include "array.h"
#include <iostream>

using namespace std;


template<typename T>
void print(T a)
{
    std::cout<<a<<std::endl;
}

template <typename T,typename S>
void add(T a, S b)
{
    std::cout<< a+ b<<std::endl;;
}

int main()
{
    print(10);
    print("Hello");
    print("21.2f");

    add(10,20.5f);
    add(10.00 , 100.0f);
    add('A', 1);

    Array<int> array;
    array.setArray(999);

    cout << array.getArray() << endl;
    cout << "Hello World!" << endl;
    return 0;
}
