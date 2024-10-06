// DoorLock.h
#ifndef DOOR_LOCK_H
#define DOOR_LOCK_H

#include "SmartDevice.h"

class DoorLock : public SmartDevice {
public:
    //comp1:
    void performAction() override;
    std::string getStatus() const override;
    std::string getDeviceType() const override;
    std::string toString() const override;

    //comp4:
    void update(Sensor* sensor) override;

private:
    bool isLocked;
};

#endif