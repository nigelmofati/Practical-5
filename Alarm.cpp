#include "Alarm.h"
#include "TemperatureSensor.h"
#include <iostream>

Alarm::Alarm(double temperatureThreshold) : temperatureThreshold(temperatureThreshold), isActivated(false) {}

void Alarm::performAction() {
    // Implement your specific alarm action here
    std::cout << "-- Alarm action --" << std::endl;
}

std::string Alarm::getStatus() const {
    return isActivated ? "Alarm is: active" : "Alarm is: deactivated";
}

std::string Alarm::getDeviceType() const {
    return "Alarm";
}
bool Alarm::activate(){
    //isActivated = true;
    return true;
}
void Alarm::update(Sensor* sensor) {
    if (sensor->getType() == "MotionSensor") {
        std::cout << "~~ Security Alarm activated due to motion ~~" << std::endl;
        isActivated = true;
    }
    if (sensor->getType() == "TemperatureSensor") {
        TemperatureSensor* temperatureSensor = dynamic_cast<TemperatureSensor*>(sensor);
        if (temperatureSensor) {
            double currentTemperature = temperatureSensor->getCurrentTemperature();
            if (currentTemperature > temperatureThreshold) {
                // Activate alarm due to high temperature
                std::cout << "~~ Fire Alarm activated due to high temperature! ~~" << std::endl;
                isActivated = true;
                
            } else if (currentTemperature < temperatureThreshold) {
                std::cout << "~~ Frost Alarm activated due to high temperature! ~~" << std::endl;
                isActivated = true;

            }else if (currentTemperature = temperatureThreshold){
                // Deactivate alarm if temperature returns to normal
                std::cout << "~~ Alarm deactivated, temperature is normal ~~" << std::endl;
                isActivated = false;
            }
        }
    }
}