#ifndef DEVICEMANAGER_H
#define DEVICEMANAGER_H

#include "device.h"
#include <string>
#include <unordered_map>
#include <vector>
class DeviceManager
{
private:
    std::unordered_map<std::string ,std::vector<Device*>>m_Device;
public:
    DeviceManager();
    ~DeviceManager();

    std::unordered_map<std::string, std::vector<Device *>> getDevice() const
    {
        return m_Device;
    }
};

#endif // DEVICEMANAGER_H
