#include "MotionSensor.h"
#include <string>
#include <iostream>
#include <algorithm> 
using namespace std;

void MotionSensor::addDevice(std::shared_ptr<SmartDevice> device) {
    devices.push_back(device);
}

void MotionSensor::removeDevice(std::shared_ptr<SmartDevice> device) {
    // Check if the device exists in the vector before trying to remove it
    auto it = std::remove_if(devices.begin(), devices.end(),
        [&device](const std::shared_ptr<SmartDevice>& d) {
            return d.get() == device.get();  // Compare the raw pointers
        });
    
    devices.erase(it, devices.end());
}

void MotionSensor::notifyDevices() {
    std::cout << "Motion detected!" << std::endl;
    for (const auto& device : devices) {
        device->update(this);
    }
}

std::string MotionSensor::getType() const {
    return "MotionSensor";
}