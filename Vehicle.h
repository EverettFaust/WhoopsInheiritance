#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class Vehicle {
protected:
    string manufacturer;
    int yearBuilt;

public:
    Vehicle();
    Vehicle(const string& manufacturer, int yearBuilt);

    void setManufacturer(const string& manufacturer);
    string getManufacturer() const;

    void setYearBuilt(int year);
    int getYearBuilt() const;

    virtual void displayInfo() const;
};

#endif
