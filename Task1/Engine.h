#pragma once

class Engine {
private:
	float sizeInLiters;
	int numberOfCylinders;
public:
	Engine();

	Engine(float nSizeInLiters, int nNumberOfCylinders = 0);

	void setSize(float nSizeInList);
	void setNumberOfCylidners(int nNumberOfCylinders);

	const float getSize() const;
	const int getNumberOfCylinders() const;

	const void print() const;
};