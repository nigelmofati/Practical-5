// Room.h
#ifndef ROOM_H
#define ROOM_H

#include <vector>
#include <memory>
#include "SmartDevice.h"

class Room {
public:
    void addDevice(std::shared_ptr<SmartDevice> device);
    void removeDevice(std::shared_ptr<SmartDevice> device);
    void performActionOnAllDevices();

private:
    std::vector<std::shared_ptr<SmartDevice>> devices;
};

#endif