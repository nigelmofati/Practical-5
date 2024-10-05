#ifndef SMARTDOORLOCKINTEGRATOR_H
#define SMARTDOORLOCKINTEGRATOR_H
#include "SmartIntegrator.h"
#include "Doorlock.h"
class SmartDoorlockIntegrator : SmartIntegrator {


public:
	void getLockStatus();

	void updateLockStatus();
};

#endif
