#ifndef LIGHT_H
#define LIGHT_H
#include "SmartDevice.h"
class Light : SmartDevice {

public:
	bool isActivated;

	void ManualToggle();

	Light();
};

#endif
