#ifndef DEVICEMANAGER_H
#define DEVICEMANAGER_H
#include "Toggle.h"
class DeviceManager {

private:
	Toggle* appClick;

public:
	void SmartHomeApp();

	void onClicked();

	void actionPerformed();
};

#endif
