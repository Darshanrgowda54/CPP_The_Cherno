#include <iostream>

using namespace std;

#define Log(x) std::cout<<x<<std::endl;
/// It tells the preprocessor to replace any use of Log(x).
/// Macros are replaced at compile time, not run time.
/// No, macros themselves do not have memory allocation.


int main()
{
    Log("Hello");
    return 0;
}
