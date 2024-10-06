#ifndef ALARM_H
#define ALARM_H

#include "SmartDevice.h"

class Alarm : public SmartDevice {
public:
    Alarm(double temperatureThreshold);
    //comp1
    void performAction() override;
    std::string getStatus() const override;
    std::string getDeviceType() const override;
    //comp4
    void update(Sensor* sensor) override;
    bool activate();

private:
    bool isActivated;
    double temperatureThreshold;
};

#endif