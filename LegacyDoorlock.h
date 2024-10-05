#ifndef LEGACYDOORLOCK_H
#define LEGACYDOORLOCK_H
#include "LegacyDevice.h"
class LegacyDoorlock : LegacyDevice {

public:
	bool isActivated;

	void Toggle();

	void LegacyDoorlockGetLockStatus();

	void LegacyDoorlockUpdateLockStatus();
};

#endif
