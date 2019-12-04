#include "MotorVehicle.h"
#include <iostream>
#include <string>

int main() {
	Person person;
	Body body;
	Engine engine;

	std::string name;
	std::string address;
	std::string BodyColor;
	float width, height, engineSize;
	int numberOfCylinders;
	int numberOfTires;
	float tireDiameters;
	int tireNumber;
	std::string model;
	for (int i = 0; i < 2; i++) {
		std::cout << "Name: ";
		std::cin >> name;
		person.setName(name);
		std::cout << "Address: ";
		std::cin >> address;
		person.setAddress(address);
		std::cout << "Color of body: ";
		std::cin >> BodyColor;
		body.setColor(BodyColor);
		std::cout << "Vehicle width: ";
		std::cin >> width;
		std::cout << "Vehicle height: ";
		std::cin >> height;
		body.setSize(width, height);
		std::cout << "Size of engine in liters: ";
		std::cin >> engineSize;
		engine.setSize(engineSize);
		std::cout << "Number of cylinders: ";
		std::cin >> numberOfCylinders;
		std::cout << "Number of tires: ";
		std::cin >> numberOfTires;
		engine.setNumberOfCylidners(numberOfCylinders);
		std::cout << "Model: ";
		std::cin >> model;

		MotorVehicle vehicle(engine, body, person, numberOfTires, model);

		vehicle.print();

		std::cout << "Tire diameters: ";
		std::cin >> tireDiameters;
		vehicle.setTireDiameterAll(tireDiameters);
		vehicle.print();

		do {
			std::cout << "Tire number to change diameter of: ";
			std::cin >> tireNumber;
			std::cout << "Tire diameter: ";
			std::cin >> tireDiameters;
		} while (!vehicle.setTireDiameter(tireNumber, tireDiameters));

		vehicle.print();

		std::cin.get();
		std::cin.get();
	}
}