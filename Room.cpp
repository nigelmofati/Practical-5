// Room.cpp
#include "Room.h"
#include <iostream>
#include <algorithm>

using namespace std;

void Room::addDevice(std::shared_ptr<SmartDevice> device) {
    cout << "-- Device: " << device->toString() << " is being added --" << endl;
    devices.push_back(device);
}

// void Room::removeDevice(std::shared_ptr<SmartDevice> device) {
//     devices.erase(std::remove(devices.begin(), devices.end(), device), devices.end());
// }
void Room::removeDevice(std::shared_ptr<SmartDevice> device) {
    cout << "-- Device: " << device->toString() << " is being removed --" << endl;
    devices.erase(std::remove_if(devices.begin(), devices.end(),
                  [&device](const std::shared_ptr<SmartDevice>& d) { return d == device; }),
                  devices.end());
}

void Room::performActionOnAllDevices() {
    cout << "-- Performing all actions --" << endl;
    for (const auto& device : devices) {
        device->performAction();
    }
}