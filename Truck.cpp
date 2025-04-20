#include "Truck.h"
#include <iostream>

using namespace std;

Truck::Truck() : Vehicle(), towingCapacity(0) {}

Truck::Truck(const string& manufacturer, int yearBuilt, int capacity)
    : Vehicle(manufacturer, yearBuilt), towingCapacity(capacity) {}

void Truck::setTowingCapacity(int capacity) {
    towingCapacity = capacity;
}

int Truck::getTowingCapacity() const {
    return towingCapacity;
}

void Truck::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Towing Capacity: " << towingCapacity << " lbs\n";
}
