#include "Building.h"
#include <iostream>

Building::Building(std::string name, int restaurants, int floors, int offices, int totalWorkingPlaces)
{
	Building::name = name;
	int officePerFloor = 0;
	//cannot devide by 0 :)
	if (floors != 0) {

		if (restaurants != 0 && floors != 1) {
			this->floors.push_back(Floor());
			officePerFloor = offices / (floors - 1);
		}
		else {
			if (floors == 0)
				floors = 1;
			officePerFloor = offices / floors;
		}
		for (; floors > 0; --floors) {
			this->floors.push_back(Floor(officePerFloor));
		}
	}
	
	Building::totalWorkingPlaces = totalWorkingPlaces;
}

void Building::setNumberOfEmplyees(int newNumberOfEmployees)
{
	if (totalWorkingPlaces > newNumberOfEmployees) {
		employees = newNumberOfEmployees;
		freeWorkingPlaces = totalWorkingPlaces - employees;
	}
	else if (totalWorkingPlaces = newNumberOfEmployees) {
		employees = newNumberOfEmployees;
		freeWorkingPlaces = totalWorkingPlaces - employees;
		std::cout << "\nThere no free working places anymore\n";
	}
	else {
		std::cout << "\nYou cannot have more employees than working places\n";
	}

}

int Building::getNumberOfEmployees() const
{
	return employees;
}

int Building::getFreeWorkingPlaces() const
{
	return freeWorkingPlaces;
}

int Building::getNumberOfFloors() const
{
	return floors.size();
}

std::string Building::getBuildingName() const
{
	return name;
}

bool Building::haveRestaurant(int floorNum) const
{
	if (Building::floors[floorNum].getNumberOfOffices() == 0)
		return true;
	else
		return false;
}

int Building::numberEmployeesPerFloor() const
{
	if (Building::floors[0].getNumberOfOffices() != 0)
		return (Building::employees / Building::floors.size());
	else
		return (Building::employees / (Building::floors.size() - 1));
}
//I know it's kindda hardcoded...
int Building::officesPerFloor() const
{
	return Building::floors[1].getNumberOfOffices();
}
