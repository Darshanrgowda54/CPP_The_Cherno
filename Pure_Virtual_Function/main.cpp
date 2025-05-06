#include "car.h"
#include "vehicle.h"

int main()
{
    Vehicle* vehicle = new Car("BMW");
    vehicle->printName();

    delete vehicle;
    return 0;
}
