#ifndef TOGGLEOFF_H
#define TOGGLEOFF_H
#include "Toggle.h"
class ToggleOff : Toggle {

public:
	bool off;

	void OffCommand();

	void performAction();

	void getStatus();

	void getDevice();
};

#endif
