#ifndef TOGGLEON_H
#define TOGGLEON_H
#include "Toggle.h"
class ToggleOn : Toggle {

public:
	bool on;

	void OnCommand();

	void performAction();

	void getStatus();

	void getDevice();
};

#endif
