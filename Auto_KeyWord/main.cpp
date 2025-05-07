#include "devicemanager.h"
#include <iostream>

using namespace std;

int main()
{

    //using DeviceMap =  std::unordered_map<std::string, std::vector<Device *>>;
    //typedef std::unordered_map<std::string, std::vector<Device *>> DeviceMap;

    DeviceManager dm;
    const auto& devices  = dm.getDevice();
    cout << "Hello World!" << endl;
    return 0;
}
