#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
    string manufacturer;
    int year, doors, capacity;

    // Vehicle
    cout << "Vehicle:\nEnter manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter year built: ";
    cin >> year;
    cin.ignore(); // clear newline

    Vehicle vehicle(manufacturer, year);
    cout << "\n";
    vehicle.displayInfo();
    cout << "\n\n";

    // Car
    cout << "Car:\nEnter manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter year built: ";
    cin >> year;
    cout << "Enter number of doors: ";
    cin >> doors;
    cin.ignore();

    Car car(manufacturer, year, doors);
    cout << "\n";
    car.displayInfo();
    cout << "\n\n";

    // Truck
    cout << "Truck:\nEnter manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter year built: ";
    cin >> year;
    cout << "Enter towing capacity: ";
    cin >> capacity;

    Truck truck(manufacturer, year, capacity);
    cout << "\n";
    truck.displayInfo();

    return 0;
}
