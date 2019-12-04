#include "Body.h"
#include <iostream>
#include <string>

Body::Body() : color("Unknown"), width(0), height(0) {}

Body::Body(std::string nColor, float nWidth, float nHeight) {
	color = nColor;
	width = nWidth;
	height = nHeight;
}

void Body::setColor(std::string nColor) {
	color = nColor;
}
void Body::setSize(float nWidth, float nHeight) {
	width = nWidth;
	height = nHeight;
}
void Body::setWidth(float nWidth) {
	width = nWidth;
}
void Body::setHeight(float nHeight) {
	height = nHeight;
}

const std::string Body::getColor() const {
	return color;
}
const float Body::getWidth() const {
	return width;
}
const float Body::getHeight() const {
	return height;
}

const void Body::print() const {
	std::cout << "Body color: " << color << std::endl;
	std::cout << "Body size:\n\tWidth: " << width << "\n\tHeight: " << height << std::endl;
}