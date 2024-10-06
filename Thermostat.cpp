#include "Thermostat.h"
#include <iostream>
#include <string>
using namespace std;

// Constructor
Thermostat::Thermostat(double initialTemperature)
    : temperature(initialTemperature), targetTemperature(22.0)  // Default target is 22°C
{}

// Adjust the temperature based on the current room temperature, thats how we will go about it
void Thermostat::adjustTemperature(double roomTemperature) {
    const double adjustmentRate = 0.25;  // what we inc/dec by

    cout << "Current room temp: " << roomTemperature << endl;
    if (roomTemperature > targetTemperature) {
        // Room too hot
        double difference = roomTemperature - targetTemperature;
        temperature -= std::min(adjustmentRate, difference);
        std::cout << "Room is too hot. Decreasing thermostat temperature to " << temperature << "°C." << std::endl;
    } else if (roomTemperature < targetTemperature) {
        // Room is too cold
        double difference = targetTemperature - roomTemperature;
        temperature += std::min(adjustmentRate, difference);
        //temperature += adjustmentRate;
        std::cout << "Room is too cold. Increasing thermostat temperature to " << temperature << "°C." << std::endl;
    } else {
        std::cout << "Room temperature is optimal. No adjustment needed." << std::endl;
    }
}

// Perform the action of adjusting the thermostat
void Thermostat::performAction() {
    std::cout << "------" << std::endl;
    // double currentRoomTemperature = 24.0;  // Example room temperature
    // adjustTemperature(currentRoomTemperature);  
}
void Thermostat::performAction(double currentRoomTemperature) {
    std::cout << "-- Adjusting thermostat --" << std::endl;
    adjustTemperature(currentRoomTemperature);  // Adjust based on room temperature
}

// Return the current thermostat temperature as a string
std::string Thermostat::getStatus() const {
    return "Thermostat temperature: " + std::to_string(temperature) + "°C";
}

// Return the device type
std::string Thermostat::getDeviceType() const {
    return "Thermostat";
}

// Set a new target temperature
void Thermostat::setTargetTemperature(double target) {
    targetTemperature = target;
}

// Get the current temperature of the thermostat
double Thermostat::getTemperature() const {
    return temperature;
}

std::string Thermostat::toString() const {
    //return getDeviceType() + " - Current Temp: " + getStatus();
    return getDeviceType();
}