#ifndef THERMOSTAT_H
#define THERMOSTAT_H
#include "Device.h"
#include <iostream>

class Thermostat : public Device
{
private:
    bool isOn;
    int temperature;

public:
    Thermostat() : isOn(false), temperature(22) {}

    void performAction() override
    {
        isOn = !isOn;
        std::cout << (isOn ? "Thermostat turned ON\n" : "Thermostat turned OFF\n");
    }

    void setTemperature(int temp)
    {
        temperature = temp;
        std::cout << "Temperature set to " << temperature << "°C\n";
    }

    std::string getStatus() override
    {
        return isOn ? "on" : "off";
    }

    std::string getDeviceType() override
    {
        return "Thermostat";
    }
};

#endif
