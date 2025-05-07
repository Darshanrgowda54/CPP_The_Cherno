#include <iostream>
#include <array>
using namespace std;

// template <size_t N>
void printArray(const std::array<int, 5>& data)
{
    for (int val : data)
        cout << val << " ";
    cout << endl;
}

int main()
{
    std::array<int, 5> date{};
    date[0] = 0;
    date[1] = 1;
    date[4] = 3;

    printArray(date);
    return 0;
}
