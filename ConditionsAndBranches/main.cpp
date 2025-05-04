#include <iostream>

using namespace std;

int main()
{
    int a = 5;

    bool comparisonResult = a == 6;

    std::cout<<comparisonResult<<std::endl;
    if(comparisonResult)
        //if(comparisonResult == 0) // condition is true here.
        std::cout<<"Hello";
    //else if(comparisonResult)
    else if(comparisonResult == 0)
        std::cout<<"Hey";
    else
        std::cout<<"Bye";
    return 0;
}
