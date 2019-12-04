#include "Engine.h"
#include <iostream>

class Engine {
private:
	float sizeInLiters;
	int numberOfCylinders;
public:
	Engine() : sizeInLiters(0), numberOfCylinders(0) {}

	Engine(float nSizeInLiters, int nNumberOfCylinders = 0) {
		sizeInLiters = nSizeInLiters;
		numberOfCylinders = nNumberOfCylinders;
	}

	void setSize(float nSizeInList) {
		sizeInLiters = nSizeInList;
	}
	void setNumberOfCylidners(int nNumberOfCylinders) {
		numberOfCylinders = nNumberOfCylinders;
	}

	const float getSize() const {
		return sizeInLiters;
	}
	const int getNumberOfCylinders() const {
		return numberOfCylinders;
	}

	const void print() const {
		std::cout << "Size of engine: " << sizeInLiters << " L" << std::endl;
		std::cout << "Number of cylinders: " << numberOfCylinders << std::endl;
	}
};