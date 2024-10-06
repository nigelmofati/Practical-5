#ifndef SMARTTHERMOSTATINTEGRATOR_H
#define SMARTTHERMOSTATINTEGRATOR_H
#include "Thermostat.h"
#include "LegacyThermostat.h"

class SmartThermostatIntegrator : public Thermostat
{
private:
    LegacyThermostat *legacyThermostat;

public:
    SmartThermostatIntegrator(LegacyThermostat *legacy) : legacyThermostat(legacy) {}

    void setTemperature(int temp) 
    {
        legacyThermostat->adjustTemperature(temp);
    }

    int getTemperature()
    {
        return legacyThermostat->getCurrentTemperature();
    }

    std::string getDeviceType() override
    {
        return "SmartThermostat (Legacy)";
    }
};

#endif
