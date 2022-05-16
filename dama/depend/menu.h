#pragma once
#include <SFML\Graphics.hpp>

class Button
{
public:
	Button(int width, int height, sf::Color color, sf::Color outline_color, int outline_thickness,sf::Text text);
	~Button();

private:
	int width;
	int height;
	sf::Color color;
	sf::Color outline_color;
	int outline_thickness;
	sf::Text text;


};

Button::Button()
{
}

Button::~Button()
{
}

sf::RectangleShape createButton(int width, int height, sf::Color color, sf::Color outline_color, int outline_thickness, sf::Text text);

sf::RectangleShape createShape(int width, int height, sf::Color color, sf::Color outline_color, int outline_thickness, int position);
