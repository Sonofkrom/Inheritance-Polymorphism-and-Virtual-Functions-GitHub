#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : Vehicle {
private:
	int towCap;
public:
	Truck(std::string,int,int);
	int getTowCap();
	void setTowCap(int);
	void displayInfo();
};

#endif