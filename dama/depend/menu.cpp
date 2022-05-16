#include "menu.h"




sf::RectangleShape createShape(int width, int height, sf::Color button_color,sf::Color outline_color,int position) {
	sf::RectangleShape this_shape(sf::Vector2f(width, height));
	this_shape.setOutlineColor(outline_color);
	this_shape.setOutlineThickness(6);
	this_shape.setFillColor(button_color);
	

	return this_shape;

}
