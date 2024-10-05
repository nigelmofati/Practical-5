#ifndef SENSOR_H
#define SENSOR_H
#include "SmartDevice.h"
class Sensor {


public:
	void attach(SmartDevice* S);

	void detach(SmartDevice* S);

	void notify();
};

#endif
