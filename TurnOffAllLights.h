#ifndef TURNOFFALLLIGHTS_H
#define TURNOFFALLLIGHTS_H
#include "Automatic.h"
class TurnOffAllLights : Automatic {

public:
	bool off;

	void getStatus();

	void performAction();
};

#endif
