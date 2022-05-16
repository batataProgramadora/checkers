#include "flex.h"


sf::RectangleShape Flex::createShape(int width, int height, sf::Color color, sf::Color outline_color, int outline_thickness, int x,int y) {
	sf::RectangleShape this_shape(sf::Vector2f(width, height));
	this_shape.setOutlineColor(outline_color);
	this_shape.setOutlineThickness(6);
	this_shape.setFillColor(color);
	this_shape.setPosition(x,  y);
	

	return this_shape;

}