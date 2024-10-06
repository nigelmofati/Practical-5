// DoorLock.cpp
#include "DoorLock.h"

#include <iostream>
using namespace std;

void DoorLock::performAction() {
    if (isLocked) {
        std::cout << "-- Unlocking door --" << std::endl;
        isLocked = false;
    } else {
        std::cout << "-- Locking door --" << std::endl;
        isLocked = true;
    }
}

std::string DoorLock::getStatus() const {
    return isLocked ? "Door is: locked" : "Door is: unlocked";
}

std::string DoorLock::getDeviceType() const {
    return "DoorLock";
}
    
std::string DoorLock::toString() const {
    //return getDeviceType() + " - Current Temp: " + getStatus();
    return getDeviceType();
}
