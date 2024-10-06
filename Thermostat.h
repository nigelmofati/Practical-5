// Thermostat.h
#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include "SmartDevice.h"

class Thermostat : public SmartDevice {
public:
    Thermostat(double initialTemperature);  // Constructor with initial temperature

    void performAction() override;
    void performAction(double currentRoomTemperature);
    std::string getStatus() const override;
    std::string getDeviceType() const override;
    std::string toString() const override;

    // added methods for logic mos?
    void adjustTemperature(double roomTemperature);  // Adjust thermostat based on room temp
    void setTargetTemperature(double target);  // Set target temperature
    double getTemperature() const;  // Get current thermostat temperature


private:
    double temperature;
    double targetTemperature;
};

#endif