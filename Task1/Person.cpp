#include "Person.h"
#include <iostream>
#include <string>

class Person {
private:
	std::string Name;
	std::string Address;
	bool AllowedToDrive;
public:
	Person() : Name("Unknown"), Address("Unknown"), AllowedToDrive(0) {}

	Person(std::string nName, std::string nAddress = "Unknown", bool nAllowedToDrive = 0) {
		Name = nName;
		Address = nAddress;
		AllowedToDrive = nAllowedToDrive;
	}

	void setName(std::string nName) {
		Name = nName;
	}
	void setAddress(std::string nAddress) {
		Address = nAddress;
	}
	void setAllowedToDrive(bool nAllowedToDrive) {
		AllowedToDrive = nAllowedToDrive;
	}

	const std::string getName() const {
		return Name;
	}
	const std::string getAddress() const {
		return Address;
	}
	const bool getAllowedToDrive() const {
		return AllowedToDrive;
	}

	const void print() const {
		std::cout << "Name: " << Name << std::endl;
		std::cout << "Address: " << Address << std::endl;
		std::cout << "Allowed to drive: " << (AllowedToDrive ? "Yes" : "No");
	}
};