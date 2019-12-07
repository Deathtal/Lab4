#include "Polyline.h"

int main() {
	Polyline line(5);
	Point2D p1(0, 0), p2(0, 3), p3(0, 1);

	line.add(p1);
	line.add(p2);
	line.add(p3);
	std::cout << line.length() << std::endl;
	line.printCord();
	std::cout << line.getPoint(3).toString() << std::endl;
	std::cout << line.check(p1) << std::endl;
	std::cout << line.items() << std::endl;
}