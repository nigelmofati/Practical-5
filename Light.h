// Light.h
#ifndef LIGHT_H
#define LIGHT_H

#include "SmartDevice.h"

class Light : public SmartDevice {
public:
    //comp1
    void performAction() override;
    std::string getStatus() const override;
    std::string getDeviceType() const override;
    std::string toString() const override;

    //comp4
    void update(Sensor* sensor) override;

private:
    bool isOn;
};
#endif