#ifndef MACROROUTINE_H
#define MACROROUTINE_H
#include "Device.h"
#include <vector>
#include <algorithm>

class MacroRoutine
{
private:
    std::vector<Device *> devices;

public:
    void addDevice(Device *device)
    {
        devices.push_back(device);
    }

    void removeDevice(Device *device)
    {
        devices.erase(std::remove(devices.begin(), devices.end(), device), devices.end());
    }

    void execute()
    {
        for (auto device : devices)
        {
            device->performAction();
        }
    }
};

#endif
