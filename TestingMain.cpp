#include "Light.h"
#include "Thermostat.h"
#include "DoorLock.h"
#include "Room.h"
#include "Alarm.h"
#include "Sensor.h"
#include "MotionSensor.h"
#include "TemperatureSensor.h"

#include <iostream>

using namespace std;

// forward declarations
void testingComposite();
void testingObserver();

int main() {
    // Create devices and rooms
    std::shared_ptr<Light> bedroomLight = std::make_shared<Light>();
    std::shared_ptr<Thermostat> bedroomThermostat = std::make_shared<Thermostat>(20.0);  // Pass initial temperature
    std::shared_ptr<DoorLock> bedroomDoorLock = std::make_shared<DoorLock>();

    Room bedroom;
    bedroom.addDevice(bedroomLight);
    bedroom.addDevice(bedroomThermostat);
    bedroom.addDevice(bedroomDoorLock);

    // Perform actions on devices and rooms
    bedroomLight->performAction();
    bedroomThermostat->performAction(25.0);  // Pass room temperature for adjustment
    bedroomDoorLock->performAction();

    bedroom.performActionOnAllDevices();
    
    // cout << "COMP 1: Testing the Composite Design Pattern" << endl;
    // testingComposite();

    cout << "COMP 4: Testing the Observer Design Pattern" << endl;
    testingObserver();

    return 0;
}

void testingComposite() {
    // Create devices
    std::shared_ptr<Light> light = std::make_shared<Light>();
    std::shared_ptr<DoorLock> doorLock = std::make_shared<DoorLock>();
    std::shared_ptr<Thermostat> thermostat = std::make_shared<Thermostat>(20.0);  // Pass initial temperature

    // Create a room and add devices
    Room room;
    room.addDevice(light);
    room.addDevice(doorLock);
    room.addDevice(thermostat);

    // Test device addition and removal
    room.removeDevice(light);
    room.addDevice(light);

    // Test device actions
    light->performAction();
    doorLock->performAction();
    thermostat->performAction(25.0);  // Adjust thermostat based on room temperature

    // Test room actions
    room.performActionOnAllDevices();

    // Test thermostat methods
    thermostat->setTargetTemperature(22.0);
    thermostat->performAction(20.0);  // Adjust thermostat to new target
    std::cout << "Thermostat temperature: " << thermostat->getTemperature() << std::endl;
}

void testingObserver() {
    // Create devices and sensors
    std::shared_ptr<Light> light = std::make_shared<Light>();
    std::shared_ptr<DoorLock> doorLock = std::make_shared<DoorLock>();
    std::shared_ptr<Thermostat> thermostat = std::make_shared<Thermostat>(25.0);
    std::shared_ptr<Alarm> alarm = std::make_shared<Alarm>(30.0); // Set alarm threshold

    MotionSensor motionSensor;
    TemperatureSensor temperatureSensor;

    // Add devices to sensors
    motionSensor.addDevice(light);
    motionSensor.addDevice(doorLock);
    motionSensor.addDevice(alarm);
    temperatureSensor.addDevice(thermostat);
    temperatureSensor.addDevice(alarm);

    // Test device addition and removal
    motionSensor.removeDevice(light);
    motionSensor.addDevice(light);

    // Test sensor notifications
    motionSensor.notifyDevices();
    temperatureSensor.notifyDevices();

    // Test device updates
    light->update(&motionSensor);
    doorLock->update(&motionSensor);
    thermostat->update(&temperatureSensor);
    alarm->update(&motionSensor);
    alarm->update(&temperatureSensor);

    // Test temperature sensor updates
    temperatureSensor.setCurrentTemperature(20.0);
    temperatureSensor.notifyDevices();
    temperatureSensor.setCurrentTemperature(35.0);
    temperatureSensor.notifyDevices();

    // Test alarm state
    std::cout << "Alarm is activated: " << alarm->activate() << std::endl;
}
