#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

class Vehicle {
private:
	std::string manufact;
	int year;
public:
	Vehicle(std::string, int);
	std::string getManufact();
	int getYear();
	void setManufact(std::string);
	void setYear(int);
	void displayInfo();
};

#endif