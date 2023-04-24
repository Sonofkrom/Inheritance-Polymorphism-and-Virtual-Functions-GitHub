#include "Vehicle.h"

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