#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H

#include "Sensor.h"
#include "SmartDevice.h"

class TemperatureSensor : public Sensor {
public:
    TemperatureSensor(double threshold = 25.0);
    void addDevice(std::shared_ptr<SmartDevice> device) override;
    void removeDevice(std::shared_ptr<SmartDevice> device) override;
    void notifyDevices() override;
    std::string getType() const override;
    double getCurrentTemperature() const;
    void setCurrentTemperature(double temperature);

private:
    double threshold;
    double currentTemperature;
    std::vector<std::shared_ptr<SmartDevice>> devices;
};

#endif