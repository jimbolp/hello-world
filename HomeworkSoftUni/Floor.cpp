#include "Floor.h"

Floor::Floor()
{
	restaurants = 1;
	offices = 0;
}

int Floor::getNumberOfOffices() const
{
	return offices;
}

void Floor::setNumberOfOffices(int offices)
{
	Floor::offices = offices;
}
