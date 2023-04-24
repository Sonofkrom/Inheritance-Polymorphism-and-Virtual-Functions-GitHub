// Marcus Needham
// CIS 1202 501
// April 23 2023

#include <string>
#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
    string temp0;
    int temp1;
    int temp2;

    cout << "Vehicle Program\n\nVehicle:\nEnter Manufacturer: ";
    getline(cin, temp0); 
    cout << "Enter Year: ";
    cin >> temp1;
    Vehicle test1(temp0,temp1);
    test1.displayInfo();

    cout << "\n\nCar:\nEnter Manufacturer: ";
    cin.ignore();
    getline(cin, temp0);
    cout << "Enter Year: ";
    cin >> temp1;
    cout << "Enter Doors: ";
    cin >> temp2;
    Car test2(temp0, temp1, temp2);
    test2.displayInfo();

    cout << "\n\nTruck:\nEnter Manufacturer: ";
    cin.ignore();
    getline(cin, temp0);
    cout << "Enter Year: ";
    cin >> temp1;
    cout << "Enter Towing Capacity: ";
    cin >> temp2;
    Truck test3(temp0, temp1, temp2);
    test3.displayInfo();
}