// Light.h
#ifndef LIGHT_H
#define LIGHT_Hs

#include "SmartDevice.h"

class Light : public SmartDevice {
public:
    void performAction() override;
    std::string getStatus() const override;
    std::string getDeviceType() const override;
    std::string toString() const override;

private:
    bool isOn;
};
#endif