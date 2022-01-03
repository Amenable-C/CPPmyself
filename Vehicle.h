#ifndef HW62FIRST_VEHICLE_H
#define HW62FIRST_VEHICLE_H

#include <string>
class Vehicle {
public:
    // your code here
    Vehicle(std::string name, int range, bool hasFDS, float batteryCapacity)
    : name(name), range(range), hasFDS(hasFDS), batteryCapacity(batteryCapacity){}
    Vehicle(std::string name, int range,float batteryCapacity)
    : name(name), range(range), batteryCapacity(batteryCapacity){}
    Vehicle() : name("Model Y LR"), range(511), hasFDS(false) ,batteryCapacity(85){};

    void autoPilot(bool onOff);
    void runFDS() const;
    void displayEfficiency() const;
private:
    std::string name;
    int range;
    bool hasFDS;
    float batteryCapacity;
};

#endif //HW62FIRST_VEHICLE_H
