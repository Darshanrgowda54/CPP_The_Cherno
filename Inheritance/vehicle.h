#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
class Vehicle
{
public:
    Vehicle();
    Vehicle(std::string name, std::string brand);
    ~Vehicle();

    std::string m_name;
    std::string m_brand;
};

#endif // VEHICLE_H
