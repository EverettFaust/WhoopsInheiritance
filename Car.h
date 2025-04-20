#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

using namespace std;

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    Car();
    Car(const string& manufacturer, int yearBuilt, int doors);

    void setNumberOfDoors(int doors);
    int getNumberOfDoors() const;

    void displayInfo() const override;
};

#endif
