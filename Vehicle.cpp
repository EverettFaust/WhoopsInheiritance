#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle() : manufacturer(""), yearBuilt(0) {}

Vehicle::Vehicle(const string& manufacturer, int yearBuilt)
    : manufacturer(manufacturer), yearBuilt(yearBuilt) {}

void Vehicle::setManufacturer(const string& manufacturer) {
    this->manufacturer = manufacturer;
}

string Vehicle::getManufacturer() const {
    return manufacturer;
}

void Vehicle::setYearBuilt(int year) {
    yearBuilt = year;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::displayInfo() const {
    cout << "Vehicle Information:\n";
    cout << "Manufacturer: " << manufacturer << "\n";
    cout << "Year Built: " << yearBuilt << "\n";
}
