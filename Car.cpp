#include "Car.h"
#include <iostream>

using namespace std;

Car::Car() : Vehicle(), numberOfDoors(0) {}

Car::Car(const string& manufacturer, int yearBuilt, int doors)
    : Vehicle(manufacturer, yearBuilt), numberOfDoors(doors) {}

void Car::setNumberOfDoors(int doors) {
    numberOfDoors = doors;
}

int Car::getNumberOfDoors() const {
    return numberOfDoors;
}

void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Number of Doors: " << numberOfDoors << "\n";
}
