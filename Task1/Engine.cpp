#include "Engine.h"
#include <iostream>

Engine::Engine() : sizeInLiters(0), numberOfCylinders(0) {}

Engine::Engine(float nSizeInLiters, int nNumberOfCylinders) {
	sizeInLiters = nSizeInLiters;
	numberOfCylinders = nNumberOfCylinders;
}

void Engine::setSize(float nSizeInList) {
	sizeInLiters = nSizeInList;
}
void Engine::setNumberOfCylidners(int nNumberOfCylinders) {
	numberOfCylinders = nNumberOfCylinders;
}

const float Engine::getSize() const {
	return sizeInLiters;
}
const int Engine::getNumberOfCylinders() const {
	return numberOfCylinders;
}

const void Engine::print() const {
	std::cout << "Size of engine: " << sizeInLiters << " L" << std::endl;
	std::cout << "Number of cylinders: " << numberOfCylinders << std::endl;
}