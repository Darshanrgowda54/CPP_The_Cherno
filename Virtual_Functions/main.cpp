#include "car.h"
#include "vehicle.h"

int main()
{
    Vehicle* vehicle = new Vehicle();
    vehicle->printName();

    Car* car = new Car("BMW");
    car->printName();

    Vehicle* vehicle1 = car;
    vehicle1->printName();

    delete vehicle;
    delete car;
    return 0;
}
