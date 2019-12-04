#pragma once
#include <iostream>


class Body {
private:
	std::string color;
	float width, height;
public:
	Body();

	Body(std::string nColor, float nWidth = 0, float nHeight = 0);

	void setColor(std::string nColor);
	void setSize(float nWidth, float nHeight);
	void setWidth(float nWidth);
	void setHeight(float nHeight);

	const std::string getColor() const;
	const float getWidth() const;
	const float getHeight() const;

	const void print() const;
};