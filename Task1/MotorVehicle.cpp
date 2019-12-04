#include "MotorVehicle.h"
#include <iostream>
#include <string>

class MotorVehicle {
private:
	Engine engine;
	Body body;
	Person owner;
	float* tireDiameters;
	int numberOfTires;
	std::string model;
public:
	MotorVehicle(Engine nEngine, Body nBody, Person nOwner, int nNumberOfTires, std::string nModel) {
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
	~MotorVehicle() {
		delete[] tireDiameters;
	}

	void setEngine(Engine nEngine) {
		engine = nEngine;
	}
	void setBody(Body nBody) {
		body = nBody;
	}
	void setOwner(Person nOwner) {
		owner = nOwner;
	}
	void setNumberOfTires(int nNumberOfTires) {
		if (numberOfTires < nNumberOfTires) {
			float* tempTireArray = new float[nNumberOfTires];
			memcpy(tempTireArray, tireDiameters, nNumberOfTires);
			delete[] tireDiameters;
			tireDiameters = tempTireArray;
		}
		numberOfTires = nNumberOfTires;
	}
	void setTireDiameterAll(float nTireDiameter) {
		for (int i = 0; i < numberOfTires; i++) {
			tireDiameters[i] = nTireDiameter;
		}
	}
	bool setTireDiameter(int tireNumber, float nTireDiameter) {
		if (tireNumber > numberOfTires) {
			return 0;
		}
		tireDiameters[tireNumber] = nTireDiameter;
		return 1;
	}
	
};