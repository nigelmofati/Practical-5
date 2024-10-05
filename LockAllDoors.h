#ifndef LOCKALLDOORS_H
#define LOCKALLDOORS_H
#include "Automatic.h"
class LockAllDoors : Automatic {

public:
	bool locked;

	void getStatus();

	void performAction();
};

#endif
