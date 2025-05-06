#include "car.h"
#include <iostream>

using namespace std;

int main()
{
    // Car car;
    // Car Car("M3","BMW");

    Car* car = new Car;
    Car* car1 = new Car("M3","BMW");

    delete car;
    delete car1;
    cout << "Hello World!" << endl;
    return 0;
}
