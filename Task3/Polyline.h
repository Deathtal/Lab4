#pragma once
#include "Point2D.h"

class Polyline {
private:
	Point2D* points;
	unsigned int array_size;
	unsigned int array_object_amount;
public:
	Polyline(const unsigned int& nArray_size);
	
	virtual ~Polyline();

	const bool add(const Point2D& nP);

	const Point2D getPoint(const unsigned int& index) const;

	bool removeLast();

	const bool check(const Point2D& nP) const;

	const int items() const;

	const float length() const;

	const void printCord() const;
};