#include "Person.h"
#include <iostream>
#include <string>

Person::Person() : Name("Unknown"), Address("Unknown"), AllowedToDrive(0) {}

Person::Person(std::string nName, std::string nAddress, bool nAllowedToDrive) {
	Name = nName;
	Address = nAddress;
	AllowedToDrive = nAllowedToDrive;
}

void Person::setName(std::string nName) {
	Name = nName;
}
void Person::setAddress(std::string nAddress) {
	Address = nAddress;
}
void Person::setAllowedToDrive(bool nAllowedToDrive) {
	AllowedToDrive = nAllowedToDrive;
}

const std::string Person::getName() const {
	return Name;
}
const std::string Person::getAddress() const {
	return Address;
}
const bool Person::getAllowedToDrive() const {
	return AllowedToDrive;
}

const void Person::print() const {
	std::cout << "Name: " << Name << std::endl;
	std::cout << "Address: " << Address << std::endl;
	std::cout << "Allowed to drive: " << (AllowedToDrive ? "Yes" : "No") << std::endl;
}