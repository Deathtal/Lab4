#include "MotorVehicle.h"
#include <iostream>
#include <string>

MotorVehicle::MotorVehicle(Engine nEngine, Body nBody, Person nOwner, int nNumberOfTires, std::string nModel) {
	engine = nEngine;
	body = nBody;
	owner = nOwner;
	model = nModel;
	numberOfTires = nNumberOfTires;
	tireDiameters = new float[numberOfTires];
	for (; nNumberOfTires > 0; nNumberOfTires--) {
		tireDiameters[numberOfTires - nNumberOfTires] = nNumberOfTires;
	}
}
MotorVehicle::~MotorVehicle() {
	delete[] tireDiameters;
}

void MotorVehicle::setEngine(Engine nEngine) {
	engine = nEngine;
}
void MotorVehicle::setBody(Body nBody) {
	body = nBody;
}
void MotorVehicle::setOwner(Person nOwner) {
	owner = nOwner;
}
void MotorVehicle::setNumberOfTires(int nNumberOfTires) {
	if (numberOfTires < nNumberOfTires) {
		float* tempTireArray = new float[nNumberOfTires];
		memcpy(tempTireArray, tireDiameters, nNumberOfTires);
		delete[] tireDiameters;
		tireDiameters = tempTireArray;
	}
	numberOfTires = nNumberOfTires;
}
void MotorVehicle::setTireDiameterAll(float nTireDiameter) {
	for (int i = 0; i < numberOfTires; i++) {
		tireDiameters[i] = nTireDiameter;
	}
}
bool MotorVehicle::setTireDiameter(int tireNumber, float nTireDiameter) {
	if (tireNumber > numberOfTires) {
		return 0;
	}
	tireDiameters[tireNumber] = nTireDiameter;
	return 1;
}
	
const Engine MotorVehicle::getEngine() const {
	return engine;
}
const Body MotorVehicle::getBody() const {
	return body;
}
const Person MotorVehicle::getOwner() const {
	return owner;
}
const int MotorVehicle::getNumberOfTires() const {
	return numberOfTires;
}
const float* MotorVehicle::getTireDiameters() const {
	return tireDiameters;
}
const std::string MotorVehicle::getModel() const {
	return model;
}

const void MotorVehicle::print() const {
	std::cout << "Model: " << model << std::endl;
	body.print();
	engine.print();
	owner.print();
	std::cout << "Number of tires: " << numberOfTires << std::endl;
	for (int i = 0; i < numberOfTires; i++) {
		std::cout << "Diameter of tire " << i + 1 << ": " << tireDiameters[i] << std::endl;
	}
}