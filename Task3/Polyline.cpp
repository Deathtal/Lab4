#include "Polyline.h"

Polyline::Polyline(const unsigned int& nArray_size) : array_size(nArray_size), array_object_amount(0) {
	points = new Point2D[nArray_size];
}

Polyline::~Polyline() {
	delete[] points;
}

const bool Polyline::add(const Point2D& nP) {
	if (array_object_amount == array_size) {
		perror("ERROR: const bool Polyline::add(const Point2D& nP): array is full");
		return 0;
	}
	points[array_object_amount] = nP;
	array_object_amount++;
	return 1;
}

const Point2D Polyline::getPoint(const unsigned int& index) const{
	if (index > array_size) {
		perror("ERROR: const Point2D Polyline::getPoint(const int& index): index > than array_size");
	}
	return points[index];
}

bool Polyline::removeLast() {
	//todo: figure out what I need to figure out to fix this

	array_object_amount--;
	return 1;
}

const bool Polyline::check(const Point2D& nP) const {
	for (int i = 0; i < array_object_amount; ++i) {
		if (points[i] == nP) {
			return 1;
		}
	}
	return 0;
}

const int Polyline::items() const {
	return array_object_amount;
}

const float Polyline::length() const {
	float total = 0;
	for (int i = 1; i < array_object_amount; ++i) {
		total += points[i-1].getDistance(points[i]);
	}
	return total;
}

const void Polyline::printCord() const {
	for (int i = 0; i < array_object_amount; ++i) {
		std::cout << points[i].toString() << std::endl;
	}
}