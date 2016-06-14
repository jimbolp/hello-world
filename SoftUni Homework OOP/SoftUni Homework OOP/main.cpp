#include <iostream>

#include <vector>
#include "SoftUniPeople.h"
#include "Students.h"


int main(int argc, char** argv[]) {
	std::vector<std::string> test = { "Pe6o", "Ivan", "Maria" };
	std::vector<SoftUniPeople*> people;
	for (size_t i = 0; i < 3; ++i) {
		people.push_back(new Students(test[i], test[i]));
		std::cout << " Name: " << people[i]->getName() << people[i]->getId() << " ";
	}
	std::cout << std::endl;
	people.pop_back();
	for (size_t i = 0; i < 3; ++i) {
		people.push_back(new Students(test[i], test[i]));
		std::cout << " Name: " << people[i]->getName() << people[i]->getId() << " ";
	}

	
	//std::cout << b.getId() << " <- obj B\n";

	system("pause");
	return 0;
}