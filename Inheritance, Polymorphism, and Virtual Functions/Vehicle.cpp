#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string x, int y) {
	manufact = x;
	year = y;
}

std::string Vehicle::getManufact() {
	return manufact;
}

int Vehicle::getYear() {
	return year;
}

void Vehicle::setManufact(std::string x) {
	manufact = x;
}

void Vehicle::setYear(int x) {
	year = x;
}

void Vehicle::displayInfo() {
	std::cout << "\nVehicle Information:\nManufacturer: " << manufact << "\nYear Built: " << year;
}