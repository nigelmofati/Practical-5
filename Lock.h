#ifndef LOCK_H
#define LOCK_H
#include "Toggle.h"
class Lock : Toggle {

public:
	bool lock;

	void LockCommand();

	void performAction();

	void getStatus();

	void getDevice();
};

#endif
