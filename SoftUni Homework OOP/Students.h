#ifndef STUDENTS_H
#define STUDENTS_H
#include "SoftUniPeople.h"

class Students : virtual public SoftUniPeople {
public:
	Students(std::string name, std::string currentCourse) :SoftUniPeople(name, currentCourse) {};
	short getId();
	virtual ~Students() {};
};
#endif //STUDENTS_H
