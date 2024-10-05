#ifndef LEGACYLIGHTBULB_H
#define LEGACYLIGHTBULB_H
#include "LegacyDevice.h"
class LegacyLightbulb : LegacyDevice {

public:
	bool isActivated;

	void Toggle();

	void LegacyLightGetStatus();

	void LegacyLightChangeStatus();
};

#endif
