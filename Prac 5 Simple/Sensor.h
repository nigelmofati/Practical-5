#ifndef SENSOR_H
#define SENSOR_H
#include "Device.h"
#include <vector>
#include <algorithm>
class Sensor
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

    void notifyDevices()
    {
        for (auto device : devices)
        {
            device->performAction();
        }
    }
};

#endif
