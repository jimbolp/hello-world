#ifndef FLOOR_H
#define FLOOR_H

class Floor {
public:
	Floor(); //default constructor
	Floor(int offices) :offices(offices) {};
	int getNumberOfOffices() const;
	void setNumberOfOffices(int);
	~Floor() {};
private:
	int offices;
	int restaurants;

};
#endif //FLOOR_H