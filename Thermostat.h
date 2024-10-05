#ifndef THERMOSTAT_H
#define THERMOSTAT_H
#include "SmartDevice.h"
class Thermostat : SmartDevice {

private:
	bool isActivated;
	int temp;

public:
	void ManualToggle();

	Thermostat();
};

#endif
