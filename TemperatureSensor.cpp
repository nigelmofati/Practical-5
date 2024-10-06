#include "TemperatureSensor.h"
#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

TemperatureSensor::TemperatureSensor(double threshold) : threshold(threshold), currentTemperature(0.0) {}

void TemperatureSensor::addDevice(std::shared_ptr<SmartDevice> device) {
    devices.push_back(device);
}

void TemperatureSensor::removeDevice(std::shared_ptr<SmartDevice> device) {
    devices.erase(std::remove(devices.begin(), devices.end(), device), devices.end());
}

void TemperatureSensor::notifyDevices() {
    std::cout << "Temperature Change detected!" << std::endl;
    if (currentTemperature > threshold) {
        std::cout << "Temperature exceeded threshold!" << std::endl;
        for (const auto& device : devices) {
            device->update(this);
        }
    }
}

std::string TemperatureSensor::getType() const {
    return "TemperatureSensor";
}

double TemperatureSensor::getCurrentTemperature() const {
    return currentTemperature;
}

void TemperatureSensor::setCurrentTemperature(double temperature) {
    currentTemperature = temperature;
}