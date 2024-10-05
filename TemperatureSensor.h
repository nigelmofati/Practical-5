#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H
#include "Sensor.h"
class TemperatureSensor : Sensor {

private:
	bool observer;
	SmartDevice* subject;

public:
	TemperatureSensor();

	void getStatus();

	void performAction();
};

#endif
