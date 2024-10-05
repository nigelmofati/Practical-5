#ifndef LEGACYTHERMOSTAT_H
#define LEGACYTHERMOSTAT_H
#include "LegacyDevice.h"
class LegacyThermostat : LegacyDevice {

private:
	bool isActivated;
	int temp;

public:
	void Toggle();

	void LegacyThermostatGetTemp();

	void LegacyThermostatSetTemp();
};

#endif
