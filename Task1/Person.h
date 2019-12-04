#pragma once
#include <iostream>

class Person {
private:
	std::string Name;
	std::string Address;
	bool AllowedToDrive;
public:
	Person();

	Person(std::string nName, std::string nAddress = "Unknown", bool nAllowedToDrive = 0);

	void setName(std::string nName);
	void setAddress(std::string nAddress);
	void setAllowedToDrive(bool nAllowedToDrive);

	const std::string getName() const;
	const std::string getAddress() const;
	const bool getAllowedToDrive() const;

	const void print() const;
};