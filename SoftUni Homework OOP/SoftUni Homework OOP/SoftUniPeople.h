#ifndef SOFTUNIPEOPLE_H
#define SOFTUNIPEOPLE_H
#include <string>
class SoftUniPeople {
protected:
	static short id;
	std::string name;
	std::string currentCourse;
public:
	SoftUniPeople(std::string name, std::string currentCourse) :name(name), currentCourse(currentCourse) { id++; };
	
	virtual short getId() = 0;
	std::string getName();
	virtual ~SoftUniPeople() { id--; };
};

#endif //SOFTUNIPEOPLE_H
