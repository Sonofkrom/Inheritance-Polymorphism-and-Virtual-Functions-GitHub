#include "Truck.h"
#include <iostream>

Truck::Truck(std::string x, int y, int z) : Vehicle(x, y) {
	towCap = z;
}

int Truck::getTowCap() {
	return towCap;
}

void Truck::setTowCap(int x) {
	towCap = x;
}

void Truck::displayInfo() {
	Vehicle::displayInfo();
	std::cout << "\nTowing Capacity: " << towCap;
}