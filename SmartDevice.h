// SmartDevice.h
#ifndef SMART_DEVICE_H
#define SMART_DEVICE_H

#include <string>

class SmartDevice {
public:
    virtual void performAction() = 0;
    virtual std::string getStatus() const = 0;
    virtual std::string getDeviceType() const = 0;

    // New method to return a string description of the device
    virtual std::string toString() const {
        //return getDeviceType() + " - Status: " + getStatus();
        return getDeviceType();
    }

    virtual ~SmartDevice() {}
};

#endif