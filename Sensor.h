#ifndef SENSOR_H
#define SENSOR_H

#include <vector>
#include <memory>
#include <string>

class SmartDevice;

class Sensor {
public:
    virtual void addDevice(std::shared_ptr<SmartDevice> device) = 0;
    virtual void removeDevice(std::shared_ptr<SmartDevice> device) = 0;
    virtual void notifyDevices() = 0;
    virtual std::string getType() const = 0; // Added getType method
};

#endif