#include "Light.h"
#include "DoorLock.h"
#include "Thermostat.h"
#include "SmartThermostatIntegrator.h"
#include "LegacyThermostat.h"
#include "MacroRoutine.h"
#include "Sensor.h"

int main()
{
    Light livingRoomLight;
    DoorLock frontDoor;
    Thermostat mainThermostat;
    LegacyThermostat oldThermostat;
    SmartThermostatIntegrator smartThermostat(&oldThermostat);

    // MacroRoutine for Goodnight
    MacroRoutine goodnightRoutine;
    goodnightRoutine.addDevice(&livingRoomLight);
    goodnightRoutine.addDevice(&frontDoor);
    goodnightRoutine.addDevice(&mainThermostat);
    goodnightRoutine.execute(); // Turns off light, locks door, turns off thermostat

    // Sensor for motion detection
    Sensor motionSensor;
    motionSensor.addDevice(&livingRoomLight);
    motionSensor.notifyDevices(); // Turns on light if motion detected

    return 0;
}
