#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int* b = new int[50]; /// Allocate 200 bytes in memory.

    cout<<"Memory allocated: " <<sizeof(a)<<" bytes" <<endl;
    cout << "Memory allocated: " << 50 * sizeof(int) << " bytes" << endl;

    delete[] b;
    return 0;
}
