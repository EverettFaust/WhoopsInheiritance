#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle {
private:
    int towingCapacity;

public:
    Truck();
    Truck(const string& manufacturer, int yearBuilt, int towingCapacity);

    void setTowingCapacity(int capacity);
    int getTowingCapacity() const;

    void displayInfo() const override;
};

#endif
