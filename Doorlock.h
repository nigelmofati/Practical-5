#ifndef DOORLOCK_H
#define DOORLOCK_H
#include "SmartDevice.h"
class Doorlock : SmartDevice {

public:
	bool isActivated;

	void ManualToggle();

	Doorlock();
};

#endif
