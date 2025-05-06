#ifndef CAR_H
#define CAR_H

#include <string>
class Car
{
public:
    Car();
    Car(std::string name, std::string brand);
    ~Car();

private:
    std::string m_name;
    std::string m_brand;
};

#endif // CAR_H
