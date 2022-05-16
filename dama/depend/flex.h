#pragma once
#include <SFML\Graphics.hpp>
class Flex
{
public:
	Flex();
	~Flex();

	
	sf::RectangleShape createShape(int width, int height, sf::Color color, sf::Color outline_color, int outline_thickness, int x,int y);

private:

};

Flex::Flex()
{
}

Flex::~Flex()
{
}
