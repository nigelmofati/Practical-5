#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H
#include "Sensor.h"
#include "SmartDevice.h"
class MotionSensor : Sensor {

private:
	bool observer;
	SmartDevice* subject;

public:
	MotionSensor();

	void getStatus();

	void performAction();
};

#endif
