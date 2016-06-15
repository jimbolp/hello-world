#ifndef BUILDING_H
#define BUILDING_H
#include <vector>
#include "Floor.h"
class Building {
public:
	Building(std::string,int,int,int,int);
	void setNumberOfEmplyees(int);
	int getNumberOfEmployees() const;
	int getFreeWorkingPlaces() const;
	int getNumberOfFloors() const;
	std::string getBuildingName() const;
	bool haveRestaurant(int) const;
	int numberEmployeesPerFloor() const;
	int officesPerFloor() const;
	~Building() {};
private:
	std::vector<Floor> floors;
	std::string name;
	//int offices;
	int employees = 0;
	int totalWorkingPlaces;
	int freeWorkingPlaces = 0;

};

#endif //BUILDING_H