#ifndef DOORLOCK_H
#define DOORLOCK_H
#include "Device.h"
#include <iostream>

class DoorLock : public Device
{
private:
    bool isLocked;

public:
    DoorLock() : isLocked(false) {}

    void performAction() override
    {
        isLocked = !isLocked;
        std::cout << (isLocked ? "Door locked\n" : "Door unlocked\n");
    }

    std::string getStatus() override
    {
        return isLocked ? "locked" : "unlocked";
    }

    std::string getDeviceType() override
    {
        return "DoorLock";
    }
};

#endif
