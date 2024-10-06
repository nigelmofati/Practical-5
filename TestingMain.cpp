#include "Light.h"
#include "Thermostat.h"
#include "DoorLock.h"
#include "Room.h"

#include <iostream>

using namespace std;

// forward declarations
void testingComposite();

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
    
    cout << "Testing the Composite Design Pattern" << endl;
    testingComposite();

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
