#ifndef SMARTINTEGRATOR_H
#define SMARTINTEGRATOR_H
#include "SmartDevice.h"
#include "LegacyDevice.h"
class SmartIntegrator : SmartDevice, LegacyDevice {

public:
	bool isActivated;

	void IntegrateAction();
};

#endif
