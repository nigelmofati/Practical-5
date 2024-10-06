#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H

#include "Sensor.h"
#include "SmartDevice.h"

#include <iostream>
#include <memory>

class MotionSensor : public Sensor {
public:
    void addDevice(std::shared_ptr<SmartDevice> device) override;
    void removeDevice(std::shared_ptr<SmartDevice> device) override;
    void notifyDevices() override;
    std::string getType() const override;

private:
    std::vector<std::shared_ptr<SmartDevice>> devices;
};
#endif