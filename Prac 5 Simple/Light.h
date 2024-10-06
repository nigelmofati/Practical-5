#ifndef LIGHT_H
#define LIGHT_H
#include "Device.h"
#include <iostream>

class Light : public Device
{
private:
    bool isOn;
    std::string color;

public:
    Light() : isOn(false), color("White") {}

    void performAction() override
    {
        isOn = !isOn;
        std::cout << (isOn ? "Light turned ON\n" : "Light turned OFF\n");
    }

    std::string getStatus() override
    {
        return isOn ? "on" : "off";
    }

    std::string getDeviceType() override
    {
        return "Light";
    }

    void changeColor(const std::string &newColor)
    {
        color = newColor;
        std::cout << "Light color changed to " << color << "\n";
    }
};

#endif
