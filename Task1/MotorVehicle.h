#pragma once
#include "Person.h"
#include "Body.h"
#include "Engine.h"


class MotorVehicle {
private:
	Engine engine;
	Body body;
	Person owner;
	float* tireDiameters;
	int numberOfTires;
	std::string model;
public:
	MotorVehicle(Engine nEngine, Body nBody, Person nOwner, int nNumberOfTires, std::string nModel);
	virtual ~MotorVehicle();

	void setEngine(Engine nEngine);
	void setBody(Body nBody);
	void setOwner(Person nOwner);
	void setNumberOfTires(int nNumberOfTires);
	void setTireDiameterAll(float nTireDiameter);
	bool setTireDiameter(int tireNumber, float nTireDiameter);

	const Engine getEngine() const;
	const Body getBody() const;
	const Person getOwner() const;
	const int getNumberOfTires() const;
	const float* getTireDiameters() const;
	const std::string getModel() const;

	const void print() const;
};