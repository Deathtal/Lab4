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
	std::string model;

	std::cout << "Name: ";
	std::cin >> name;
	person.setName(name);
	std::cout << "Address: ";
	std::cin >> address;
	person.setAddress(address);
	std::cout << "Color of carbody: ";
	std::cin >> BodyColor;
	body.setColor(BodyColor);
	std::cout << "Car width: ";
	std::cin >> width;
	std::cout << "Car height: ";
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

	std::cin.get();
	std::cin.get();
}