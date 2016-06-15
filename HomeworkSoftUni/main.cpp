//--------Created by--------
//------Yavor Georgiev------
//Could have done it better but there was not enough time
#include <iostream>
#include <vector>
#include <string>
#include "Building.h"

void leastEmployees(const std::vector<Building> &);
void mostEmployees(const std::vector<Building> &);
void mostFreePlaces(const std::vector<Building> &);
void mostEmployeesPerFloor(const std::vector<Building> &);
void leastEmployeesPerFloor(const std::vector<Building> &);
void officesPerFloor(const std::vector<Building> &);
void employeesCoefficient(const std::vector<Building> &);

int main(int argc, char** argv[]) {

	std::vector<Building> businessPark;
	businessPark.push_back(Building("XYZ industries", 0, 6, 127, 796));
	businessPark.push_back(Building("Rapid Development Crew", 1, 8, 210, 907));
	businessPark.push_back(Building("SoftUni", 0, 11, 106, 260));

	//too many arguments in the constructor.. I decided to set the employee number this way :)
	businessPark[0].setNumberOfEmplyees(600);
	businessPark[1].setNumberOfEmplyees(822);
	businessPark[2].setNumberOfEmplyees(200);

	//leastEmployees(businessPark);
	mostEmployees(businessPark);
	mostFreePlaces(businessPark);
	mostEmployeesPerFloor(businessPark);
	leastEmployeesPerFloor(businessPark);
	officesPerFloor(businessPark);
	employeesCoefficient(businessPark);

	//FYI.. this is just for the debug... If I forget to remove the below code
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cin.get();
	return 0;
}

void leastEmployees(const std::vector<Building> &building) {
	int least = building[0].getNumberOfEmployees();  
	int idx = 0;
	for (size_t i = 0; i < building.size(); ++i) {
		if (least > building[i].getNumberOfEmployees()) {
			least = building[i].getNumberOfEmployees();
			idx = i;
		}			
	}
	std::cout << "\nThe building with least employees is \"" << building[idx].getBuildingName() 
																	<< "\" with ~" << building[idx].getNumberOfEmployees()
																				<< " employees.\n";
}
void mostEmployees(const std::vector<Building> &building) {
	int most = building[0].getNumberOfEmployees();
	int idx = 0;
	for (size_t i = 0; i < building.size(); ++i) {
		if (most < building[i].getNumberOfEmployees()) {
			most = building[i].getNumberOfEmployees();
			idx = i;
		}
	}
	std::cout << "\nThe building with most employees is \"" << building[idx].getBuildingName()
																	<< "\" with ~" << building[idx].getNumberOfEmployees()
																				<< " employees.\n";
}

void mostFreePlaces(const std::vector<Building>& building)
{
	int most = building[0].getFreeWorkingPlaces();
	int idx = 0;
	for (size_t i = 0; i < building.size(); ++i) {
		if (most < building[i].getFreeWorkingPlaces()) {
			most = building[i].getFreeWorkingPlaces();
			idx = i;
		}
	}
	std::cout << "\nThe building with most free working places is \"" << building[idx].getBuildingName()
																		<< "\" with ~" << building[idx].getFreeWorkingPlaces()
																			<< " free working places \n";
}

void mostEmployeesPerFloor(const std::vector<Building> &building)
{
	int idx = 0;
	int most = building[0].numberEmployeesPerFloor();
	for (size_t i = 0; i < building.size(); ++i) {
		if (most < building[i].numberEmployeesPerFloor()) {
			most = building[i].numberEmployeesPerFloor();
			idx = i;
		}
	}
	std::cout << "\nThe building with most employees per floor is \"" << building[idx].getBuildingName()
		<< "\" with ~" << building[idx].numberEmployeesPerFloor() << " employees per floor.\n";
}

void leastEmployeesPerFloor(const std::vector<Building> &building)
{
	int idx = 0;
	int least = building[0].numberEmployeesPerFloor();
	for (size_t i = 0; i < building.size(); ++i) {
		if (least > building[i].numberEmployeesPerFloor()) {
			least = building[i].numberEmployeesPerFloor();
			idx = i;
		}
	}
	std::cout << "\nThe building with least employees per floor is \"" << building[idx].getBuildingName()
		<< "\" with ~" << building[idx].numberEmployeesPerFloor() << " employees per floor.\n";
}

void officesPerFloor(const std::vector<Building> &building)
{
	int idx = 0;
	int most = building[0].officesPerFloor();
	for (size_t i = 0; i < building.size(); ++i) {
		if (most < building[i].officesPerFloor()) {
			most = building[i].officesPerFloor();
			idx = i;
		}
	}
	std::cout << "\nThe building with most offices per floor is \"" << building[idx].getBuildingName()
		<< "\" with ~" << building[idx].officesPerFloor() << " offices per floor.\n";
}
//I think something is wrong with the implementation here :D
//I could've wrote it better but I had no time
void employeesCoefficient(const std::vector<Building> &building)
{
	int idx = 0;
	float high = (float)building[0].getNumberOfEmployees() / ((float)building[0].getNumberOfEmployees() + (float)building[0].getNumberOfFloors());
	for (size_t i = 0; i < building.size(); ++i) {
		if (high < (float)building[i].getNumberOfEmployees() / ((float)building[i].getNumberOfEmployees() + (float)building[i].getNumberOfFloors())) {
			high = (float)building[i].getNumberOfEmployees() / ((float)building[i].getNumberOfEmployees() + (float)building[i].getNumberOfFloors());
			idx = i;
		}
	}
	std::cout << "\nThe building with highest coefficient \"employees / free place\" is \"" << building[idx].getBuildingName()
		<< "\" with coefficient ~" << (float)building[idx].getNumberOfEmployees() / ((float)building[idx].getNumberOfEmployees() + (float)building[idx].getNumberOfFloors());
}

