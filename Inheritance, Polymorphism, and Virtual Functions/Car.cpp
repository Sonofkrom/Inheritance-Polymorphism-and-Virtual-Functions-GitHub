#include "Car.h"
#include <iostream>

Car::Car(std::string x, int y, int z) : Vehicle(x, y) {
	doors = z;
}

int Car::getDoors() {
	return doors;
}

void Car::setDoors(int x) {
	doors = x;
}

void Car::displayInfo() {
	Vehicle::displayInfo();
	std::cout << "\nDoors: " << doors;
}