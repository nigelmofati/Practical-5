// Light.cpp
#include "Light.h"
#include "Sensor.h"
#include <iostream>
#include <string>

using namespace std;

void Light::performAction() {
    if (isOn) {
        std::cout << "-- Turning off light --" << std::endl;
        isOn = false;
    } else {
        std::cout << "-- Turning on light --" << std::endl;
        isOn = true;
    }
}

std::string Light::getStatus() const {
    return isOn ? "Light is: on" : "Light is: off";
}

std::string Light::getDeviceType() const {
    return "Light";
}

// Override toString for specific details
std::string Light::toString() const {
    //return getDeviceType() + " - " + getStatus();
    return getDeviceType();
}

//comp4:
void Light::update(Sensor* sensor) {
    if (sensor->getType() == "MotionSensor") {
        std::cout << "~~ Light turned on due to motion ~~" << std::endl;
        // Perform light-on action:
        std::cout << "Turning on light" << std::endl;
        isOn = true;
        getStatus();
    }
}