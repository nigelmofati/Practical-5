#ifndef LEGACYTHERMOSTAT_H
#define LEGACYTHERMOSTAT_H
#include <iostream>

class LegacyThermostat
{
public:
    void adjustTemperature(int temp)
    {
        std::cout << "Legacy thermostat set to " << temp << "°C\n";
    }

    int getCurrentTemperature()
    {
        return 24; // Mocked value
    }
};

#endif
