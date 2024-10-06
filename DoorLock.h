// DoorLock.h
#ifndef DOOR_LOCK_H
#define DOOR_LOCK_H

#include "SmartDevice.h"

class DoorLock : public SmartDevice {
public:
    void performAction() override;
    std::string getStatus() const override;
    std::string getDeviceType() const override;
    std::string toString() const override;

private:
    bool isLocked;
};

#endif