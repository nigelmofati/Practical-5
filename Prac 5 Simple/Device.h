#ifndef DEVICE_H
#define DEVICE_H

#include <string>

class Device
{
public:
    virtual void performAction() = 0;
    virtual std::string getStatus() = 0;
    virtual std::string getDeviceType() = 0;
    virtual ~Device() = default;
};

#endif
