#include "Point2D.h"
#include <iostream>

int main() { // Didn't really follow the instructions of what to write in main() because I had already written something that checks the same things. So I just changed the order a tad bit instead of just rewriting it all.
	Point2D point1, point2(5, 3), point3;
	point1.set(1, 2);
	std::cout << "Point1: " << point1.toString() << std::endl;
	std::cout << "Point2: " << point2.toString() << std::endl;
	std::cout << "Distance from Point1 to Point2: " << point1.getDistance(point2) << std::endl;
	point2 = point1;
	std::cout << "Point2: " << point2.toString() << std::endl;
	std::cout << "Point1 == Point2: " << ((point1 == point2) ? "True" : "False") << std::endl;
	point3 = point1 + point2;
	std::cout << "Point3: " << point3.toString() << std::endl;
	std::cout << "Point3 == Point1: " << ((point3 == point1) ? "True" : "False") << std::endl;
	std::cout << "Point3 == Point2: " << ((point3 == point2) ? "True" : "False") << std::endl;
}