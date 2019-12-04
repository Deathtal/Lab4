#include "Body.h"
#include <iostream>
#include <string>

class Body {
private:
	std::string color;
	float width, height;
public:
	Body() : color("Unknown"), width(0), height(0) {}

	Body(std::string nColor, float nWidth = 0, float nHeight = 0) {
		color = nColor;
		width = nWidth;
		height = nHeight;
	}

	void setColor(std::string nColor) {
		color = nColor;
	}
	void setSize(float nWidth, float nHeight) {
		width = nWidth;
		height = nHeight;
	}
	void setWidth(float nWidth) {
		width = nWidth;
	}
	void setHeight(float nHeight) {
		height = nHeight;
	}

	const std::string getColor() const {
		return color;
	}
	const float getWidth() const {
		return width;
	}
	const float getHeight() const {
		return height;
	}

	const void print() const {
		std::cout << "Body color: " << color << std::endl;
		std::cout << "Body size:\n\tWidth: " << width << "\n\tHeight: " << height << std::endl;
	}
};